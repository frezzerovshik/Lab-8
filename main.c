//� ���������� ������ ������� ��� ����� � ������ �������.

#include <stdio.h>
#define LEN 100000 //����� ������
#define YES 1
#define NO 0

void process(char buffer[])
{
	char *start;//��������� �� ������ �����
	char *end;//��������� �� ����� �����
	char *curr;//��������� �� ������� ������
	char c; //������� ������
	char perv_c;//���������� ������
	int id; //�������� �� ��������
	int flag; // ���� �� ����������� �����

	//������������� ����������
	start = buffer;
	end = buffer;
	curr = buffer;
	flag = NO;
	id = 1;
	//���� ��������� ������
	do 
	{
	c = *curr;
	if (c == ' ' || c == '\n' || c == '.' || c == ',' || c == '\0')
	 //�������� �����������
	 {
		if (flag == YES)
			
		{
			end = curr-1;//��������� �� ����� �����
		if (id % 2 == 0)
		{
		//����� ������ - ��� ����� �������
			char *src = end+1;
			char *dst = start;

		while ((*dst++ = *src++) != '\0');//���������� 
		curr = end;//������ ��������� ������ � �������� �����
		
		}
	 }
	flag = NO;
	id++;
	}
	else
	{
	if (flag == NO)
		start = curr;
	flag = YES;
	}
	curr++;
	}
	while (c!='\0');
}
int main (void)
{
	char line[LEN];

	gets(line);
	process(line);
	puts(line);
	return 0;
}


                                                                                                    