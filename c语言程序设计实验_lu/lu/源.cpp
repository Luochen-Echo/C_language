#define _CRT_SECURE_NO_WARNINGS
#include"hanshu.h"

int main()
{
	
	printf("请选择：>");

	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
		case 1:
		{
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
		}
		break;
		case 2:
		{
			char arr[20];
			printf("请输入字符串：\n");
			scanf("%s", &arr);
			printf("长度为：\n");
			printf("%d", strlen(arr));

		}
		break;

		case 3:
		{
			char arr[20];
			printf("请输入字符串：\n");
			scanf("%s", &arr);
			printf("转换后的字符串为：\n");
			printf("%s", my_strlwr(arr));
			printf("%s", arr);

		}
		break;

		case 4:
		{
			char arr1[20];
			char arr2[20];
			printf("请输入第一个字符串：\n");
			scanf("%s", &arr1);
			printf("请输入第二个字符串：\n");
			scanf("%s", &arr2);
			printf("%d", my_strcasecmp(arr1, arr2));

		}
		break;

		case 5:
		{
			char s1[100];
			char s2[100];
			printf("请输入您想要复制的内容：\n");
			scanf("%s", &s1);
			strcpy(s1, s2);
			printf("%s", s2);

		}
		break;
		case 6:
		{
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

		}
		break;
		case 7:
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

		}
		break;
		case 8:
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

		}
		break;
		case 9:
		{
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

		}
		break;
		case 10:
		{
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

		}
		break;
		case 11:
		{
			char arr1[20];
			char arr2[20];
			printf("请输入第一个字符串：\n");
			scanf("%s", &arr1);
			printf("请输入要查找的字符串：\n");
			scanf("%s", &arr2);
			char* ret = my_strstr(arr1, arr2);
			if (ret)
				printf("存在子字符串为：%s\n", ret);
			else
				printf("不存在\n");
			
		}
		break;
		case 12:
		{

		}
		break;
	}


	return 0;
}



