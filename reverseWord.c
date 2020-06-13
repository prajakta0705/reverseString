/*accept string from user and reverse each word in place
input:india is my country
output:aidni si ym yrtnuoc */ 
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],s1[10][10];
	int i=0,j=0,max=0,k=0;
	printf("enter string:");
	scanf("%[^\n]s",&s);
	for(i=0;i<(strlen(s));i++)
	{
		if(s[i]!=' ')
		{
			s1[k][j]=s[i];
			//printf("%c",s1[j]);
			j++;
		}
		else
		{
			k++;
			j=0;
			if(max<strlen(s1))
			{
				max=strlen(s1);
			}
		}
	}
	printf("%d",max);
}
