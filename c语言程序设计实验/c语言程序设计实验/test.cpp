#define _CRT_SECURE_NO_WARNINGS

#include"function.h"


//�򵥵Ĳ˵�����
void menu()
{
	printf("***********************\n");
	printf("****** �ַ������� *******\n");
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
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 2:
		my_strncpy();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 3:
		my_strcat();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 4:
		my_strncat();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 5:
		my_strlen();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 6:
		my_strcmp();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 7:
		my_strcasecmp();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 8:
		my_strncmp();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 9:
		my_strchr();
		printf("���Խ���,ѡ���Ƿ������\n");
		break;
	case 10:
		/*printf("\n");
		printf("���������ַ���\n");
		{	
			char s1[1000] = { 0 }, s2[1000] = { 0 };
			scanf("%s", &s1);
			scanf("%s", &s2);
			printf("%s\n", my_strstr(s1, s2));
		}*/

		my_strstr();
		printf("���Խ���,ѡ���Ƿ������\n");
			break;
	case 11:
			my_strlwr();
			printf("���Խ���,ѡ���Ƿ������\n");
			break;
	case 12:
			my_strupr();
			printf("���Խ���,ѡ���Ƿ������\n");
			break;
	default:
			printf("���������������\n");
			DisplayBoard();
			break;

		}
	

}

//��ӡ����ѡ����Ե��ַ�������ѡ��
void start()
{
	int choice = 0;
	printf("\n");
	printf("1.�����ַ���\n");
	printf("2.����ָ���ַ���\n");
	printf("3.�����ַ���\n");
	printf("4.����ָ�������ַ���\n");
	printf("5.���ַ�������\n");
	printf("6.�Ƚ��ַ���\n");
	printf("7.���Դ�Сд�Ƚ��ַ���\n");
	printf("8.�Ƚ�ָ�������ַ���\n");
	printf("9.���ַ����в���ָ���ַ�\n");
	printf("10.�������ַ���\n");
	printf("11.���ַ����д�д��ĸת��ΪСд��ĸ\n");
	printf("12.���ַ�����Сд��ĸת��Ϊ��д��ĸ\n");
	printf("��ѡ��>");
	

	DisplayBoard();


}


int main()
{
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��>");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start();
			printf("\n");
			printf("�ַ�����������\n");
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
			

		}

	} while (input);

	return 0;
}