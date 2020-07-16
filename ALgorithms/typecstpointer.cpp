#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   int *s;
   printf("%d",s);
   printf("\n");
   printf("%d",x);
   printf("\n");
   x = (char *) &a; 
   a = 512; 
   x[0] = 1; 
//   x[1] = 2; 
   printf("%d",x);
   printf("\n");
   printf("%d",a);   
   return 0; 
}
