#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int _strlen(char* a)
{


	int i = 0;
	while (*a != '\0')
	{
		a++;
		i++;
	}
	return i;

}



void my_strcpy()
{
	printf("\n");
	printf("输入原字符串\n");
	char s1[1000] = { 0 };
	
	scanf("%s", &s1);
	printf("输入被复制字符串\n");
	char s2[1000] = { 0 };
	scanf("%s", &s2);

	int i = 0;
	while (s2[i] != '\0')   //一个一个循环复制过去
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';			//末尾附带上，防止乱码
	printf("\n");          
	printf("原字符串变为：%s\n", s1);


}



void my_strncpy()
{
	/*printf("\n");
	printf("输入两个字符串\n");

	char s1[1000] = { 0 }, s2[1000] = { 0 };
	scanf("%s", &s1);
	scanf("%s", &s2);
	int n;
	scanf("%d", &n);
	char* str1 = s1;
	char* str2 = s2;

	while (n)
	{
		*str1++ = *str2++;
		n--;
	}
	if (n)
	{
		while (--n)
			*str1++ = '\0';
	}
	printf("%s\n", s1);*/

	int n;
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	printf("输入原字符串：\n"); 
	getchar();
	gets_s(s1);
	printf("输入被复制的字符串:\n"); 
	gets_s(s2);
	printf("输入指定长度：\n");
	scanf("%d", &n);
	printf("新字符串为：\n");
	for (int i = 0; i < n; i++)
		printf("%c", s2[i]);    

}

void my_strcat()
{
	printf("\n");
	printf("输入原字符串\n");
	char s1[1000] = { 0 };

	scanf("%s", &s1);
	printf("输入附加字符串\n");
	char s2[1000] = { 0 };
	scanf("%s", &s2);

	int i = 0;
	while (s1[i] != '\0')      //标注出第一个字符串末尾位置
	{
		++i;
	}
	int j = 0;
	while (s2[j] != '\0')   
	{
		s1[i] = s2[j];			//从第一个字符串末尾开始附加上s2
		i++;
		j++;
	}
	s1[i] = '\0';
	printf("\n");
	printf("新字符串为：%s\n", s1);


}


// 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。
/*printf("\n");
	printf("输入两个字符串\n");
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	scanf("%s", &s1);
	scanf("%s", &s2);
	printf("\n");
	printf("请输入指定长度字符\n");
	int n;
	scanf("%d", &n);
	char* str1 = s1;
	char* str2 = s2;
	int a = _strlen(s1);
	int i = 0;
	while (*(str1++ + a + i) = *(str2++ + i))
	{
		if (i == n)
		{
			*(str1 + a + i) = 0;
			break;
		}
	}
	printf("\n");
	printf("%s\n", s1);*/
void my_strncat()
{
	
	int x;
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	printf("输入原字符串：\n");
	getchar();
	gets_s(s1);
	printf("输入附加字符串:\n");
	gets_s(s2);
	printf("输入指定长度：");
	scanf("%d", &x);
	printf("新字符串为：");
	int court, k;

	for (court = 0, k = 0; s1[k]; k++, court++);
	//court为字符串长度 ，定位s1末尾

	for (int i = 0; i < court; i++)
		printf("%c", s1[i]);

	for (int j = 0; j < x; j++)
		printf("%c", s2[j]);
}



void my_strlen()
{
	printf("\n");
	printf("求字符串长度\n");
	printf("请输入一串字符\n");
	char s[1000] = {0};
	
	scanf("%s", &s);		
	char* a=s;				//定义指针等于首元素地址
	int i = 0;
	while (*a != '\0')		//不为结束符时，指针下移一位，计数加一
	{
		a++;
		i++;
	}
	printf("\n");
	printf("字符串长度是：%d\n", i);
	
}


//有问题

//int i, j, court1, court2;
//for (i = 0, court1 = 0; s1[i]; i++, court1++);
//for (j = 0, court2 = 0; s2[j]; j++, court2++);
//while (s1[i] == s2[i] && s1[i] != '\0')
//{
//	i++;
//}
//
//
//
//
//printf("\n");
//
//printf("%d\n", i);

void my_strcmp()
{
	printf("\n");
	printf("输入两个字符串\n");
	printf("如果返回值小于 0，则表示 str1 小于 str2。\n");
	printf("如果返回值大于 0，则表示 str1 大于 str2。\n");
	printf("如果返回值等于 0，则表示 str1 等于 str2。\n");
	char s1[1000] = { 0 }, s2[1000] = {0};

	scanf("%s", &s1);
	scanf("%s", &s2);

	char* str1 = s1;
	char* str2 = s2;

	while (*str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	int c = *str1 - *str2;
		printf("%d\n", c);


	
}

void my_strcasecmp()
{
	printf("\n");
	printf("输入两个字符串\n");
	printf("如果返回值小于 0，则表示 str1 小于 str2。\n");
	printf("如果返回值大于 0，则表示 str1 大于 str2。\n");
	printf("如果返回值等于 0，则表示 str1 等于 str2。\n");
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	scanf("%s", &s1);
	scanf("%s", &s2);

	char* str1 = s1;
	char* str2 = s2;
	
	int a = 0; int b = 0;
	while (*str1 != '\0' || *str2 != '\0')
	{
		a = *str1;
		b = *str2;
		if (*str1 >= 'A' && *str1 <= 'Z')
		{
			a = *str1 - 'A' + 'a';
		}
		if (*str2 >= 'A' && *str2 <= 'Z')
		{
			b = *str2 - 'A' + 'a';
		}
		if (a != b)
		{
			printf("%d\n", a - b);
		}
		str1++;
		str2++;
	}
	printf("0\n");

	
	
	
}

void my_strncmp()
{
	printf("\n");
	printf("输入两个字符串\n");
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	scanf("%s", &s1);
	scanf("%s", &s2);
	printf("请输入前多少位比较\n");
	char* str1 = s1;
	char* str2 = s2;

	int n;
	scanf("%d", &n);
	while (n && *str1 && *str2)
	{
		printf("逐位输出结果\n");
		if (*str1 > *str2)
		{
			printf("1\n");
		}
		if (*str1 < *str2)
		{
			printf("-1\n");
		}
		if (*str1 == *str2)
		{
			printf("0\n");
		}
		n--;
		str1++;
		str2++;
	}
	
	
}

/*printf("\n");
	printf("输入一个字符串\n");

	char s1[1000] = { 0 };
	scanf("%s", &s1);
	printf("输入查找字符\n");
	char s;
	scanf("%c", &s);



	char* a = s1;

	while (*a != s && *a)
	{
		a++;
	}
	if (*a != '\0')
		printf( "%s\n", (char*)a);
	else
		printf("None");*/


void my_strchr()
{
	

	char c, s1[10010];
	int index = -1;//记录下标 
	getchar();
	printf("输入所查找字符:\n");
	scanf("%c", &c);
	printf("输入字符串\n");
	getchar();
	gets_s(s1);
	for (int i = 0; s1[i] != '\0'; i++)	//循环查找字符
	{
		if (s1[i] == c)
		{
			index = i;
		}
	}
								
	if (index != -1)							//下标位置 
	{
		printf("下标index = %d\n", index);
		printf("地址：%d\n", &s1[index]);
	}
	else
	{
		printf("Not Found");
	}

}





//char* my_strstr(const char* dis, const char* src)

	/*char* A = (char*)src;
	char* B = (char*)dis;
	char* C = (char*)dis;
	while (*(char*)C)
	{
		*(char*)B = *(char*)C;
		while (*dis != '\0' && *src != '\0' && (*(char*)A == *(char*)B))
		{
			(char*)A++;
			(char*)B++;
		}
		if (*(char*)A == '\0')
		{
			return C;
		}
		*(char*)A = *(char*)src;
		C++;
	}*/

void my_strstr()
{


	
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	getchar();
	printf("输入字符串s1:\n");
	gets_s(s1);
	printf("输入子字符串s2:\n");
	gets_s(s2);
	int i, j, court1, court2;
	for (i = 0, court1 = 0; s1[i]; i++, court1++);
	for (j = 0, court2 = 0; s2[j]; j++, court2++);
	int flag = 0;                                  //判断是否存在子串 
	if (court1 < court2)
	{
		printf("NULL");
	}
	else {
		char* str1 = s1, * str2 = s2;
		while (*str1) {
			for (; *str1 != *str2 && *str1; str1++); //str1为长串首字符，str2为子串首字符 
			if (*str1 == '\0')					//str1移动直到没有出现相同
			{  
				flag = 0;
				break;
			}
			char* str3 = str1, * str4 = str2;	//s1中出现与s2首字符相同的字符，定义两个新指针后移查找 
			int acc = 0;				//记录str3后与str4相等的字符数 
			for (i = 0; i < court2; i++)
			{
				if (*str3 == *str4)acc++;	//出现一次++
				str3++;					
				str4++;					
			}
			if (acc == court2)				//str3后字符出现字串 
			{
				printf("存在子串为%s\n", str1);
				flag = 1;					
				break;
			}
			else str1++;					//出现相同首字符但首字符后字符不相等 
		}
		if (flag == 0) {
			printf("NULL");
		}
	}
}



void my_strlwr()
{
	printf("\n");
	printf("输入一个字符串\n");
	char s1[1000] = { 0 };
		scanf("%s", &s1);
		int nNum=0;
		nNum = _strlen(s1);
		for (int i = 0; i < nNum; i++)
		{
			if (s1[i] >= 'A' && s1[i] <= 'Z')
			{
				s1[i] += 32;
			}
		}
		printf("\n");
		printf("原字符串变为：%s\n", s1);

}

void my_strupr()
{
	printf("\n");
	printf("输入一个字符串\n");
	char s1[1000] = { 0 };
	scanf("%s", &s1);
	int nNum;
	nNum = _strlen(s1);
	for (int i = 0; i < nNum; i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	printf("\n");
	printf("原字符串变为：%s\n", s1);

}