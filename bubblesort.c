#include <stdio.h>

void display(int a[], int size)
{   
    int i;
    printf("The array is \n");
    for ( i = 0; i < size; i++)
        printf("%d\n", a[i]);
}

void bsort(int a[], int size)
{
    int i, j, temp, flag = 0;
    for ( i = 0; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag = 1;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
        if(!flag){
            return;
        }
            
    }
}

int main()
{
    int i, a[20], n;
    printf("Enter the size of the array \n");
    scanf("%d", &n);
    printf("Enter the array elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bsort(a, n);
    display(a, n);
    return 0;
}