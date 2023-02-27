#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int my_strncmp(const char* str1, const char* str2, int n) {
	if (n == 0) {         //n=0ʱ�����ַ���Ҫ�Ƚ�
		return 0;
	}
	int i = 0;
	while (n && (*str1 == *str2) && (*str1)) {  //���ַ�����Ҳ�Ϊ'\0'ʱ�ͱȽ���һ���ַ� 
		str1++;
		str2++;
		--n;
	}
	return *str1 - *str2;
}

int strlen(char* dest) {
	int len = 0;
	while (*(dest++) != '\0')
		++len;
	return len;
}
char* my_strlwr(char* str)
{
	while (*str != '\0')     //ѭ������
	{
		if ((*str >= 'A') && (*str <= 'Z'))  //��дת����Сд
		{
			*str = *str + ('a' - 'A');
		}
		str++;      //������ָ�ַ���
	}
	return str;
}
char* my_strupr(char* str)
{
	while (*str != '\0')    //ѭ������
	{
		if ((*str >= 'a') && (*str <= 'z'))   //Сдת���ɴ�д
		{
			*str = *str + ('A' - 'a');
		}
		str++;     //������ָ�ַ���
	}
	return str;
}

int my_strcasecmp(const char* t, const char* s) {
	int str1 = 0;
	int str2 = 0;
	while (*t != '\0' || *s != '\0') { //һֱ�Ƚϵ����һλ
		str1 = *t;                    //����һ��(��һ�����ַ�����str1
		str2 = *s;
		if (*t >= 'A' && *t <= 'Z') {
			str1 = *t - 'A' + 'a';     //����д��ĸת��ΪСд
		}
		if (*s >= 'A' && *s <= 'Z') {
			str2 = *s - 'A' + 'a';
		}
		if (str1 != str2) {           //����������
			return str1 - str2;
		}
		t++;                    //��ѭ��
		s++;
	}
	return 0;
}
void strcpy(char s1[], char s2[]) {
	int i=0;
	char ch;
	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;                   //���ַ���s1���ݸ��Ƶ�s2��
	}
	s2[i] = '\0';                 //ĩβ׷��'\0'
}

char* my_strncpy(char* dest, const char* src, int n) {
	char* ret = dest;
	while (n && *src) {     //n��Ϊ0��*src��Ϊ'\0'
		*dest = *src;      //���Ƶ�Ŀ������
		src++;
		dest++;
		n--;              //nΪ0������ѭ��
	}
	if (n != 0) {            //����src�ṩԪ�ز�����n������0��������'\0'
		while (n > 0) {
			*dest = '\0';
			dest++;
			--n;           //����ಹ
		}
	}
	return ret;
}

void my_strcat(char* dest, const char* src)
{
	while (*dest != '\0')   //�ҵ�'\0'λ��
	{
		++dest;
	}
	while (*dest = *src)   //��src��ֵ��dest
	{
		++dest;
		++src;
	}
	*dest = '\0';        //��󸲸�'\0'
}

char* my_strncat(char* dest, const char* src, int num)
{
	char* ret = dest;
	while (*dest != '\0')        //�ҵ�'\0'��λ��
	{
		dest++;
	}
	while (num--)                //��ԭ�ַ���׷���ַ��������Ŀ���ַ���
	{
		*dest++ = *src++;
	}
	*dest = '\0';               //��󸲸�'\0'
	return ret;
}

char* my_strchr(char* str, char c) {
	char* s = str;
	while (*s && *s != c) {     //ѭ������
		s++;
	}
	if (*s == c) {          //�ҵ��򷵻���Ӧ��ַ
		return s;
	}
	return NULL;     //δ�ҵ�����NULL
}
int my_strcmp(const char* s, const char* t) {
	while (*s != '\0' && *t != '\0' && (*s == *t)) {
		s++;
		t++;
	}            //һֱ�������ֱ����Ӧ�ַ����Ȼ�Ƚϵ���β
	return *s - *t; // �Ƚ��ַ�����С
}

char* my_strstr(char* str1, char* str2)
{
	char* s = str1;
	while (*s)//���s��ָΪ0����str1û��str2�ڵ��ַ�
	{
		char* p1 = s;//��¼��str1��ʼÿ�μ�һ�ĵ�ַ
		char* p2 = str2;//��s��ʼû��ƥ�䵽str2������str2��ͷ��ʼ����str2��ֵ��p2
		while (*p2)//���p2Ϊ0�������str2�е��ַ�������str1���ҵ�
		{
			if (*p1 == *p2)//���str1=str2��������ַ������
			{
				p1++;
				p2++;
			}
			else
				break;
		}
		if (*p2 == 0) {
			return s;//���ش�str1�п�ʼƥ��ĵ�ַ
		}
		s++;//��������p2��Ϊ0�����Ҳ�����str1����һλ
	}
	return NULL;//�������򷵻�NULL
}




