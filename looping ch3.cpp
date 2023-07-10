#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
/*main()
{
	int hours,overtime,e=1;
	while(e<=10){
		printf("enter no of hours for %d\n",e);
		scanf("%d",&hours);
		if(hours>40){
		  overtime=(hours-40)*12;
		  printf("overtime salary:rs %d\n",overtime);
		}
		else
			printf("no overtime salary\n");
		e++;
		
		}
}*/
/*main()
{
	int num,factorial=1;
	printf("enter the number");
	scanf("%d",&num);
	while(num>1){
		factorial=factorial*num;
		num=num-1;
	}
	printf("Factorial:%d\n",factorial);
}*/
/*main(){
	int n1,n2,x,y;
	printf("enter the nos");
	scanf("%d%d",&n1,&n2);
	x=pow(n1,n2);
	y=pow(n2,n1);
	printf("x=%d\n y=%d\n",x,y);
}*/
//ascii value and character
/*main()
{
	char x;
	int ascii=0;
	while(ascii<=255){
	 x=ascii;
		printf(" %c=%d\n",x,ascii);
		ascii++;
		
		
	}
}*/
// amstrong no
/*main()
{
	int num,a=0,x,y,z=1,og;
	while(z<=500){
	  num=z;
	   og=z;
		while(num>0){
			x=num%10;
			a=(x*x*x)+a;
			num=num/10;
	   }
	   if(og==a){
	    	printf("%d\t",a);
	    }
	    z++;
	}
}*/
/*main( ) 
{
	int i = 1 , j = 1 ;
	while ( i++ <= 100 ){
		while ( j++ <= 200 ){
			if ( j == 150 )
			break ;
			else
			printf ( "%d %d\n", i, j ) ;
		}
	}
}*/
/*main()
{
 int num;
 for(num=1;num<300;num++){
 	if(num%num==0){
 		printf(" prime no");
 		
	 }
	 else
	 printf("prime no.");
 }
}*/
/*main()
{
	char ch;
	int ascii;
	for(ascii=1;ascii==1;){
		ch=ascii;
		printf("%c",ch);
	}
	
}*/
/*main()
{
	float x,f=1, sum=0;
	for(x=1;x<=7;x++){
		f=x*f;
		sum=sum+x/f;
		printf("%f\n",sum);
	}
    printf("%f",sum);
}*/
/*main()
{
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=3;k++){
				
			}	
		}
	}
}*/
/*main()
{
	char ch;
	int ascii,loop;
	for(loop=1;loop<=7;loop++){
   	    for(ascii=65;ascii<=71;){
   	    	ch=ascii;
			printf("%c\t",ch);
			ascii++;
		}
		for(ascii=71;ascii>65;){
		ascii--;
		ch=ascii;
		printf("%c\t",ch);
		}
		printf("\n");
		
}
	
}*/
/*main(){
	char x,y;
	int ascii,loop;
	for(loop=1;loop>0;loop++){
		for(ascii=3;ascii<=4;){
			x=ascii;
			printf("%c",x);
			ascii++;
		    continue;
		}
    }
}*/
/*main()
{
	int x,y,z;
	printf("enter the no");
	scanf("%d",&x);
	for(y=1;y>0;y++){
		z=x*y;
		printf("%d*%d=%d\n",x,y,z);
	}
}*/
/*main()
{
	float x,sum,sum1;
	int y;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	sum=(x-1)/x;
	printf("%f",sum);
	sum1=sum;
	for(y=2;y<=7;y++){
		sum=(1/2)*pow(sum1,y)+sum;
		}
		printf("sum=%f",sum);
	
}*/
//switch case
/*main()
{
	int cl,f,grace;
	printf("Enter the class and no of sbjects he failed\n");
	scanf("%d\n%d",&cl,&f);
	switch(cl){
		case 1:
			switch(f){
				case 0:
				case 1:
				case 2:
				case 3:
				{
					grace=5*(5-f);
					printf("%d",grace);
					break;
				}
			   default:
			   printf("no grace marks will be given");
			}
			break;
		case 2:
			switch(f){
				case 0:
				case 1:
				case 2:
				{
					grace=4*(5-f);
					printf("%d",grace);
					break;
				}	
				default:
					printf("no grace marks will be given");
						
			}
			break;
		case 3:
			switch(f){
				case 0:
				case 1:
				{
				 	grace=5*(5-f);
					 printf("%d",grace);
					 break;		
				}
				default:
				printf("no grace marks will be given");	
			}
			break;
	    default:
	    	printf("no such case");
	}
	
}*/
/*main()
{
  int i,n,count=0;
  printf("Enter the no ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)	{
  	if(n%i==0){
  		count++;
  	}
  	  
  }
  if(count==2){
  	printf("its a prime no");}
  	else
  	printf("not a prime no");
  
}*/
/*main( )
{
	int choice,i,n,count=0,f=1;
	printf("enter the no");
	scanf("%d",&n);
	printf("\n press 1 for factorial");
	printf("\n press 2 for prime or not");
	printf("\n press 3 for odd or even");
	printf("\n press 4 for exit");
	while(1){
		printf("\n your choice");
		scanf("%d",&choice);
	
		switch(choice){
			case 1:{
				for(i=n;i>0;i--){
				f=f*i;
			}
			printf("%d\n",f);
			}
			break;
			case 2:{
				for(i=1;i<=n;i++){
					if(n%i==0){
					count++;
					}
				}
				if(count==2)
				printf("%d is a prime no\n",n);
				else
				printf("%d is not a prime no\n",n);	
			}
			break;
			case 3:	{
				if(n%2==0)
				printf("%d is even no",n);
				else 
				printf("%d is an odd no",n);
			}
			break;
			case 4:{
		    exit(0)  ;	
			}
			break;	
			default:
			printf("default case");
		}
	}
}*/











