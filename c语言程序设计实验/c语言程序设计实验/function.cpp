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
	printf("����ԭ�ַ���\n");
	char s1[1000] = { 0 };
	
	scanf("%s", &s1);
	printf("���뱻�����ַ���\n");
	char s2[1000] = { 0 };
	scanf("%s", &s2);

	int i = 0;
	while (s2[i] != '\0')   //һ��һ��ѭ�����ƹ�ȥ
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';			//ĩβ�����ϣ���ֹ����
	printf("\n");          
	printf("ԭ�ַ�����Ϊ��%s\n", s1);


}



void my_strncpy()
{
	/*printf("\n");
	printf("���������ַ���\n");

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
	printf("����ԭ�ַ�����\n"); 
	getchar();
	gets_s(s1);
	printf("���뱻���Ƶ��ַ���:\n"); 
	gets_s(s2);
	printf("����ָ�����ȣ�\n");
	scanf("%d", &n);
	printf("���ַ���Ϊ��\n");
	for (int i = 0; i < n; i++)
		printf("%c", s2[i]);    

}

void my_strcat()
{
	printf("\n");
	printf("����ԭ�ַ���\n");
	char s1[1000] = { 0 };

	scanf("%s", &s1);
	printf("���븽���ַ���\n");
	char s2[1000] = { 0 };
	scanf("%s", &s2);

	int i = 0;
	while (s1[i] != '\0')      //��ע����һ���ַ���ĩβλ��
	{
		++i;
	}
	int j = 0;
	while (s2[j] != '\0')   
	{
		s1[i] = s2[j];			//�ӵ�һ���ַ���ĩβ��ʼ������s2
		i++;
		j++;
	}
	s1[i] = '\0';
	printf("\n");
	printf("���ַ���Ϊ��%s\n", s1);


}


// �� src ��ָ����ַ���׷�ӵ� dest ��ָ����ַ����Ľ�β��ֱ�� n �ַ�����Ϊֹ��
/*printf("\n");
	printf("���������ַ���\n");
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	scanf("%s", &s1);
	scanf("%s", &s2);
	printf("\n");
	printf("������ָ�������ַ�\n");
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
	printf("����ԭ�ַ�����\n");
	getchar();
	gets_s(s1);
	printf("���븽���ַ���:\n");
	gets_s(s2);
	printf("����ָ�����ȣ�");
	scanf("%d", &x);
	printf("���ַ���Ϊ��");
	int court, k;

	for (court = 0, k = 0; s1[k]; k++, court++);
	//courtΪ�ַ������� ����λs1ĩβ

	for (int i = 0; i < court; i++)
		printf("%c", s1[i]);

	for (int j = 0; j < x; j++)
		printf("%c", s2[j]);
}



void my_strlen()
{
	printf("\n");
	printf("���ַ�������\n");
	printf("������һ���ַ�\n");
	char s[1000] = {0};
	
	scanf("%s", &s);		
	char* a=s;				//����ָ�������Ԫ�ص�ַ
	int i = 0;
	while (*a != '\0')		//��Ϊ������ʱ��ָ������һλ��������һ
	{
		a++;
		i++;
	}
	printf("\n");
	printf("�ַ��������ǣ�%d\n", i);
	
}


//������

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
	printf("���������ַ���\n");
	printf("�������ֵС�� 0�����ʾ str1 С�� str2��\n");
	printf("�������ֵ���� 0�����ʾ str1 ���� str2��\n");
	printf("�������ֵ���� 0�����ʾ str1 ���� str2��\n");
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
	printf("���������ַ���\n");
	printf("�������ֵС�� 0�����ʾ str1 С�� str2��\n");
	printf("�������ֵ���� 0�����ʾ str1 ���� str2��\n");
	printf("�������ֵ���� 0�����ʾ str1 ���� str2��\n");
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
	printf("���������ַ���\n");
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	scanf("%s", &s1);
	scanf("%s", &s2);
	printf("������ǰ����λ�Ƚ�\n");
	char* str1 = s1;
	char* str2 = s2;

	int n;
	scanf("%d", &n);
	while (n && *str1 && *str2)
	{
		printf("��λ������\n");
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
	printf("����һ���ַ���\n");

	char s1[1000] = { 0 };
	scanf("%s", &s1);
	printf("��������ַ�\n");
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
	int index = -1;//��¼�±� 
	getchar();
	printf("�����������ַ�:\n");
	scanf("%c", &c);
	printf("�����ַ���\n");
	getchar();
	gets_s(s1);
	for (int i = 0; s1[i] != '\0'; i++)	//ѭ�������ַ�
	{
		if (s1[i] == c)
		{
			index = i;
		}
	}
								
	if (index != -1)							//�±�λ�� 
	{
		printf("�±�index = %d\n", index);
		printf("��ַ��%d\n", &s1[index]);
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
	printf("�����ַ���s1:\n");
	gets_s(s1);
	printf("�������ַ���s2:\n");
	gets_s(s2);
	int i, j, court1, court2;
	for (i = 0, court1 = 0; s1[i]; i++, court1++);
	for (j = 0, court2 = 0; s2[j]; j++, court2++);
	int flag = 0;                                  //�ж��Ƿ�����Ӵ� 
	if (court1 < court2)
	{
		printf("NULL");
	}
	else {
		char* str1 = s1, * str2 = s2;
		while (*str1) {
			for (; *str1 != *str2 && *str1; str1++); //str1Ϊ�������ַ���str2Ϊ�Ӵ����ַ� 
			if (*str1 == '\0')					//str1�ƶ�ֱ��û�г�����ͬ
			{  
				flag = 0;
				break;
			}
			char* str3 = str1, * str4 = str2;	//s1�г�����s2���ַ���ͬ���ַ�������������ָ����Ʋ��� 
			int acc = 0;				//��¼str3����str4��ȵ��ַ��� 
			for (i = 0; i < court2; i++)
			{
				if (*str3 == *str4)acc++;	//����һ��++
				str3++;					
				str4++;					
			}
			if (acc == court2)				//str3���ַ������ִ� 
			{
				printf("�����Ӵ�Ϊ%s\n", str1);
				flag = 1;					
				break;
			}
			else str1++;					//������ͬ���ַ������ַ����ַ������ 
		}
		if (flag == 0) {
			printf("NULL");
		}
	}
}



void my_strlwr()
{
	printf("\n");
	printf("����һ���ַ���\n");
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
		printf("ԭ�ַ�����Ϊ��%s\n", s1);

}

void my_strupr()
{
	printf("\n");
	printf("����һ���ַ���\n");
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
	printf("ԭ�ַ�����Ϊ��%s\n", s1);

}