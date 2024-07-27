// Matrix Multiplication using Pointers 
#include <stdio.h>
void multiply(int *a, int *b, int *c, int m, int n, int p);
void input_matrix(int *matrix, int rows, int cols);
void print_matrix(int *matrix, int rows, int cols);
int main() 
{
    int m, n, p;
    printf("Enter the dimensions of the first matrix (rows columns): \n");
    scanf("%d %d", &m, &n);
    printf("Enter the dimensions of the second matrix (rows columns): \n");
    scanf("%d %d", &n, &p);
    int a[m][n], b[n][p], c[m][p]; 
    printf("Enter the elements of the first matrix:\n");
    input_matrix((int *)a, m, n);
    printf("Enter the elements of the second matrix:\n");
    input_matrix((int *)b, n, p);
    multiply((int *)a, (int *)b, (int *)c, m, n, p);
    printf("The product of the two matrices is:\n");
    print_matrix((int *)c, m, p);
    return 0;
}
void multiply(int *a, int *b, int *c, int m, int n, int p) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            *(c + i * p + j) = 0;
        }
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                *(c + i * p + j) += *(a + i * n + k) * *(b + k * p + j);
            }
        }
    }
}
void input_matrix(int *matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", (matrix + i * cols + j));
        }
    }
}
void print_matrix(int *matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}