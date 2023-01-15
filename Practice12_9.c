#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void CountWord(void);
int main(void)
{
    CountWord();

    return 0;
}
void CountWord(void)
{
    char A[1000];
    char * p;
    char **word;
    int number,length = 0,done = 0,i;

    printf("How many words do you wish to enter? ");
    scanf("%d",&number);
    getchar();
    word = (char **)malloc(number * sizeof(char *));
    if(word == NULL)
    {
        printf("Error!\n");
        return ;
    }
    printf("Enter %d words now:\n",number);

    do
    {
        continue;
    }while((p = fgets(A,1000,stdin)) == NULL);
    while(*p != '\0' && *p != '\n')
        p++;
    if(*p == '\n')
        *p = '\0';
    else
    {
        while(getchar() != '\n')
            continue;
    }

    p = A;
    while(*p != '\0')
    {
        if(isalpha(*p))
            length++;
        if(*p == ' ')
        {
            word[done] = (char *)malloc((length + 1) * sizeof(char));
            for(i = 0;i <= length;i++)
                word[done][i] = *(p - length + i);
            word[done][i] = '\0';
            if(word[done] == NULL)
            {
                printf("Error!\n");
                free(word);
                for(i = done - 1;i >= 0;i++)
                    free(word[i]);
                return ;
            }
            done++;
            length = 0;
        }
        p++;
    }
    if(isalpha(*(p - 1)))
    {
        word[done] = (char *)malloc((length + 1) * sizeof(char));
        for(i = 0;i <= length;i++)
            word[done][i] = *(p - length + i);
        word[done][i] = '\0';
        done++;
    }

    printf("Here are your words:\n");
    for(i = 0;i < done;i++)
    {
        printf("%s\n",word[i]);
        free(word[i]);
    }
    free(word);
}