#define _CRT_SECURE_NO_WARNINGS
#include"hanshu.h"

int main()
{
	
	printf("��ѡ��>");

	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
		case 1:
		{
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
		}
		break;
		case 2:
		{
			char arr[20];
			printf("�������ַ�����\n");
			scanf("%s", &arr);
			printf("����Ϊ��\n");
			printf("%d", strlen(arr));

		}
		break;

		case 3:
		{
			char arr[20];
			printf("�������ַ�����\n");
			scanf("%s", &arr);
			printf("ת������ַ���Ϊ��\n");
			printf("%s", my_strlwr(arr));
			printf("%s", arr);

		}
		break;

		case 4:
		{
			char arr1[20];
			char arr2[20];
			printf("�������һ���ַ�����\n");
			scanf("%s", &arr1);
			printf("������ڶ����ַ�����\n");
			scanf("%s", &arr2);
			printf("%d", my_strcasecmp(arr1, arr2));

		}
		break;

		case 5:
		{
			char s1[100];
			char s2[100];
			printf("����������Ҫ���Ƶ����ݣ�\n");
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
			printf("�������ַ�����\n");
			scanf("%s", &arr1);
			printf("��������Ҫ���Ƶ��ַ�����\n");
			scanf("%s", &arr2);
			printf("�����븴�Ƴ��ȣ�\n");
			scanf("%d", &n);
			printf("�����ַ���Ϊ��\n");
			my_strncpy(arr1, arr2, n);
			printf("%s", arr1);

		}
		break;
		case 7:
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

		}
		break;
		case 8:
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

		}
		break;
		case 9:
		{
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

		}
		break;
		case 10:
		{
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

		}
		break;
		case 11:
		{
			char arr1[20];
			char arr2[20];
			printf("�������һ���ַ�����\n");
			scanf("%s", &arr1);
			printf("������Ҫ���ҵ��ַ�����\n");
			scanf("%s", &arr2);
			char* ret = my_strstr(arr1, arr2);
			if (ret)
				printf("�������ַ���Ϊ��%s\n", ret);
			else
				printf("������\n");
			
		}
		break;
		case 12:
		{

		}
		break;
	}


	return 0;
}



