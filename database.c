#include<stdio.h>
#include "functions.c"

int main()
{
    int ch;

       do{
            system("cls"); 
            printf(" \t\t\t ATTENDANCE SYSTEM USING ARDUINO\n");
            printf("ENTER YOUR CHOICE\n");
            printf("PRESS 1 : SHOW THE UPDATED STUDENT RECORD\n");
            printf("PRESS 2 : DISPLAY ALL\n");
            printf("PRESS 3 : EXIT \n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1: display();
                        break;
                case 2: displayall();
                        break;
                case 3: ch=0;
                        break;
                default: printf("Entered wrong choice");
                
            }
        }while(ch!=0);
}