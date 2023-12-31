/* Author: JAYADEEP G L
   Matrix multiplication */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100][100], b[100][100], mul[100][100], i, k, j, r1, c1, r2, c2;

    printf("Enter no. of Rows and Columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter no. of Rows and Columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible. Number of columns in A must be equal to the number of rows in B.\n");
        return 1;
    }

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix Multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*output:
        Enter no. of Rows and Columns for Matrix A: 2 3
        Enter no. of Rows and Columns for Matrix B: 3 2
        Enter elements of Matrix A:
        1 2 3 4 5 6
        Enter elements of Matrix B:
        7 8 9 10 12 14
        Matrix Multiplication:
        61	70	
        145	166	
  */
