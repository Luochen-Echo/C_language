#pragma once

//头文件包含
#include<stdio.h>
int my_strncmp(const char* str1, const char* str2, int n);
int strlen(char* dest);
char* my_strlwr(char* str);
char* my_strupr(char* str);
int my_strcasecmp(const char* t, const char* s);
void strcpy(char s1[], char s2[]);
char* my_strncpy(char* dest, const char* src, int n);
void my_strcat(char* dest, const char* src);


char* my_strncat(char* dest, const char* src, int num);

char* my_strchr(char* str, char c);
int my_strcmp(const char* s, const char* t);

char* my_strstr(char* str1, char* str2);