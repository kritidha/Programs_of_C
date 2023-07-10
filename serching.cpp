#include<iostream>
using namespace std;

int main(){
	int beg,mid,end,loc,item;
	cout<<"Enter the no to be searched";
	cin>>item;
	for(int i=beg;i<end;){
		
		mid=(beg+end)/2;
		if(item==LA[mid]){
			cout<<"match found at"<<mid<<endl;`
		}
		else if(LA[mid]<item){
			end=mid-1;
		}
		else{
		beg=mid+1;
	    }
	}
	
}
