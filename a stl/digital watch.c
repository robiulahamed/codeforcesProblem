#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{   int h,m,s;
 for(h=0; h<24; h++)
 {
     for(m=0; m<60; m++)
     {

         for(s=0; s<60; s++);
         {
             clrscr();
             printf("%d :%d :%d",h,m,s);
             delay(1000);
         }

     }
 }
 getchar();
}

