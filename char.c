#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],temp[30],str[30];
	int i,j,k,n;
	printf("enter a sentence\n");
	gets(s);
	n=strlen(s);
	printf("length of the sentence%d",n);
	printf("enter the string\n");
	gets(str);
	for(i=0;i<4;i++)
	temp[i]=str[i];
	for(j=0;j<n;j++)
	{
		if(s[j]==' ')
		{
			for(k=0;k<4;k++,i++)
			temp[i]=str[k];
		}
		else
		{
			temp[i]=s[j];
			i++;
		}
	}
	for(k=0;k<4;k++,i++)
	temp[i]=str[k];
	for(k=0;k<i;k++)
	printf("%c",temp[k]);			
}	
