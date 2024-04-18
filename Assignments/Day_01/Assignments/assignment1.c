
#include<stdio.h>
int main () 
{
    int num, result;                                                                  #Comments
    scanf("%d", &num);
     if (num % 2 == 0) 
     {                                                           // Determine if the number is even or odd
        result = num * num;                                                    // If even, calculate square  
     } 
    else 
    {
        result = num * num * num;                                          // If odd, calculate cube
    }
    return 0;
}
