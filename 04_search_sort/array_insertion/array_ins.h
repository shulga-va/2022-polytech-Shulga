int search_position(int arr[], int size, int x)
{
    for(int i = 0; i < size; i++)
        if (arr[i] >= x)
            return i;
    return -1;
}

void insert(int arr[], int arr_new[], int size, int x, int p)
{
    for (int i = 0; i < size; ++i)
    {
        if (i == p)
            arr_new[i] = x;
        if (i < p)
            arr_new[i] = arr[i];
        if (i > p)
            arr_new[i] = arr[i-1];
    }
}

void insert_sorted(int arr[], int arr_new[], int size, int x)
{
    insert(arr, arr_new, size, x, search_position(arr, size, x));
}