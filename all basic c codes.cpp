#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum=0,t=1;
void s(int n){
	if(t<=n){
	sum=t+sum;
	t++;
	s(n);
	}
	else
	printf("sum of %d integers is %d",n,sum);
}
void swap(int *u,int *v){
	int temp;
	temp=*u;
	*u=*v;
	*v=temp;
	printf("Nos after swaping are \n First no:%d\nSecond no: %d",*u,*v);
}
void fac(int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=i*f;
	}
	printf("Factorial of %d is %d",n,f);
}
void prime(int n){
	int i,loop=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			loop=loop+1;
		}
	}
		if(loop==2)
			printf("%d is a prime no.",n);
		else
			printf("%d is not a prime no",n);
		
	
}
void pal(int n){
	int org,rev=0,temp;
	org=n;
	while(n>0){
		temp=n%10;
		rev=rev*10+temp;
		n=n/10;
	}
	if (org==rev)
		printf("%d is a pallindrome",org);
	else
		printf("not a pallindrome");
}
void arr(){
	int s,A[s],x,a,u,y;
	printf("Enter the size of the array\n");
	scanf("%d",&s);
	for(x=0;x<s;x++){
		printf("A[%d]=",x);
		scanf("%d",&A[x]);
		
	}
	printf("click 1 for searching .0 for to sorting");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Enter the no to be searched\t");
			scanf("%d",&u);
			for(x=0;x<s;x++){
				if(u==A[x])
				printf("Match found %d is at A[%d] position",u,x);
			}
	     printf("element is not in this array");
			break;
		case 0:
			for(x=0;x<s;x++){
				for(y=0;y<s;y++){
					if(A[x]>A[y])
					swap(&A[x],&A[y]);
				}
			}
			printf("Sorted array=");
			for(x=0;x<s;x++){
				printf("%d",A[x]);
			}
			break;}
		
}
void plus(){
	
}
main(){
	int x;
	printf("Enter 1 for sum of n integers.\n Enter 2 for swaping of two numbers.\n Enter 3 for factorial.\n Enter 4 for prime no.\n Enter 5 for pallindrome.\n Enter 6 for elements insertion in array.\n Enter 7 for searching of elements in array\n Enter 8 for addition of arrays\n Enter 9 for sorting\n Enter 10 for ....\n");
	scanf("%d",&x);
	switch(x){
		case 1:
			int r;
			printf("Enter the value of n for sum of n integers");
			scanf("%d",&r);
			s(r);
		
			break;
		case 2:
			int a,b;
			printf("Enter the first no.");
			scanf("%d",&a);
			printf("Enter the second no.");
			scanf("%d",&b);
			swap(&a,&b);
	
			break;
		case 3:
			printf("Enter the no to find its factorial");
			scanf("%d",&a);
			fac(a);
			break;
		case 4:
			printf("Enter the no. to find whether it is prime or not");
			scanf("%d",&a);
			prime(a);
			break;
		case 5:
			printf("Enter the no. to find whether it is a pallindrome or not\n");
			scanf("%d",&a);
			pal(a);
			break;
		case 6:
			arr();
			break;
		case 7:
			arr();
		    break;
		case 9:
		arr();		
		}
			
	}

