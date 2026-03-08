#include <stdio.h>

void SORTELE(int arr[100][100], int row, int col)
{
    int n = 0;
    int a[10000];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[n++] = arr[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    n = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = a[n++];
        }
    }
}

int main()
{
    int row = 0, col = 0;

    printf("Enter number of row and col: ");
    scanf("%d %d", &row, &col);

    int arr[100][100];

    printf("Enter the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    SORTELE(arr, row, col);

    printf("After sorting:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
