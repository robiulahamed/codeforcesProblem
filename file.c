#include<stdio.h>
int main()
{
    char name[20]={"ahamed robiul"};
    int length = strlen(name);
    int i;
    FILE *file;
    file = fopen("test.txt","w");
    if(file== NULL)
    {
        printf("no value");

    }
    else
    {
        printf(" fil is opened \n");
      for (i=0 ; i< length ;i++)
      {
          fputc(name[i],file);
      }
      printf(" file is successully");

    }
}
