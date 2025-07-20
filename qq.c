#include<stdio.h>
int main()
{
    int col,row;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
        {
            printf(" ");
        }
        for(col=row; col>=1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }


}
