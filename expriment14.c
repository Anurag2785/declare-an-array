#include<stdio.h>
int main()
{ 
int number=42;
int*p;
p=&number;
printf("The value of number is %d\n",number);
printf("The address if number is %P\n",number);
printf("The value of p is %p\n",p);
printf("The value pointed to by p is %d\n",p);
*p=99;
printf("The new value of number is %d\n",number);
return 0;
}
