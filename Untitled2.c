#include<stdio.h>
int main()
{
    FILE *file;
    char ch;


    file = fopen("test.txt","w");
    if(file== NULL)
    {
        printf("file not exist");

    }
    else {
        printf("file is opened \n");
         while (!feof(file))
         {
              ch =fgetc(file);
             printf("%c ",ch)
         }
        fclose(file);
    }
}
