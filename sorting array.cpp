#include <stdio.h>
#include<math.h>

int main() {
  int temp1,temp;
  int n, LA[n];
  printf("Enter the size of the array");
  scanf("%d",&n);
  printf("Enter the elements of the array");
  for(int x=0;x<n;x++){
    printf("LA[%d] :",x);
    scanf("%d",&LA[x]);
  }
  for(int i=0;i<n;i++){
    temp1=i;
    for(int y=temp1;y<n;y++){
      if(LA[i]>LA[y+1]){
        temp=LA[i];
        LA[i]=LA[y+1];
        LA[y+1]=temp;
      }
    }

  }
  printf("Sorted array : ");
	for(int z=0;z<n;z++){
  	printf("%d",LA[z]);
}
}
