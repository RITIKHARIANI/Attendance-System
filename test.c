#include<stdio.h>
int main()
{
        printf("%d",(signed int)-1);
        if(sizeof(int )> (signed  int)-1 )
        printf("true");
        else printf("false");
}