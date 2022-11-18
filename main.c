#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    system("cls");
    int x = n+(n-1), y;
    y = x;
    int arr[x][y];
    int i, j;

    for(i=0; i<x; i++)
    {
        for(j=0; j<x; j++)
        {
            if(i==0 || j==0 || i==x-1 || j==x-1)
            {
                arr[i][j] = n;
                printf("%d ",arr[i][j]);
            }
            else if(i>0 && i<=x/2 && j<x)
            {
                arr[i][j] = arr[i-1][j];
                if(j>=i && j<=x-1-i)
                {
                    arr[i][j]--;
                    printf("%d ", arr[i][j]);
                }
                else
                {
                    printf("%d ", arr[i][j]);
                }
            }
            else if(i>x/2 || i<x-1)
            {
                arr[i][j] = arr[i-1][j];
                if(j==x/2)
                {
                    arr[i][j] = arr[i-1][j] + 1;
                    printf("%d ", arr[i][j]);
                }
                else if(j!=x/2)
                {
                    if(arr[i][j] == arr[i-1][x/2])
                    {
                        arr[i][j]++;
                        printf("%d ", arr[i][j]);
                    }
                    else
                    {
                        printf("%d ", arr[i][j]);
                    }
                }

            }
        }
        printf("\n");
    }
    return 0;
}
