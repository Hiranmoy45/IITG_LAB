#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k, sum;
    printf("Enter the row and column of 1st matrix:\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column of 2nd matrix:\n");
    scanf("%d%d", &r2, &c2);

    // Calculate the matrix only if column number(1st Matrix) = row number(2nd Matrix)
    if (c1 == r2)
    {
        // taking elements of 1st matrix
        printf("\nEnter the elements of 1st matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        // taking elements of 2nd matrix
        printf("\nEnter the elements of 2nd matrix:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        // printing 1st matrix
        printf("\nThe 1st matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        // printing 2nd matrix
        printf("\nThe 2nd matrix is:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }

        // calculating the product
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                sum = 0;
                for (k = 0; k < c1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                    c[i][j] = sum;
                }
            }
        }

        // printing the product matrix
        printf("Product of the matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    // column number(1st Matrix) != row number(2nd Matrix)
    else
    {
        printf("\nMultiplication cannot happen between the given matrix.\n");
    }
}
