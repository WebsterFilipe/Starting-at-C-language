/*3) Write a program that prints all possible combinations where the sum of the faces from rolling two dice equals a value specified by the user. 
The user must provide a valid value between 2 and 12. Continue asking for input until the user enters a valid value.*/

#include <stdio.h>

int main(void)
{
    int num, i, j, cont=0;
    char repeat;

    do
    {
        do
        {
        printf("Please, specify a value between 2 and 12: ");
        scanf("%d", &num);
        if(num<2 || num>12)
        {
            printf("Invalid value\n");
        }
        }while(num<2 || num>12);

        for(i=1; i<=6; i++)
        {
            j=num-i;
            if(j>=1 && j<=6)
            {
                printf("%d + %d = %d\n ", i, j, num);
                cont++;
            }
        }
        printf("\nPossibilities: %d\n", cont);
        
        printf("Do you want to repeat the program? (Y or N): ");
        setbuf(stdin, NULL);
        scanf("%c", &repeat);
    }while(repeat=='y' || repeat=='Y');

    return 0;
}