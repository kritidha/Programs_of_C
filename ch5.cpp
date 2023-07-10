#include<stdio.h>
#include<conio.h>
 /*int product(int x,float y)
{
	return x*y;
}
main()
{
	int a;
	float b,c;
	printf("Enter the nos:");
	scanf("%d%f",&a,&b);
	c=product(a,b);
	printf("%f",c);
}*/
/*int fucn(int a,int b,int c,int d,int e,int *sum,float *avg )
{
	*sum=a+b+c+d+e;
	*avg=a+b+c+d+e/5;
	}
main()
{
	int x,y,z,u,v,w;
	float p;
	printf("Enter the nos:");
	scanf("%d%d%d%d%d",&x,&y,&z,&u,&v);
	fucn(x,y,z,u,v,&w,&p);
	printf("sum=%d",w);
	printf("avg=%f",p);
	}*/
/*int marks(int a,int b,int c,float *avg,float *percentage)
{
	*avg=(a+b+c)/3;
	*percentage=((a+b+c)*100)/300;
	
	}	
main()
{
	int x,y,z;
	float u,v;
	printf("Enter the marks:");
	scanf("%d%d%d",&x,&y,&z);
	marks(x,y,z,&u,&v);
	printf("avg marks=%f",u);
	printf("percentage=%f",v);
	}*/
	
/*int rec(int a,int sum)
{
	int f;
		f=a%10;
		sum=f+sum;
		a=a/10;
		if(a>0)
			rec(a,sum);
		else
			return sum;
	}
main()
{
	int x,y,z=0,c;
	printf("Enter the no:");
	scanf("%d",&x);
	c=rec(x,z);
	printf("sum=%d",c);
	
}*/
/*int sum=0,i=1;
int rec(int y){
	sum=i+sum;
   if(i<y)
   {
   	i++;
   	rec(y);
   }
   else 
    return sum;
	
}
int main(){
	int x,c;
	printf("Enter the digit upto which the sum is needed:");
	scanf("%d",&x);
	c=rec(x);
	printf("sum of %d natural no is %d",x,c);
}*/
/*int f=1;
int rec (int y)
{
f=y*f;
if(y>1){
	y--;
	rec(y);
}
else 
return f;
	
}	
main(){
	int x,c;
	printf("Enter the no:");
	scanf("%d",&x);
	c=rec(x);
	printf("factorial of %d is %d",x,c);
	
}*/


	
	
		
	
