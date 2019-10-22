#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>

int main()
{
       do{
           int ch; 
            clrscr();
           system("cls");
            printf(" \t\t\t ATTENDANCE SYSTEM USING ARDUINO\n");
            pritnf("PRESS 1 : SHOW THE RECORD ");
            printf("PRESS 2 : EXIT ");
            switch(ch)
            {
                case 1: display();
                        break;
                case 2: exit(0);
                        break;
                default: printf("Entered wrong choice");
                    
                
            }
        }while(1);
}