#include <stdio.h>
#include <stdlib.h>

// int transpose_matrix(int **matrix, int **transpose, int *row_size, int *col_size)
// {
//     for (int row = 0; row < *row_size; row++)
//     {
//         for (int col = 0; col < *col_size; col++)
//         {
//             transpose[col][row] = matrix[row][col];
//         }
//     }

//     return 0;
// }

// int transpose_matrix_main()
// {
//     int row_size, col_size;

//     // Get the size of the matrix from the user
//     scanf("%d", &row_size);
//     scanf("%d", &col_size);

//     // Create a 2D matrix of the specified size
//     int **matrix, **matrix_transposed;

//     matrix = malloc(row_size * sizeof *matrix);
//     matrix_transposed = malloc(row_size * sizeof *matrix_transposed);

//     for (int i = 0; i < row_size; i++)
//     {
//         matrix[i] = malloc(col_size * sizeof *matrix[i]);
//         matrix_transposed[i] = malloc(col_size * sizeof *matrix[i]);

//         for (int j = 0; j < col_size; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int result = transpose_matrix(matrix, matrix_transposed, &row_size, &col_size);

//     // Print the transposed matrix
//     for (int row = 0; row < row_size; row++)
//     {
//         for (int col = 0; col < col_size; col++)
//         {
//             printf("%d ", matrix_transposed[row][col]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

int transpose_matrix_main()
{
    int row_size, col_size;

    // Get the size of the matrix from the user
    scanf("%d", &row_size);
    scanf("%d", &col_size);

    // Create a 2D matrix of the specified size
    int matrix[row_size][col_size], matrix_transposed[col_size][row_size];

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int row = 0; row < row_size; row++)
    {
        for (int col = 0; col < col_size; col++)
        {
            matrix_transposed[col][row] = matrix[row][col];
        }
    }

    printf("\n");

    // Print the transposed matrix
    for (int row = 0; row < col_size; row++)
    {
        for (int col = 0; col < row_size; col++)
        {
            printf("%d ", matrix_transposed[row][col]);
        }
        printf("\n");
    }

    return 0;
}
