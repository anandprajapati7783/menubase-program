#include<stdio.h>
#include <stdlib.h>
int cnt=0;
void Add(char (*p)[3][10],int s);
void Display(char (*p)[3][10]);
void Delete( char(*p)[3][10]);

int main()
{
	int size=10,choice;
	char db[10][3][10];
/*
	printf("%d ",sizeof(db)/sizeof(db[0])); // --->>>>> Calculate the size of array
	printf("%d ",sizeof(db[0])/sizeof(db[0][0]));
	printf("%d ",sizeof(db[0][0])/sizeof(db[0][0][0]));
*/
	while(1)
	{
		printf("1. Add  2. Display  3. Exit  4.Delete\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
			{
				case 1:Add(db,size);
				     break;
				case 2: Display(db);
				      break;
				case 3:exit(0);
				      break;
				case 4:Delete(db);
			}
	}


}
void Add(char (*p)[3][10],int s)
{
	if(cnt<s)
	{
		int i,j;

		printf("entre a roll\n");
		scanf("%s",p[cnt][0]);
		printf("entre a namel\n");
		scanf("%s",p[cnt][1]);
		printf("entre a marks\n");
		scanf("%s",p[cnt][2]);
		cnt++;
	}
	else
		printf("memory  is full\n");
	

}
void Display(char (*p)[3][10])
{
	int i,j;
	for(i=0;i<cnt;i++)
	{
		for(j=0;j<3;j++)
			{
				printf("%s  ",p[i][j]);

			}
			printf("\n");
	}
}
void Delete(char(*p)[3][10])
{
	int data,i;
	printf("enter the data to be deleted\n");
	scanf("%d",&data);
	for(i=0;i<cnt;i++)
	{
		if(data==atoi(p[i][0]))
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(*p));
			cnt--;
			return;
		}
	}
		if(i==cnt)
			printf("%d is not found\n",data);
}
