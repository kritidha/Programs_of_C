#include<stdio.h>
#include<conio.h>
#include<math.h>
void rec(int n){
	
}
void prime(int x)
{
	int n,i;
	for(i=0;i<=n;i++)
	{
	  n%i==0;
	}
}
void factorial(int x){
	int fac=1,i;
	for(i=x;i>=1;i--){
		fac=i*fac;
	}
	printf("%d",fac);
}
void percent(int a,int b,int c,int d,int e)
{
	int per;
	per=(a+b+c+d+e)*0.2;
	printf("%d percent",per);
}

main(){
	int r;
	printf("Enter 1 for prime no.\n Enter 2 for factorial.\n Enter 3 for percentage\n");
	scanf("%d",&r);
	switch(r){
		case 1:{
			int num,sum;
			printf("enter the no.");
			scanf("%d",&num);
			sum=rec(num);
		}
		break;
		case 2:
		{
			int num;
			printf("enter the number");
			scanf("%d",&num);
		factorial(num);
	    }
		break;
		case 3:{
			int x,y,z,u,v;
			printf("enter the marks of the no.\n");
			scanf("%d%d%d%d%d",&x,&y,&z,&u,&v);
			percent(x,y,z,u,v);
		}
	}
}
