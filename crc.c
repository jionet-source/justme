#include<stdio.h>
#include<string.h>
char xor(char m,char n)
{
	if(m==n)
		return 0;
	else
		return 1;
}
int main()
{
	char data[10],key[10],tempdata[10],r[10];
	int keylen,datalen,i,n=0,c=4;
	printf("enter the data\n");
	scanf("%s",data);
	printf("enter the key\n");
	scanf("%s",key);
	keylen=strlen(key);
	datalen=strlen(data);
	for(i=datalen;i<(datalen+keylen)-1;i++)
	{
		data[i]='0';
	}
	printf("after adding data:");
	printf("%s",data);
	for(i=0;i<keylen;i++)
	{
		tempdata[i]=data[i];
	}
	while(n<6)
	{
		for(i=0;i<keylen;i++)
		{
			r[i]=xor(key[i],tempdata[i]);
			//printf("rstring %c",r[i]);
		}
		if(r[1]=='0')
		{
			//printf("string");
			strcpy(tempdata,"0000");
			r[i]=data[c];
			for(i=0;i<=keylen;i++)
				r[i]=r[i+1];
		printf("string before%s", r);
		r[i]=xor(r[i],tempdata[i]);
		printf("string after %s",r);
		}
	strcpy(tempdata,r);
	tempdata[i]=data[c];
	for(i=0;i<=keylen;i++)
	{
		tempdata[i]=tempdata[i+1];
		//printf("tempdata string %s",tempdata);
		
	}
	c++;
	n++;
	}
	printf("\nfinal string%s\n",tempdata);
	printf("no error");
}			
		
					
