#include<stdio.h>  
  
int fac(int n);
   
int main()  
{  
  int num;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &num);   
   
  fact = fac(num);  
  printf("Factorial of %d is %ld\n", num, fact);  
  return 0;  
}  

int fac(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fac(n-1));  
}  
