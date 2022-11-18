//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j;
    printf("Enter number of row and column:\n");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    printf("Enter %d elements:\n",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The Lower Triangular Matrix is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           if(i>=j)
           {
               printf("%d ",matrix[i][j]);
           }
           else{
               printf("0 ");
           }
        }
        printf("\n");
    }
    getch();
    return 0;

}