
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

int main() {
	char arr1[20];
	char arr2[20];
	int n;
	printf("�������һ���ַ�����\n");
	scanf("%s", &arr1);
	printf("������ڶ����ַ�����\n");
	scanf("%s", &arr2);
	printf("��������Ҫ�Ƚϵĳ��ȣ�\n");
	scanf("%d", &n);
	printf("%d", my_strncmp(arr1, arr2, n));
	return 0;
}
#include <stdio.h>
int strlen(char* dest) {
	int len = 0;
	while (*(dest++) != '\0')
		++len;
	return len;
}

int main() {
	char arr[20];
	printf("�������ַ�����\n");
	scanf("%s", &arr);
	printf("����Ϊ��\n");
	printf("%d", strlen(arr));
	return 0;
}
#include <stdio.h>
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

int main() {
	char arr[20];
	printf("�������ַ�����\n");
	scanf("%s", &arr);
	printf("ת������ַ���Ϊ��\n");
	printf("%s", my_strlwr(arr));
	printf("%s", arr);
	return 0;
}
#include <stdio.h>
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

int main() {
	char arr1[20];
	char arr2[20];
	printf("�������һ���ַ�����\n");
	scanf("%s", &arr1);
	printf("������ڶ����ַ�����\n");
	scanf("%s", &arr2);
	printf("%d", my_strcasecmp(arr1, arr2));
	return 0;
}
#include <stdio.h>
void strcpy(char s1[], char s2[]) {
	int i;
	char ch;
	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;                   //���ַ���s1���ݸ��Ƶ�s2��
	}
	s2[i] = '\0';                 //ĩβ׷��'\0'
}

int main() {
	char s1[100];
	char s2[100];
	printf("����������Ҫ���Ƶ����ݣ�\n");
	scanf("%s", &s1);
	strcpy(s1, s2);
	printf("%s", s2);
	return 0;
}
#include <stdio.h>
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
int main() {
	char arr1[20];
	char arr2[20];
	int n;
	printf("�������ַ�����\n");
	scanf("%s", &arr1);
	printf("��������Ҫ���Ƶ��ַ�����\n");
	scanf("%s", &arr2);
	printf("�����븴�Ƴ��ȣ�\n");
	scanf("%d", &n);
	printf("�����ַ���Ϊ��\n");
	my_strncpy(arr1, arr2, n);
	printf("%s", arr1);
	return 0;
}
#include<stdio.h>
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
int main()
{
	char arr1[20];
	char arr2[20];
	printf("������ԭ�ַ�����\n");
	scanf("%s", &arr1);
	printf("�����븽���ַ�����\n");
	scanf("%s", &arr2);
	printf("�����ַ���Ϊ��\n");
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
#include<stdio.h>
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
int main()
{
	char arr1[20];
	char arr2[20];
	int n;
	printf("������ԭ���ַ�����\n");
	scanf("%s", &arr1);
	printf("����������Ҫ���ӵ��ַ�����\n");
	scanf("%s", &arr2);
	printf("����������Ҫ�����ַ����ĳ��ȣ�\n");
	scanf("%d", &n);
	printf("�����ַ���Ϊ��\n");
	printf("%s\n", my_strncat(arr1, arr2, n));
	return 0;
}
#include<stdio.h>
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

int main() {
	char arr[20];
	char c;
	char* p;
	printf("�������ַ���������ҵ��ַ���\n");
	scanf("%s %c", &arr, &c);
	p = my_strchr(arr, c);
	if (p == NULL) {
		printf("%s", p);
	}
	else {
		printf("Found!\n");
	}
	return 0;
}
#include <stdio.h>
int my_strcmp(const char* s, const char* t) {
	while (*s != '\0' && *t != '\0' && (*s == *t)) {
		s++;
		t++;
	}            //һֱ�������ֱ����Ӧ�ַ����Ȼ�Ƚϵ���β
	return *s - *t; // �Ƚ��ַ�����С
}

int main() {
	char arr1[20];
	char arr2[20];
	int t;
	printf("�������һ���ַ�����\n");
	scanf("%s", &arr1);
	printf("������ڶ����ַ�����\n");
	scanf("%s", &arr2);
	t = my_strcmp(arr1, arr2);
	if (t == 0) {
		printf("0");
	}
	else {
		printf("%d", t);
	}
	return 0;
}
