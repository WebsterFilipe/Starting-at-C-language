#include <stdio.h>

int main(void)
{
    int num, i, found;
    char repeat;

do
{
    do
    {
        printf("How many par numbers and divisible for 3 do you want to be displayed? ");
        scanf("%d", &num);
        
        if(num==0)
        {
            printf("Invalid value\n");
        }
    }while (num==0);

    if (num<0)
    {
        num=-num;
    }

    found=0;
    for(i=0; found<num; i++)
    {
        if(i%3==0 && i%2==0)
        {
            printf(" %d\t", i);
            found++;
        }
    }

    printf("Do you want to repeat the program? (Y or N): ");
    setbuf(stdin, NULL);
    scanf("%c", &repeat);
}while(repeat=='Y' || repeat=='y');

    return 0;
}