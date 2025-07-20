#include<stdio.h>
int main()
{
    int x[10];
    int i,value;
    float total=0;
    for(i=0; i<10; i++)
    {
        scanf("%d ",&value);
        x[i]=value;
    }
    for(i=0 ; i<10; i++)
    {
        total=total+x[i]*x[i];
    }
    printf("\n");
    for(i=0; i<10; i++)
    {
        printf("X[%d] =%d",i+1,x[i])

    }
    printf("%d",total);
}
