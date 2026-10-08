/* 6) Floyd's Triangle is a triangle formed by natural numbers. The triangle starts with 1 in the top-left corner and 
continues the sequence of natural numbers such that each row contains one more number than the previous row. 
Write a program that reads a positive integer n and then prints n rows of Floyd's Triangle. */

#include <stdio.h>

int main(void)
{
    int num, i, j, count=1; 

    do
    {
        printf("Please, specify a positive number: ");
        scanf("%d", &num);

        if(num<=0)
        {
            printf("Invalid value\n");
        }
    }while(num<=0);

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}