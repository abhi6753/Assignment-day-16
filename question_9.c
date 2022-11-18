//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix

/*Sparse Matrix:
A matrix is said to be sparse matrix if most of the elements of that matrix are 0.
It implies that it contains very less non-zero elements.
To check whether the given matrix is the sparse matrix or not,
we first count the number of zero elements present in the matrix.
Then calculate the size of the matrix. For the matrix to be sparse,
count of zero elements present in an array must be greater than size/2.
4 0 0
0 5 0
0 0 6
Program to determine whether a given matrix is a sparse matrix
Number of zeroes present in above matrix is 6 and size of the matrix is 3 * 3 = 9.
Since, 6 > 4.5 that means, most elements of given array are zero.
Hence, the above matrix is a sparse matrix.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j,count =0;
    printf("Enter number of row and column: ");
    scanf("%d%d",&row,&col);
    int matrix[row][col];
    printf("Enter %d elements of a matrix:\n",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>row*col/2.0)
    {
        printf("Given matrix is a sparse matrix");
    }
    else
     printf("Given matrix is not a sparse matrix");
}