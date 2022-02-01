#include <stdio.h>
int main()
{
    int arr[20], size, i, temp;
    printf("Enter the array of size\n");
    scanf("%d", &size);
    printf("Enter the element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i= i + 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }


