#include <stdio.h>

int main()
{
    int years;
    double Daphne,Deirdre;
    years = 0;
    Daphne = Deirdre = 100;
    do
    {
        Daphne += 10;
        Deirdre *= 1.05;
        years++;
    }while(Deirdre < Daphne);
    printf("It need %d years.\nAnd Daphne's money is %.1f$,Deirdre's money is %.1f$."
    ,years,Daphne,Deirdre);
    return 0;
}