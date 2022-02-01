
    for (int i = 0; i < size; i= i + 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    printf("Interchange array is:");
     for (int i = 0; i < size; i++)
     {
        printf(" %d\n", arr[i]);
     }
    return 0;
}

