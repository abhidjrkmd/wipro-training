/* increment and decrement*/
#include<stdio.h>
int main()
{

   int x=101,y=20,z;
   z=++x;
   y=z++;
   ++y;
   printf("%d %d %d\n",x++,++y,--z);
   return 0;
}