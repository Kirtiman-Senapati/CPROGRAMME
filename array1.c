#include<stdio.h>
int max(int arr[], int size)
{
    int r, i;
    r = arr[0]; 
    for(i = 1; i<size; i++)
    {
        if (arr[i] > r)
        r = arr[i];
    }
    return r;
}
int main()
{
    int arr[5];
    int m, i;
    printf("Enter the array elements : ");
    for(i = 0; i<5; i++)
    scanf("%d", &arr[i]);
    m = max(arr, 5);
    printf("The largest element is : %d", m);
    return 0;
}
