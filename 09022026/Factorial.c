int main(){
  int i,n,fact=1;
  printf("Enter Number");
  scanf("%d" ,&n);
  for(i=n;i>=1;i--){
  fact = fact*i;}
 printf("Factorial is : %d" ,fact);
  return 0;
} 
