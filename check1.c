#include<stdio.h>
#include<string.h>
void sender(int a,int b,int c,char s1[],char s2[],char sum[])
{		
	int i=a,j=b;
	char carry='0';
	if(i!=-1 && j!=-1)
	{
		while(c!=-1)
		{
			
			if(s1[c]=='0'&& s2[c]=='0' && carry=='0')
			{
				sum[c]='0';
				carry='0';
				
			}
			else if(s1[c]=='0'&& s2[c]=='0' && carry=='1')
			{
				sum[c]='1';
				carry='0';
				
			}
			else if(s1[c]=='0' && s2[c]=='1' &&  carry=='0' )
			{
				sum[c]='1';
				carry='0';
				
			}
			else if(s1[c]=='0' && s2[c]=='1' &&  carry=='1' )
			{
				sum[c]='0';
				carry='1';
				
			}
			
			else if(s1[c]=='1' && s2[c]=='0' &&  carry=='0')
			{
				sum[c]='1';
				carry='0';
				
			}
			else if(s1[c]=='1' && s2[c]=='0' &&  carry=='1')
			{
				sum[c]='0';
				carry='1';
				
			}
			else if(s1[c]=='1' && s2[c]=='1' &&  carry=='0')
			{
				sum[c]='0';
				carry='1';
				
			}
			else if(s1[c]=='1' && s2[c]=='1' &&  carry=='1')
			{
				sum[c]='1';
				carry='1';
				
			}
			
			c--;
		}
			
	}
	c=3;
	while(carry!='0')
	{	
		if(sum[c]=='0' && carry=='1')
		{
			sum[c]='1';
			carry='0';
				
		}			
		else if(sum[c]=='0'  &&  carry=='1' )
		{
			sum[c]='0';
			carry='1';	
		}	
		else if(sum[c]=='1' &&  carry=='1')
		{
			sum[c]='0';
			carry='1';
		}	
		else if(sum[c]=='1'  &&  carry=='1')
		{
			sum[c]='1';
			carry='1';
		}
		c--;
	}				
	printf("sum=%s",sum);
	char checksum[4];
	strcpy(checksum,sum);
	for(c=0;checksum[c]!='\0';c++)
	{
		if(checksum[c]=='1')
		{
			checksum[c]='0';
		}
		else
		{
			checksum[c]='1';
		}
	}			
	printf("\nchecksum=%s",checksum);
	receiver(a,b,c,sum,checksum);
	
}
void receiver(int a,int b,int c,char sum[],char checksum[])
{
	c=3;
	int i=a,j=b;
	char carry='0';
	if(i!=-1 && j!=-1)
	{
		while(c!=-1)
		{
			
			if(sum[c]=='0'&& checksum[c]=='0' && carry=='0')
			{
				sum[c]='0';
				carry='0';
				
			}
			else if(sum[c]=='0'&& ckecksum[c]=='0' && carry=='1')
			{
				sum[c]='1';
				carry='0';
				
			}
			else if(sum[c]=='0' && checksum[c]=='1' &&  carry=='0' )
			{
				sum[c]='1';
				carry='0';
				
			}
			else if(sum[c]=='0' && checksum[c]=='1' &&  carry=='1' )
			{
				sum[c]='0';
				carry='1';
				
			}
			
			else if(sum[c]=='1' && checksum[c]=='0' &&  carry=='0')
			{
				sum[c]='1';
				carry='0';
				
			}
			else if(sum[c]=='1' && checksum[c]=='0' &&  carry=='1')
			{
				sum[c]='0';
				carry='1';
				
			}
			else if(sum[c]=='1' && checksum[c]=='1' &&  carry=='0')
			{
				sum[c]='0';
				carry='1';
				
			}
			else if(sum[c]=='1' && checksum[c]=='1' &&  carry=='1')
			{
				sum[c]='1';
				carry='1';
				
			}
			
			c--;
		}
			
	}
	c=3;
	while(carry!='0')
	{	
		if(sum[c]=='0' && carry=='1')
		{
			sum[c]='1';
			carry='0';
				
		}			
		else if(sum[c]=='0'  &&  carry=='1' )
		{
			sum[c]='0';
			carry='1';	
		}	
		else if(sum[c]=='1' &&  carry=='1')
		{
			sum[c]='0';
			carry='1';
		}	
		else if(sum[c]=='1'  &&  carry=='1')
		{
			sum[c]='1';
			carry='1';
		}
		c--;
	}				
	printf("sum=%s",sum);
	char receiverData[4];
	strcpy(receiverData,sum);
	for(c=0;receiverData[c]!='\0';c++)
	{
		if(receiverData[c]=='1')
		{
			receiverData[c]='0';
		}
		else
		{
			receiverData[c]='1';
		}
	}			
	printf("\nreceiverData=%s",receiverData);
	
	
}

void main()
{
	char s1[]="1101";
	char s2[]="1111";
	char sum[]="0000";
	int a=strlen(s1);
	int b=strlen(s2);
	printf("string length of s1 %d\n",a);
	printf("string length of s2 %d\n",b);
	int c=0;
	printf("c=%d",c);
	printf("\n");
	for(c=0;s1[c]!='\0';c++)
	printf("%c",s1[c]);
	printf("\n");
	for(c=0;s1[c]!='\0';c++)
	printf("%c",s2[c]);
	printf("\n");
	c=3;
	sender(a,b,c,s1,s2,sum);
}	

	
		
