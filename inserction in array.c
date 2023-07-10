#include<iostream>
using namespace std;

int main{
    int arr[100]={1,2,3,4,5};
    int x,y;

    cout<<"Enter the number to be added :";
    cin>>"%d",&x;
    cout<<"enter the index: ";
    scanf<<"%d",&y;
    
    for(int i=5;i<y,i--){
        arr[i]=arr[i-1];

    }
    arr[y]=x;
}
