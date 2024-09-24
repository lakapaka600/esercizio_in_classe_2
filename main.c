#include <stdio.h>

int main(void)
{
int ore1,minuti1,ore2,minuti2;
printf("inserisci ore1");
    scanf("%d",&ore1);
    printf("inserisci minuti1");
    scanf("%d",&minuti1);
    printf("inserisci ore2");
    scanf("%d",&ore2);
    printf("inserisci minuti2");
    scanf("%d",&minuti2);
    int diff = ore1 - ore2;
    printf("la differenza in ore è:%d",diff);
    int diff2 = minuti1 - minuti2;
    printf("la differenza in minuti è:%d",diff2);

    return 0;
}
