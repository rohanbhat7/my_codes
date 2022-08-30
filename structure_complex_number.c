#include<stdio.h>
#include<string.h>
int main(){
  int i,n;
  struct max
  {
    int real[10];
    int imag[10];

  }num_1[50];

  printf("enter the number of complex number to be entered: \n");
  scanf("%d",&n);
  printf("enter the real and imagenry part:\n");
  for(i=0;i<n;i++){
      scanf("%d",num_1[i].real);
      scanf("%d",num_1[i].imag);
      
  }
    for(i=0;i<n;i++){
        printf("the complex number is : %d+i%d",&num_1[i].real,&num_1[i].imag);
        
    }

  

  


}