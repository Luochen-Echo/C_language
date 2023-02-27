
int my_strncmp(const char* str1, const char* str2, int n) {
	if (n == 0) {         //n=0时，无字符需要比较
		return 0;
	}
	int i = 0;
	while (n && (*str1 == *str2) && (*str1)) {  //当字符相等且不为'\0'时就比较下一个字符 
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
	printf("请输入第一个字符串：\n");
	scanf("%s", &arr1);
	printf("请输入第二个字符串：\n");
	scanf("%s", &arr2);
	printf("请输入想要比较的长度：\n");
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
	printf("请输入字符串：\n");
	scanf("%s", &arr);
	printf("长度为：\n");
	printf("%d", strlen(arr));
	return 0;
}
#include <stdio.h>
char* my_strlwr(char* str)
{
	while (*str != '\0')     //循环条件
	{
		if ((*str >= 'A') && (*str <= 'Z'))  //大写转换成小写
		{
			*str = *str + ('a' - 'A');
		}
		str++;      //遍历所指字符串
	}
	return str;
}
char* my_strupr(char* str)
{
	while (*str != '\0')    //循环条件
	{
		if ((*str >= 'a') && (*str <= 'z'))   //小写转换成大写
		{
			*str = *str + ('A' - 'a');
		}
		str++;     //遍历所指字符串
	}
	return str;
}

int main() {
	char arr[20];
	printf("请输入字符串：\n");
	scanf("%s", &arr);
	printf("转换后的字符串为：\n");
	printf("%s", my_strlwr(arr));
	printf("%s", arr);
	return 0;
}
#include <stdio.h>
int my_strcasecmp(const char* t, const char* s) {
	int str1 = 0;
	int str2 = 0;
	while (*t != '\0' || *s != '\0') { //一直比较到最后一位
		str1 = *t;                    //将第一个(下一个）字符赋给str1
		str2 = *s;
		if (*t >= 'A' && *t <= 'Z') {
			str1 = *t - 'A' + 'a';     //将大写字母转换为小写
		}
		if (*s >= 'A' && *s <= 'Z') {
			str2 = *s - 'A' + 'a';
		}
		if (str1 != str2) {           //不相等则相减
			return str1 - str2;
		}
		t++;                    //逐步循环
		s++;
	}
	return 0;
}

int main() {
	char arr1[20];
	char arr2[20];
	printf("请输入第一个字符串：\n");
	scanf("%s", &arr1);
	printf("请输入第二个字符串：\n");
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
		i++;                   //将字符串s1内容复制到s2中
	}
	s2[i] = '\0';                 //末尾追加'\0'
}

int main() {
	char s1[100];
	char s2[100];
	printf("请输入您想要复制的内容：\n");
	scanf("%s", &s1);
	strcpy(s1, s2);
	printf("%s", s2);
	return 0;
}
#include <stdio.h>
char* my_strncpy(char* dest, const char* src, int n) {
	char* ret = dest;
	while (n && *src) {     //n不为0且*src不为'\0'
		*dest = *src;      //复制到目标数组
		src++;
		dest++;
		n--;              //n为0则跳出循环
	}
	if (n != 0) {            //数组src提供元素不够，n还大于0，则往后补'\0'
		while (n > 0) {
			*dest = '\0';
			dest++;
			--n;           //避免多补
		}
	}
	return ret;
}
int main() {
	char arr1[20];
	char arr2[20];
	int n;
	printf("请输入字符串：\n");
	scanf("%s", &arr1);
	printf("请输入想要复制的字符串：\n");
	scanf("%s", &arr2);
	printf("请输入复制长度：\n");
	scanf("%d", &n);
	printf("所得字符串为：\n");
	my_strncpy(arr1, arr2, n);
	printf("%s", arr1);
	return 0;
}
#include<stdio.h>
void my_strcat(char* dest, const char* src)
{
	while (*dest != '\0')   //找到'\0'位置
	{
		++dest;
	}
	while (*dest = *src)   //将src赋值给dest
	{
		++dest;
		++src;
	}
	*dest = '\0';        //最后覆盖'\0'
}
int main()
{
	char arr1[20];
	char arr2[20];
	printf("请输入原字符串：\n");
	scanf("%s", &arr1);
	printf("请输入附加字符串：\n");
	scanf("%s", &arr2);
	printf("最终字符串为：\n");
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
#include<stdio.h>
char* my_strncat(char* dest, const char* src, int num)
{
	char* ret = dest;
	while (*dest != '\0')        //找到'\0'的位置
	{
		dest++;
	}
	while (num--)                //往原字符串追加字符，最后获得目标字符串
	{
		*dest++ = *src++;
	}
	*dest = '\0';               //最后覆盖'\0'
	return ret;
}
int main()
{
	char arr1[20];
	char arr2[20];
	int n;
	printf("请输入原本字符串：\n");
	scanf("%s", &arr1);
	printf("请输入你想要附加的字符串：\n");
	scanf("%s", &arr2);
	printf("请输入你想要附加字符串的长度：\n");
	scanf("%d", &n);
	printf("所得字符串为：\n");
	printf("%s\n", my_strncat(arr1, arr2, n));
	return 0;
}
#include<stdio.h>
char* my_strchr(char* str, char c) {
	char* s = str;
	while (*s && *s != c) {     //循环查找
		s++;
	}
	if (*s == c) {          //找到则返回相应地址
		return s;
	}
	return NULL;     //未找到返回NULL
}

int main() {
	char arr[20];
	char c;
	char* p;
	printf("请输入字符串和想查找的字符：\n");
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
	}            //一直往后查找直到对应字符不等或比较到串尾
	return *s - *t; // 比较字符串大小
}

int main() {
	char arr1[20];
	char arr2[20];
	int t;
	printf("请输入第一个字符串：\n");
	scanf("%s", &arr1);
	printf("请输入第二个字符串：\n");
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
