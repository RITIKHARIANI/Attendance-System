#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("a.txt","r");
    char str[50];
    fgets(str,50,fp);
    printf(str);
    fclose(fp);
}