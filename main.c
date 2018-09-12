//¬ ÒËÏ‚ÓÎ¸ÌÓÈ ÒÚÓÍÂ Û‰‡ÎËÚ¸ ‚ÒÂ ÒÎÓ‚‡ Ò ˜ÂÚÌ˚Ï ÌÓÏÂÓÏ.

#include <stdio.h>
#define LEN 100000 //ƒÎËÌ‡ ÒÚÓÍË
#define YES 1
#define NO 0

void process(char buffer[])
{
    char *start;//”Í‡Á‡ÚÂÎ¸ Ì‡ Ì‡˜‡ÎÓ ÒÎÓ‚‡
    char *end;//”Í‡Á‡ÚÂÎ¸ Ì‡ ÍÓÌÂˆ ÒÎÓ‚‡
    char *curr;//”Í‡Á‡ÚÂÎ¸ Ì‡ ÚÂÍÛ˘ËÈ ÒËÏ‚ÓÎ
    char c; //“ÂÍÛ˘ËÈ ÒËÏ‚ÓÎ
    char perv_c;//œÂ‰˚‰Û˘ËÈ ÒËÏ‚ÓÎ
    int id; //œÓ‚ÂÍ‡ Ì‡ ˜ÂÚÌÓÒÚ¸
    int flag; // ‘Î‡„ Ì‡ ÌÂÓ·ıÓ‰ËÏÓÂ ÒÎÓ‚Ó
    
    //»ÌËˆË‡ÎËÁ‡ˆËˇ ÔÂÂÏÂÌÌ˚ı
    start = buffer;
    end = buffer;
    curr = buffer;
    flag = NO;
    id = 0;
    //÷ËÍÎ Ó·‡·ÓÚÍË ÒÚÓÍË
    do
    {
        c = *curr;
        if (c == ' ' || c == '\n' || c == '.' || c == ',' || c == '\0')
            //¬ÒÚÂ˜ÂÌ ‡Á‰ÂÎËÚÂÎ¸
        {
            if (flag == YES)
            {
                end = curr-1;//”Í‡Á‡ÚÂÎ¸ Ì‡ ÍÓÌÂˆ ÒÎÓ‚‡
                if (id % 2 == 0)
                {
                    //—ÎÓ‚Ó ˜ÂÚÌÓÂ - Â„Ó ÌÛÊÌÓ Û‰‡ÎËÚ¸
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
    printf("\n");
    process(line);
    printf("\n");
    puts(line);
    printf("\n");
    return 0;
}






