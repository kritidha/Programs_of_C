#include<iostream>
using namespace std;
int ugly(int a){
	if(a>0){
	
		if(a%2==0){
			a=a/2;
		   return	ugly(a);
		}
		else if(a%3==0){
			a=a/3;
			return ugly (a);	
		}
		else if(a%5==0){
			a=a/5;
		 return	ugly (a);
		}
	   else{
	   	return a;
	   }
	  
	}
	else return 0; 
}
int main(){
	int n;
	cout<< "Enter number to check whether it is an ugly numer or not";
	cin>>n;
    int r=ugly(n);
	if(r==1){
		cout<<"no. given is ugly";
		
	}
	else{
		cout<<"no. given is not ugly";
	}
	
}

