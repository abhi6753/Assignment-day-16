//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j,count,rownum=1;
    printf("Enter number of row and column:\n");
    scanf("%d%d",&row,&col);
    int matrix[row][col];
    int ones[row]; // to store number of ones of each row
    printf("Enter %d elements of an array:\n",row*col);
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
           scanf("%d",&matrix[i][j]);
       }
    }
    for(i=0;i<row;i++)
    {
        count =0;
       for(j=0;j<col;j++)
       {
           if(matrix[i][j]==1)
           {
               count++;
           }
       }
       ones[i]=count;
    }
    int greater=ones[0];
    for(i=1;i<row;i++)
    {
        if(greater<ones[i])
        {
           greater=ones[i];
           rownum = i+1;
        }
    }
    printf("\n\t%d ones in row %d",greater,rownum);
    getch();
    return 0;
}