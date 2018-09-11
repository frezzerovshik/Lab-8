//В символьной строке удалить все слова с четным номером.

#include <stdio.h>
#define LEN 100000 //Длина строки
#define YES 1
#define NO 0

void process(char buffer[])
{
	char *start;//Указатель на начало слова
	char *end;//Указатель на конец слова
	char *curr;//Указатель на текущий символ
	char c; //Текущий символ
	char perv_c;//Предыдущий символ
	int id; //Проверка на четность
	int flag; // Флаг на необходимое слово

	//Инициализация переменных
	start = buffer;
	end = buffer;
	curr = buffer;
	flag = NO;
	id = 1;
	//Цикл обработки строки
	do 
	{
	c = *curr;
	if (c == ' ' || c == '\n' || c == '.' || c == ',' || c == '\0')
	 //Встречен разделитель
	 {
		if (flag == YES)
			
		{
			end = curr-1;//Указатель на конец слова
		if (id % 2 == 0)
		{
		//Слово четное - его нужно удалить
			char *src = end+1;
			char *dst = start;

		while ((*dst++ = *src++) != '\0');//Перезапись 
		curr = end;//Начать обработку строки с текущего места
		
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


                                                                                                    