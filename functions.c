#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct Student
{
    char *name;
    char *ID;
    int attendance;
};

typedef struct Student stu;

void update();
void modify(char str[]);
void getData(char *buff);
void displayall()
{
	FILE *fp = fopen("database.csv","r");
  int count=0;
	do
	{
	   char buff[1025];
	   fgets(buff, 1024, (FILE*)fp);
	   count++;
        
	 if(count != 1)
	 {
	   getData(buff);
	 }
	 getch();
	}while(!(feof(fp)));
	fclose(fp);
	
}
void getData(char buff[])
{
   
	 char *token = strtok(buff,",");
   int counter=0;
 
   while( token != NULL ) 
   {
        counter++; 
        printf(" %s\n",token);
        token = strtok(NULL,",");
   }	  
}

void display()
{
		update();
}
void modify(char *str) 
{
	int flag=0;
	FILE *fp,*fp1;
	fp=fopen("database.csv","r");
	fp1=fopen("test.csv","w");
	if(!fp)
	{
		printf("error in opening file");
		return;
	}
	stu s;
	char line[100];
	while((fgets(line,sizeof(line),fp)!=NULL))
	{
			char* tempAttendance;
			s.ID=strtok(line,",");
			s.name=strtok(NULL,",");
			tempAttendance=strtok(NULL,",");
			int attendance=atoi(tempAttendance);
			s.attendance=attendance;
			//printf("%s %s %d",s.ID,s.name,s.attendance);
			getch();
			if(strcmp(str,s.ID)==0)
			{//it isnt entering here!
					s.attendance+=1;
			}
			fprintf(fp1,"%s,%s,%d\n",s.name,s.ID,s.attendance);			
	}
	fclose(fp);
	fclose(fp1);
	remove("database.csv");
	rename("test.csv","database.csv");

}


void update()
{
		FILE *fp=fopen("attendance.csv","r");
		char buff[100];
		do
		{
			fscanf(fp,"%s",buff);
			modify(buff);
		}while(!(feof(fp)));
		fclose(fp);
}
