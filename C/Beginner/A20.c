#include <stdio.h>

int main(void)
{
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    matrix[0][0] = 9;

    printf("%d\n", matrix[1][2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
    }
    return 0;
}
