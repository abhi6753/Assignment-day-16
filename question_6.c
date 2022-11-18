//6. Write a program in C to find the sum of rows and columns of a Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j,sum;
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
    printf("\nMATRX :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("SUM OF ROW:\n");
    for(i=0;i<row;i++)
    {
        sum =0;
        for(j=0;j<col;j++)
        {
            sum+=matrix[i][j];
        }
        printf("\tSum of row %d = %d\n",i+1,sum);
    }
    printf("SUM OF COLUMN:\n");
    for(i=0;i<row;i++)
    {
        sum =0;
        for(j=0;j<col;j++)
        {
            sum+=matrix[j][i];
        }
        printf("\tSum of column %d = %d\n",i+1,sum);
    }
    getch();
    return 0;
}
