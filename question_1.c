//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
#include<conio.h>
int row,col;
void input(int a[][col]) //Takes input in array
{
   int i,j;
   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
}
void add(int a[][col],int b[][col],int c[][col]) //Addition of first and second matrix and result will store in matrix 3
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
}
void print(int a[][col]) //print array
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
   int i,j;
   printf("How many row and coulmns:\n");
   scanf("%d%d",&row,&col);
   int matrix_1[row][col];
   int matrix_2[row][col];
   int matrix_3[row][col];
   printf("Enter %d elements of matrix_1:\n",row*col);
   input(matrix_1);
   printf("Print first matrix:\n");
   print(matrix_1);
   printf("Enter %d elements of matrix_2:\n",row*col);
   input(matrix_2);
   printf("Print second matrix:\n");
   print(matrix_2);
   add(matrix_1,matrix_2,matrix_3);
   printf("Addition of matrix_1 and matrix_2 is:\n");
   printf("Print third matrix:\n");
   print(matrix_3);
   getch();
   return 0;
}
