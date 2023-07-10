#include<stdio.h>
int main(){
	int beg=0,end=4,mid,item;
	int LA[]={1,2,3,4,5};
	printf("Enter the elements to be searched : ");
	scanf("%d",&item);
	mid=(beg+end)/2;
	while(LA[mid]!=item && beg<=end){
		if(LA[mid]<item){
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(LA[mid]==item){
		printf("%d ,found at %d position",item,mid);
	}
	else
	printf("Defalt case");
}
