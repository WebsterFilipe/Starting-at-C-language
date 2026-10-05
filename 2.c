/*2) Read a positive number, validating the input by repeatedly prompting for a value until one meeting this condition is entered. This number represents the quantity of odd numbers to be displayed. Present these values ​​with *n* numbers per line, where *n* is a user-supplied number greater than zero. The values ​​should be separated by tabs. Calculate the average of the displayed odd numbers.*/

#include <stdio.h>

int main(void)
{
    int quantodd, quantoddline, i, sum, odd;
    char repeat;
    do
    {
        do
        {
            printf("Please, specify de quantity of odd numbers to be displayed: ");
            scanf("%d", &quantodd);

            if(quantodd<=0)
            {
                printf("Invalid value\n");
            }
        } while (quantodd<=0);

        do
        {
            printf("Please, specify how many odd numbers you want to be displayed: ");
            scanf("%d", &quantoddline);

            if(quantoddline<=0)
            {
                printf("Invalid value, please specify a different quantity of odd number per line\n");
            }
        } while (quantoddline<=0);

        sum=0;
        odd=1;

        for(i=1; i<=quantodd; i++)
        {
            printf("%d\t", odd);
            sum+=odd;

            if(i%quantoddline==0)
            {
                printf("\n");
            }

            odd+=2;

        }

        printf("\nThe odd avarage is: %.2f\n", (float)sum/quantodd);

        printf("Do you want to repeat the program execution? (Y or N): ");
        scanf(" %c", &repeat);

    }while(repeat=='y' || repeat=='Y');

    return 0;
}