#include<stdio.h>
void main(){
  int a[10],n,i;
  printf("Enter the number");
  scanf("%d",&n);
  printf("Enter the array element");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(a[i]==i)
      printf("%d",i);
    }
}
