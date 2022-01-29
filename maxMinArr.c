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
 
    min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
            d = i+1;
        }
    }
    printf("The max value is '%d' at the position of %d\n",max,c);
    printf("The min value is '%d' at the position of %d\n",min,d);
    return 0; 
}
