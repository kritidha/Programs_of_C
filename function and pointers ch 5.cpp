#include<stdio.h>
#include<conio.h>
#include<math.h>
/*void factorial(int x)
{
	int f=1,i;
	for(i=x;i>0;i--){
		f=f*i;
	}
	printf("%d",f);
	
}
main()
{
  int num;
  printf("enter the no");
  scanf("%d",&num);
  factorial(num);	
}*/
/*void power(int a, int b){
   int i,num=1;
   for(i=1;i<=b;i++)
   {
   	num=num*a;
   }
   printf("%d",num);
}
main(){
	int x,y;
	printf("enter value of x and y");
	scanf("%d%d",&x,&y);
	power(x,y);
}*/
/*void year(int x){
	if(x%4==0){
		if(x%100!=0)
			printf("it is a leap year");
		else if(x%100==0 && x%400==0){
			printf("its a leap year");
	    }
		else 
			printf("not a leap year");
			
	}
}
	main()
	{
		int y;
		printf("enter the year");
		scanf("%d",&y);
		year(y);
	}*/
void factor(int x){
	int i,j;
	for(i=1;i<=x;i++){
		if(x%i==0){
			int count=0;
			for(j=1;j<=i;j++){
				if(i%j==0){
					count++;
				}
			}
			if (count==2){
				printf("%d is a prime factor\n",i);
				
			}
	    }
	}
}
main(){
	int y;
	printf("enter the no :");
	scanf("%d",&y);
	factor(y);
}















