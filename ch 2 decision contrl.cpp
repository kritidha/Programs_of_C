#include<stdio.h>
#include<conio.h>
/*main(){
	int sp,cp,profit,loss;
	printf("enter cp and sp");
	scanf("%d%d",&cp,&sp);
if(sp>cp)
{
	profit=sp-cp;
	printf("seller has made profit of  rs %d",profit);
	
}
else {
	loss=cp-sp;
	printf("seller has made loss of rs %d",loss);
}
}*/
/*main(){
	int x;
	printf("enter the integer");
	scanf("%d",&x);
	if(x%2==0)
	printf("%d is an even no",x);
	else printf("%d is an odd no",x);
}*/
/*main()
{
	int x;
	printf("enter the year");
	scanf("%d",&x);
	if(x%4==0){
		 if(x%100==0){
			if(x%400==0)
	    	printf("%d is a leap year",x);
	 		else 
	 			printf("%d is not a leap year",x);}
	 else
	 printf("%d is a leap year",x);
	 
	 
}
}*/
/*main()
{
int num,y,rnum=0,onum;
 printf("enter the number");
 scanf("%d",&num);
 onum=num;
 
 while(num>0){
 	y=num%10;
 	num=num/10;
 	rnum=rnum*10+y;
 	
 }
 printf("%d",rnum);
 if(rnum==onum)
 printf("orignal no and reverse no are equal");
 else 
 printf("orignal no and rev no are not equal");
}*/
/*main()
{
	int a1,a2,a3;
	printf("enter the age of ram shyam and ajay resp");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1<a2 && a1<a3)
	printf("ram is youngest");
	else if(a2<a1 && a2<a3)
	printf(" shyam is youngest");
	else 
	printf("ajay is youngest");	
	
}*/
/*main(){
	int a1,a2,a3,sum;
	printf("enter the angles of the triangle");
	scanf("%d%d%d",&a1,&a2,&a3);
sum=a1+a2+a3;
if(sum==180)
printf("triangle is valid");
else 
printf("triangle is invalid");
}*/
/*main(){
	int num;
	printf("enter the no.");
	scanf("%d",&num);
	if(num<0){
		num=-(num);
		printf("absolute value=%d",num);

	}
	else
	printf("absolute value= %d",num);

}*/
/*main()
{
	int l,b,area,perimeter;
	printf("enter the length and breadth of rectangle");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=(l+b)*2;
	if(area>perimeter)
	printf("area is greater than its perimeter");
	else 
	printf("area is not greater than its perimeter");
}*/
/*main(){
	int x1,y1,x2,y2,x3,y3;
	printf("enter the first point");
	scanf("%d%d",&x1,&y1);
	printf("enter the second point");
	scanf("%d%d",&x2,&y2);
	printf("enter the third point");
	scanf("%d%d",&x3,&y3);
	if((x1==x2 && x1==x3) || (y1==y2 && y1==y3))
	{
		printf("points lie on a straight line");
	
	}
	else 
	printf("poinds do not lie on same plain");
}*/
/*logical operator*/
/*main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0){
	{
		if(year%100!=0)
		printf("year is a leap year");
		else if(year%100==0 && year%400==0)
		{
			printf("year is a leap year");
			
			}
			else
			printf("not a leap year")	;}
	}
	else printf("year is not a leap year");
}*/

/*main()
{	
    char ch;
    int ascii;
    printf("enter the character:");
    scanf("%c",&ch);
    ascii=ch;
    printf("ASCII value of %c is %d\n",ch,ascii);

    if(ascii>=65 && ascii<=90){
     printf("entered character is upper case");
    }
    else if(ascii>=97 && ascii<=122 ) {
     printf("entered character is lower case");
    }
    else if(ascii>=48 && ascii<=57)	{
     printf("enter  Character is a digit");
    }
    else 
     printf("speacial symbol");	
}*/
/*main()
{  
	char H,s,l;
	int age;
	printf("enter the age,health,lives where & sex of person");
	scanf(" %d %c %c %c",&age,&H,&l,&s);
		
	if((H=='E'||H=='e') && (l=='c'||l=='C')){
	   if(age>25 && age<35){
		   printf("person is insured\n");
           if(s=='m'||s=='M'){
	         printf("permium is rs 4 per thousand\n");
             printf("policy can't exceed 2 lakh\n"); 
	       }
	       else{
	         printf("premium of rs 3 per thousaqnd\n");
	         printf("policy cant exceed 1 lakh\n");
	       }
	    }
    }
    
    else if((H=='p'||H=='P') && (l=='v'||l=='V')){
	  if((age>25 && age>35 ) && s=='m'&& s=='M'){
	     printf("person is insured\n");
	     printf("premium is rs 6 per thousand\n");
	     printf("policy cant exceed rs 10000\n");
       }
    }
   else{
      printf("person is ensured\n");
    }
}*/
/*main()
{
	char ch;
	int ascii;
	printf("Enter the character : ");
	scanf(" %c",&ch);
	ascii=ch;
	printf("ASCII value of %c is %d\n",ch,ascii);
	
	if(ascii>=65 && ascii<=90){
		printf("entered character is upper case");
	}
	
	else if(ascii>=97 && ascii<=122 ){
		printf("entered character is lower case");
	}
	
	else if(ascii>=48 && ascii<=57){
		printf("enter  Character is a digit");
	}
	
	else 
		printf("speacial symbol");	
}*/
/*main()
{
	char H,s,l;
	int age;
	printf("Enter the health, age, lives where & sex of person : ");
	scanf("%c %d %c %c",&H,&age,&l,&s);
	
	if((H=='E'|| H=='e') && (l=='c'|| l=='C')){
		if(age>25 && age<35){
			printf("\nperson is insured\n");
      
			if(s == 'm'|| s=='M'){
				printf("permium is rs 4 per thousand\n");
    			printf("policy can't exceed 2 lakh"); 
			}
	   		else{
				printf("premium of rs 3 per thousand\n");
				printf("policy cant exceed 1 lakh");
			}
		}
	}
	
	else if((H=='p'|| H=='P') && (l=='v'|| l=='V')){
		if((age>25 && age>35 ) && (s=='m'&& s=='M')){
			printf("person is insured");
			printf("premium is rs 6 per thousand");
			printf("policy cant exceed rs 10000");
		}
	}
	else
		printf("person is ensured");
}*/
/*main()
{
	int h,t;
	float c;
	printf("enter the hardness,carbon content and tensile strength");
	scanf("%d%f%d",&h,&c,&t);
	
	if(h>50 && c<0.7 && t>5600){
		printf("grade10");
	}
	else if(h>50 && c<0.7 && t<5600){
		printf("grade9");
	}
	else if(h<50 && c<0.7 && t>5600){
		printf("grade8");
	}
	else if(h>50 && c>0.7 && t>5600){
	 printf("grade7");	
	}
	else if((h>50 && c>0.7 && t<5600) || (h<50 && c<0.7 && t<5600) || (h<50 && c>0.7 && t>5600)){
		printf("grade6");
	}
	else
	 printf("grade5");
}*/
/*main()
{
	int days;
	printf("enter the no of late days");
	scanf("%d",&days);
	
	if(days<=5){
		printf("ur late fine is of 50 paise");
	}
	else if(days>=6 && days<=10){
		printf("ur late fine is of rs 1");
	}
	else if(days>10 && days<=30){
		printf("ur late fees is rs 5");
	}
	else{
		printf("ur membership got cancled");
	}
}*/
/*main()
{
	int l1,l2,l3;
	printf("Enter the sides of triangle : ");
	scanf("%d%d%d",&l1,&l2,&l3);
	
	if(l1>l2 && l1>l3){
		if(l2+l3>l1){
			printf("Triangle is valid");
		}
	}
	else if(l2>l1 && l2>l3){
		if(l1+l3>l2){
			printf("Triangle is valid");
		}
	}
	else if(l3>l1 && l3>l2){
		if(l1+l2>l3){
			printf("Triangle is valid");
		}
	}
	else{
		printf("Triangle is not valid");
	}
}*/
/*main()
{
	int l1,l2,l3;
	printf("Enter the sides of triangle");
	scanf("%d%d%d",&l1,&l2,&l3);
	
	if(l1==l2 && l2==l3){
		printf("Triangle is equilateral");
	}
	else if(l1==l2 || l2==l3 || l1==l3){
		printf("Triangle is isoseless");
	}
	else if((l1*l1+l2*l2==l3*l3)|| (l1*l1+l3*l3==l2*l2)|| (l2*l2+l3*l3==l1*l1)){
		printf("Triangle is a right angles triangle");
	}
	else {
		printf("Triangle is scalene");
	}
}*/
/*main()
{
	int time;
	printf("Enter the time");
	scanf("%d",&time);
	
	if(time>2 && time<=3){
		printf("Highly efficient");
	}
	else if(time>3 && time<=4){
		printf("U have to inc. ur speed");
	}
	else if(time>4 && time<=5){
		printf("u have given the training to improve the speed");
	}
	else {
		printf("U r fied");
	}
}*/
/*main()
{
	int A,B;
	printf("Enter the percent in main and subsidory subject");
	scanf("%d%d",&A,&B);
	
	if(A>=55 && B>=45){
		printf("QULIFIED");
	}
	else if(A>=45 && A<55 && B>=55){
		printf("QUALIFIED");
	}
	else if(A>=65 && B<45){
		printf("U hve to reapear in B");
	}
	else{
		printf("FAILED");
	}
}*/
/*main( ) { char another ; int num ; do
{
printf ( "Enter a number " ) ;
scanf ( "%d", &num ) ;
printf ( "square of %d is %d", num, num * num ) ;
printf ( "\nWant to enter another number y/n " ) ;
scanf ( " %c", &another ) ;
} while ( another == 'y' ) ;
}*/
/*main( )
{
int j ;
while ( j <= 10 )
{
printf ( "\n%d", j ) ;
j = j + 1 ;
}
}*/
/*main( )
{
int x = 1 ;
while ( x == 1 )
{
x = x - 1 ;
printf ( "\n%d", x ) ;
}
}*/
/*main()
{
	char x;
	while ( x = 0 ; x <= 255 ; x++ )
printf ( "\nAscii value %d Character %c", x, x ) ;
}
*/
