#define _CRT_SECURE_NO_WARNINGS

#include"function.h"


//简单的菜单界面
void menu()
{
	printf("***********************\n");
	printf("****** 字符串函数 *******\n");
	printf("******  1.start  *******\n");
	printf("******  0.exit   *******\n");
	printf("***********************\n");
}


void DisplayBoard()
{
	
	int choice = 0;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		my_strcpy();
		printf("测试结束,选择是否继续。\n");
		break;
	case 2:
		my_strncpy();
		printf("测试结束,选择是否继续。\n");
		break;
	case 3:
		my_strcat();
		printf("测试结束,选择是否继续。\n");
		break;
	case 4:
		my_strncat();
		printf("测试结束,选择是否继续。\n");
		break;
	case 5:
		my_strlen();
		printf("测试结束,选择是否继续。\n");
		break;
	case 6:
		my_strcmp();
		printf("测试结束,选择是否继续。\n");
		break;
	case 7:
		my_strcasecmp();
		printf("测试结束,选择是否继续。\n");
		break;
	case 8:
		my_strncmp();
		printf("测试结束,选择是否继续。\n");
		break;
	case 9:
		my_strchr();
		printf("测试结束,选择是否继续。\n");
		break;
	case 10:
		/*printf("\n");
		printf("输入两个字符串\n");
		{	
			char s1[1000] = { 0 }, s2[1000] = { 0 };
			scanf("%s", &s1);
			scanf("%s", &s2);
			printf("%s\n", my_strstr(s1, s2));
		}*/

		my_strstr();
		printf("测试结束,选择是否继续。\n");
			break;
	case 11:
			my_strlwr();
			printf("测试结束,选择是否继续。\n");
			break;
	case 12:
			my_strupr();
			printf("测试结束,选择是否继续。\n");
			break;
	default:
			printf("输入错误重新输入\n");
			DisplayBoard();
			break;

		}
	

}

//打印出供选择测试的字符串函数选项
void start()
{
	int choice = 0;
	printf("\n");
	printf("1.复制字符串\n");
	printf("2.复制指定字符串\n");
	printf("3.附加字符串\n");
	printf("4.附加指定长度字符串\n");
	printf("5.求字符串长度\n");
	printf("6.比较字符串\n");
	printf("7.忽略大小写比较字符串\n");
	printf("8.比较指定长度字符串\n");
	printf("9.在字符串中查找指定字符\n");
	printf("10.查找子字符串\n");
	printf("11.将字符串中大写字母转换为小写字母\n");
	printf("12.将字符串中小写字母转换为大写字母\n");
	printf("请选择：>");
	

	DisplayBoard();


}


int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择：>");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start();
			printf("\n");
			printf("字符串函数测试\n");
			break;
		case 0:
			printf("退出测试\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
			

		}

	} while (input);

	return 0;
}