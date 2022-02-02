
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
