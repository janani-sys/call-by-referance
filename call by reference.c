#include<stdio.h>
void swapx(int*,int*);
int main()
{
int a = 10, b = 20;
swapx(&a,&b);
printf("inside the main:\n a=%d b=%d\n",a,b);
}
void swapx(int*x,int*y)
{
 int t;
 t = *x;
 *x = *y;
 *y = t;
 printf("inside the funtion:\nx=%d y=%d\n",*x,*y);
 }
