/*Q2. Print series 1, 2, 4, 8, 16, 32, 64. given n = 8*/
#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter the nth term:");
    scanf("%d",&n)
    for(int i=0;i<n;i++)
    {
        printf("%d",result);
        result=result*2;
    }
    return 0;
}