//В символьной строке удалить все слова с четным номером.
#include <stdio.h>
#define LEN 100000 //Длина строки
#define YES 1
#define NO 0
#define gets(s) fgets((s),sizeof(s),stdin)

void process(char buffer[])
{
    char *start;//Указатель на начало строки
    char *end;//Указатель на конец строки
    char *curr;//Указатель на текущий символ
    char c; //Текущий символ
    int id; //Признак четности
    int flag; // Признак слова
    
    //Инициализация переменных
    start = buffer;
    end = buffer;
    curr = buffer;
    flag = NO;
    id = 0;
    //Основной цикл
    do
    {
        c = *curr;
        if ((c<'a'||c>'z')&&(c<'A' || c>'Z'))
        {
            if (flag == YES)
            {
                end = curr-1;
                if (id % 2 == 0)
                {
                    char *src = end + 1;
                    char *dst = start;
                    // удаление слова (перенос оставшейся части // строки)
                    while( (*dst++ = *src++ ) != '\0' );
                    curr = start;  // начать обработку строки с
                    // перенесённого фрагмента
                }
            }
            flag = NO;
        }
        else
        {
            if (flag == NO)
            {
                start = curr;
                id++;
            }
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

//(c == ' ' || c == '.' || c == ';' || c == ':'|| c == ',' || c == '\n' || c == '\0'|| c == '0' || c == '1' || c == '2'|| c == '3'|| c == '4'|| c == '5'|| c == '6'|| c == '7'|| c == '8'|| c == '9')
