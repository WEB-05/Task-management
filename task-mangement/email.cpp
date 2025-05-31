#define _CRT_SECURE_NO_WARNINGS
#define RECV_SIZE 256
#define SEND_SIZE 102400

#include<iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <winsock2.h>
#include <sys/types.h>
#include <ws2tcpip.h>
#include "email.h"

using namespace std;

int to_base64(char* dst, char* src, int size);
int prepare_DATA(char* from_email, char* to_email, char* subject, char* body, char* attach_file, char* target_DATA);


int cfd;
int establish_connection();
int close_connection();

int request_and_response(char* request, char* response);
int send_email_under(char* account, char* password, char* from_email, char* to_email,
               char* subject, char* body);

int to_base64(char* dst, char* src, int size) {
    const char* base64_table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int str_len = strlen(src);
    int len = 0;
    int i, j;

    if (str_len % 3 == 0)
        len = str_len / 3 * 4;
    else
        len = (str_len / 3 + 1) * 4;
    dst[len] = '\0';


    for (i = 0, j = 0; i < len - 2; j += 3, i += 4)
    {

        dst[i] = base64_table[src[j] >> 2];
        dst[i + 1] = base64_table[(src[j] & 0x3) << 4 | (src[j + 1] >> 4)];
        dst[i + 2] = base64_table[(src[j + 1] & 0xf) << 2 | (src[j + 2] >> 6)];
        dst[i + 3] = base64_table[src[j + 2] & 0x3f];
    }

    switch (str_len % 3)
    {
    case 1:
        dst[i - 2] = '=';
        dst[i - 1] = '=';
        break;
    case 2:
        dst[i - 1] = '=';
        break;
    }
    return 0;
}


int establish_connection() {


    cfd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (cfd == -1) {
        perror("socket error");
        return EXIT_FAILURE;
    }

    const char* host = "1.95.20.22";
    int port = 25;
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    inet_pton(AF_INET, host, &addr.sin_addr.s_addr);
    addr.sin_port = htons(port);

    int ret = connect(cfd, (struct sockaddr*)&addr, sizeof(addr));
    if (ret == -1) {
        perror("connect error");
        return EXIT_FAILURE;
    }

    return 1;
}

int close_connection() {
    closesocket(cfd);
    return 0;
}

int request_and_response(char* request, char* response) {

    int size;
    if ((size = send(cfd, request, strlen(request), 0)) == -1)
    {
        perror("send() error");
        return 0;
    }
    else
    {
        printf("REQUEST: %s\n", request);
        fflush(stdout);
    }
    memset(response, 0, 256);
    size = recv(cfd, response, 256, 0);
    if (size == -1) {
        perror("recv() error");
        return 0;
    }
    else if (size == 0) {
        printf("[Client] The server is shut down\n");
        fflush(stdout);
    }
    else {
        printf("RESPONSE: %s\n", response);
        fflush(stdout);
    }

    return 1;

}


int prepare_DATA(char* from_email, char* to_email, char* subject, char* body, char* target_DATA) {
    char temp[102400]; // 100KB
    strcpy(target_DATA, "");
    // FROM
    sprintf(temp, "From: %s\r\n", from_email);
    strcat(target_DATA, temp);

    sprintf(temp, "TO: %s\r\n", to_email);
    strcat(target_DATA, temp);
    sprintf(temp, "SUBJECT: %s\r\n\r\n", subject);
    strcat(target_DATA, temp);
    strcat(target_DATA, body);
    strcat(target_DATA, "\r\n");
    strcat(target_DATA, ".\r\n");
    return 1;
}





int send_email_under(char* username, char* password, char* from_email, char* to_email,
               char* subject, char* body) {

    establish_connection();

    char temp[100] = { 0 };
    char rbuf[RECV_SIZE] = {0};
    char sbuf[SEND_SIZE] = { 0 };

    recv(cfd, rbuf, RECV_SIZE, 0);
    printf("From server: %s\n", rbuf);

    sprintf(sbuf, "HELO smtp\r\n");
    request_and_response(sbuf, rbuf);

    sprintf(sbuf, "AUTH LOGIN\r\n");
    request_and_response(sbuf, rbuf);

    to_base64(sbuf, username, sizeof(username));
    strcat(sbuf, "\r\n");
    request_and_response(sbuf, rbuf);

    to_base64(sbuf, password, sizeof(password));
    strcat(sbuf, "\r\n");
    request_and_response(sbuf, rbuf);

    sprintf(sbuf, "MAIL FROM: <");
    strcat(sbuf, from_email);
    strcat(sbuf, ">\r\n");
    request_and_response(sbuf, rbuf);

    sprintf(sbuf, "RCPT TO: <");
    strcat(sbuf, to_email);
    strcat(sbuf, ">\r\n");
    request_and_response(sbuf, rbuf);
    sprintf(sbuf, "DATA\r\n");
    request_and_response(sbuf, rbuf);

    prepare_DATA(from_email, to_email, subject, body, sbuf);
    request_and_response(sbuf, rbuf);

    sprintf(sbuf, "QUIT\r\n");
    request_and_response(sbuf, rbuf);


    close_connection();

    return 1;
}



int send_email(string user,string pass,string from,string to,string subject,string content )
{
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        printf("WSAStartup failed with error: %d\n", result);
        return 1;
    }
    char username[100];
    char password[50];
    char from_email[50];
    char to_email[50];

    sprintf(username,user.c_str());
    sprintf(password,pass.c_str());
    sprintf(from_email,from.c_str());
    sprintf(to_email,to.c_str());

    char* title =(char*) subject.c_str();
    char* text = (char*) content.c_str();
    send_email_under(username, password, from_email, to_email, title, text);
    WSACleanup();
    return 1;
}
