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
    printf("请用户输入字母q开始游戏:");
    node = getchar();
    node = tolower(node);
    while(getchar() != '\n')
        continue;
    if(node == 'q')
    {
        printf("现在游戏开始!");
        getchar();
        system("cls");
        Operate(A,48);
    }
    else
    {
        printf("抱歉无法开始游戏，请重新输入\n");
        goto againenter;
    }
    system("pause");
    return 0;
}
void Printfillustration(void)
{
    printf("我来说明一下\n");
    printf("你需要以最少的炸弹来消灭所有的怪物\n");
    printf("其中#表示墙壁，能够阻挡炸弹的爆炸\n");
    printf("G表示怪物, 符号.表示空位，可以放置炸弹\n");
    printf("炸弹可以覆盖上下左右四个方向，直到遇到墙壁\n");
}
void Operate(char p[][14],int monsternumber)
{
    int operatenumber = 0;
    int row,column,x,y;
    while(monsternumber)
    {
        again:;
        Printf(p,13,14);
        printf("请告诉我第%d个炸弹的位置(包括行数与列数(二者均不大于13)并且之间以空格相隔)\n"
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
            printf("抱歉，请输入正确的位置");
            goto again;
        }
        operatenumber++;
        system("cls");
    }
    printf("你一共用了%d个炸弹\n",operatenumber);
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