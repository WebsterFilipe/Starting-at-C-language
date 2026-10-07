/*4) Write a program that reads the investment amount, the monthly yield percentage, and the investment period; and returns the value of the investment
 at the end of the period. Note: Every 12 months, the yield percentage must be increased by 0.25. Validate the investment amount to ensure it is positive. 
 Validate the yield percentage to ensure it is a number between 0 and 1. Validate the period to ensure it is a positive value.*/

 #include <stdio.h>

int main(void)
{
    int months, i;
    float invest, yieldperc;
    char repeat;
    
    do
    {
        do
        {
            printf("Please, specify the investment amount: ");
            scanf("%f", &invest);
            if(invest<=0)
            {
                printf("Invalid amount\n");
            }
        }while(invest<=0);

        do
        {
            printf("Please, specify the month yield percentage (from 0 to 1): ");
            scanf("%f", &yieldperc);
            if(yieldperc<0 || yieldperc>1)
            {
                printf("Invalid value\n");
            }
        } while(yieldperc<0 || yieldperc>1);

        do
        {
            printf("Please, specify the period(months): ");
            scanf("%d", &months);
            if(months<=0)
            {
                printf("Invalid value");
            }
        }while(months<=0);

        printf("MES\t");
        printf("%% DE RENDIMENTO\t");
        printf("VALOR APLICACAO\n");
        for(i=1; i<=months; i++)
        {
            if(i%12==0)
            {
                yieldperc = yieldperc + 0.25;
            }

            invest = invest + (invest*yieldperc);
            printf("%d\t%.2f\t\t%.2f\n", i, yieldperc, invest);
        }

        printf("Do you want to repeat the program? (Y or N): ");
        setbuf (stdin,NULL);
        scanf(" %c", &repeat);

    }while(repeat=='Y' || repeat=='y');
    
    return 0;
}