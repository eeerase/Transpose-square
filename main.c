#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y);

int main(void)
{

    // initialize
    int n;
    scanf("%d", &n);
    int **matrix;
    matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
	{
        matrix[i] = (int*)malloc(n * sizeof(int));
	}
    for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < n; j++)
		{
            matrix[i][j] = i * n + j + 1;
		}
	}
	printf("\n");
     
    // print original
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
		{
            printf("%d\t", matrix[i][j]);
		}
        printf("\n");
    }
    printf("\n");

    // evaluate
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (i != j)
        {
            swap(&matrix[i][j], &matrix[j][i]);
            i--;
            j++;
        }
        else
            j = 0;
    }

    // print transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    system("PAUSE");	
    return 0;
}

void swap(int* x, int* y)
{
    int temp;
	temp = *x;
    *x = *y;
    *y = temp;
}
