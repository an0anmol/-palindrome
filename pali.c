#include<stdio.h>
int main(int argc, char const *argv[])
{
int a,count=0,b[10]={0,0,0,0,0,0,0,0,0,0},n,r,flag=0,k,odd;
printf("enter the number two check whether a given number is palindrome or not. check any combination of given digit for a palindrome or not.\n");
scanf("%d",&n);
a=n;
if(n>=0)
{
while(n!=0)
{
n=n/10;
count++;
}
if(count%2==0)
	{
		while(a!=0)
		{	r=a%10;	
			b[r]=b[r]+1;
			a=a/10;

    	} 
		for(k=0;k<10;k++)
			{

			if(b[k]%2!=0)
				{
					flag=1;
					break;
				}


			}
   
    }

else
{

	while(a!=0)
		{	r=a%10;	
			b[r]=b[r]+1;
			a=a/10;

    	} 
	for(k=0;k<10;k++)
			{

			if(b[k]%2!=0)
				{
					odd=odd+1;
				}
			}
		if(odd==1)
			flag=0;
		else
			flag=1;

}

if(flag==0)
{
printf("yes\n");
}
else
printf("no\n");
}
else
	printf("wrong input\n");
return 0;

}