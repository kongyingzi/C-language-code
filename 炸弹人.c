#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void Printfillustration(void);
void Operate(char [][14],int);
void Printf(char [][14],int,int);
int main(void)
{
    char node;
    char A[13][14] = 
    {   
        "#############",
        "#GG.GGG#GGG.#",
        "###.#G#G#G#G#",
        "#.......#..G#",
        "#G#.###.#G#G#",
        "#GG.GGG.#.GG#",
        "#G#.#G#.#.###",
        "##G...G.....#",
        "#G#.#G###.#G#",
        "#...G#GGG.GG#",
        "#G#.#G#G#.#G#",
        "#GG.GGG#G.GG#",
        "#############"
    };
    Printfillustration();
    againenter:;
    printf("���û�������ĸq��ʼ��Ϸ:");
    node = getchar();
    node = tolower(node);
    while(getchar() != '\n')
        continue;
    if(node == 'q')
    {
        printf("������Ϸ��ʼ!");
        getchar();
        system("cls");
        Operate(A,48);
    }
    else
    {
        printf("��Ǹ�޷���ʼ��Ϸ������������\n");
        goto againenter;
    }
    system("pause");
    return 0;
}
void Printfillustration(void)
{
    printf("����˵��һ��\n");
    printf("����Ҫ�����ٵ�ը�����������еĹ���\n");
    printf("����#��ʾǽ�ڣ��ܹ��赲ը���ı�ը\n");
    printf("G��ʾ����, ����.��ʾ��λ�����Է���ը��\n");
    printf("ը�����Ը������������ĸ�����ֱ������ǽ��\n");
}
void Operate(char p[][14],int monsternumber)
{
    int operatenumber = 0;
    int row,column,x,y;
    while(monsternumber)
    {
        again:;
        Printf(p,13,14);
        printf("������ҵ�%d��ը����λ��(��������������(���߾�������13)����֮���Կո����)\n"
        ,operatenumber + 1);
        scanf("%d%d",&column,&row);
        if(column <= 13 && row <= 13)
        {
            x = column - 1;
            y = row - 1;
            while(p[x][y] != '#')
            {
                if(p[x][y] == 'G')
                {
                    monsternumber--;
                    p[x][y] = '.';
                }
                x--;
            }
            x = column - 1;
            y = row - 1;
            while(p[x][y] != '#')
            {
                if(p[x][y] == 'G')
                {
                    monsternumber--;
                    p[x][y] = '.';
                }
                x++;
            }
            x = column - 1;
            y = row - 1;
            while(p[x][y] != '#')
            {
                if(p[x][y] == 'G')
                {
                    monsternumber--;
                    p[x][y] = '.';
                }
                y--;
            }
            x = column - 1;
            y = row - 1;
            while(p[x][y] != '#')
            {
                if(p[x][y] == 'G')
                {
                    monsternumber--;
                    p[x][y] = '.';
                }
                y++;
            }
        }
        else
        {
            printf("��Ǹ����������ȷ��λ��");
            goto again;
        }
        operatenumber++;
        system("cls");
    }
    printf("��һ������%d��ը��\n",operatenumber);
}
void Printf(char p2[][14],int column,int row)
{
    int i,j;
    
    for(i = 0;i < column;i++)
    {
        for(j = 0;j < row;j++)
            printf("%c",p2[i][j]);
        printf("\n");
    }
}