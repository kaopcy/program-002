#include <stdio.h>
int main()
{
    int row, coef = 1;

    printf("Enter number of row: ");
    scanf_s("%d", &row);
    for (int i = 0; i < row; i++)//for new line
    {
        for (int space = 1; space <= row - i; space++)//for spacebar
            printf("  ");//print space = row - i 

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%d   ", coef);
        }
        printf("\n");
    }

    return 0;
}