/*1) Read a positive number, validating the input by repeatedly prompting for a value until a number meeting this condition is entered. This number represents the quantity of prime numbers to be displayed.*/

#include <stdio.h>

int main(void)
{
int primeqt, i, countdiv, found=0, j;
char repeat;
    
do
{
    do
    {
        printf("Please, specify the quantity of prime numbers to be displayed: ");
        scanf("%d", &primeqt);
            
        if(primeqt<=0)
        {
           printf("Invalid value\n");
        }
    }while(primeqt<=0);

    found=0;
    i=2;
    
    while(found<primeqt)
    {
        countdiv=0;

        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                countdiv++;
            }
        }

        if(countdiv==2)
        {
            printf("%d  ", i);
            found++;
        }
        i++;

    }

    printf("\nDo you want to specify another number? (y=yes or n=no): ");
    setbuf(stdin, NULL);
    scanf("%c", &repeat);

} while(repeat=='y' || repeat=='Y');

return 0;
}