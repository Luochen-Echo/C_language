#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

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

int strlen(char* dest) {
	int len = 0;
	while (*(dest++) != '\0')
		++len;
	return len;
}
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
void strcpy(char s1[], char s2[]) {
	int i=0;
	char ch;
	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;                   //将字符串s1内容复制到s2中
	}
	s2[i] = '\0';                 //末尾追加'\0'
}

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
int my_strcmp(const char* s, const char* t) {
	while (*s != '\0' && *t != '\0' && (*s == *t)) {
		s++;
		t++;
	}            //一直往后查找直到对应字符不等或比较到串尾
	return *s - *t; // 比较字符串大小
}

char* my_strstr(char* str1, char* str2)
{
	char* s = str1;
	while (*s)//如果s所指为0，则str1没有str2内的字符
	{
		char* p1 = s;//记录从str1开始每次加一的地址
		char* p2 = str2;//从s开始没有匹配到str2，就让str2重头开始，将str2赋值给p2
		while (*p2)//如果p2为0，则表明str2中的字符都能在str1中找到
		{
			if (*p1 == *p2)//如果str1=str2，两个地址都自增
			{
				p1++;
				p2++;
			}
			else
				break;
		}
		if (*p2 == 0) {
			return s;//返回从str1中开始匹配的地址
		}
		s++;//跳出，且p2不为0，则找不到，str1向后加一位
	}
	return NULL;//不存在则返回NULL
}




