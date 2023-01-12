#include <stdio.h>
#include <string.h>
#define LENGTH 10
void Printillustration(void);
void Printf(const char [][20],int);
void ASCIIPrintf(const char [][20],int);
void LengthPrintf(const char [][20],int);
void FirstLetterPrintf(const char [][20],int);
char * s_gets(char *,int);
int main(void)
{
    char A[LENGTH][20];
    int strnumber = 0,i;
    char choice;
    
    for(i = 0;s_gets(A[i],20) && strnumber < 10;i++)
        strnumber++;
    Printillustration();
    while(choice = getchar())
    {
        while(getchar() != '\n')
            continue;
        switch(choice)
        {
            case 'a': Printf(A,strnumber);break;
            case 'b': ASCIIPrintf(A,strnumber);break;
            case 'c': LengthPrintf(A,strnumber);break;
            case 'd': FirstLetterPrintf(A,strnumber);break;
            case 'e': goto Out;
        }
        Printillustration();
    }
    Out:printf("The program has ended!\n");

    return 0;
}
void Printillustration(void)
{
    printf("There is a menu which has five portions user can choose to:\n");
    printf("(a)Print the ordinary strings                      (b)Print the strings for the ASCII\n");
    printf("(c)Print the strings for the length of a string    (d)Print the strings for the scale of the first letter\n");
    printf("(e)End the program\n");
    printf("Please enter your choice:");
}
void Printf(const char p1[][20],int num)
{
    int i;

    for(i = 0;i < num;i++)
        printf("%s\n",p1[i]);
}
void ASCIIPrintf(const char p2[][20],int num)
{
    int done[LENGTH] = {0};
    int i = num,j,minindex;

    while(i--)
    {
        minindex = 0;
        while(done[minindex] != 0 && minindex < num)
            minindex++;
        for(j = 0;j < num;j++)
        {
            if(done[j])
                continue;
            if(strcmp(p2[minindex],p2[j]) > 0)
                minindex = j;
        }
        printf("%s\n",minindex,p2[minindex]);
        done[minindex] = 1;
    }
}
void LengthPrintf(const char p3[][20],int num)
{
    int Length[LENGTH],done[LENGTH] = {0};
    int i,j,minindex,number = 0;

    for(i = 0;i < num;i++)
        Length[i] = strlen(p3[i]);
    minindex = 0;
    for(i = 0;i < num;i++)
    {
        for(j = 0;j < num;j++)
        {
            if(done[j])
                continue;
            if(Length[minindex] > Length[j])
                minindex = j;
        }
        printf("%s\n",p3[minindex]);
        done[minindex]++;
        minindex = 0;
        while(done[minindex] && minindex < num)
            minindex++;
    }
}
void FirstLetterPrintf(const char p4[][20],int num)
{
    int wordlength,i,j,minindex = 0;
    int WORD[LENGTH],done[LENGTH] = {0};
    char * q;

    for(i = 0;i < num;i++)
    {
        q = strchr(p4[i],' ');
        wordlength = q - p4[i];
        WORD[i] = wordlength;
    }
    for(i = 0;i < num;i++)
    {
        for(j = 0;j < num;j++)
        {
            if(done[j])
                continue;
            if(WORD[minindex] > WORD[j])
                minindex = j;
        }
        printf("%s\n",p4[minindex]);
        done[minindex]++;
        while(done[minindex] && minindex < num)
            minindex++;
    }
}
char * s_gets(char * p5,int number)
{
    char * q;

    q = fgets(p5,number,stdin);
    if(q)
    {
        while(*p5 != '\n' && *p5 != '\0')
            p5++;
        if(*p5 == '\n')
            *p5 = '\0';
        else
        {
            while(getchar() != '\n')
                continue;
        }

        return q;
    }
    else
        return NULL;
}