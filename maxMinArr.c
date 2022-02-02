#include<stdio.h>
int main()
{
    int arr[20], i, size, max, min,c,d;
    printf("Enter the array of size\n");
    scanf("%d", &size);
    printf("Enter the element of Array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
            c = i+1;
        }
    }
