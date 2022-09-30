int linear_search(int arr[], int n, int x)
{
    for(int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int binary_search(int arr[], int n, int x)
{
    int l = 0;
    int r = n-1;
    int mid;
 
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            r = mid - 1;
        else 
            l = mid + 1;
    }
    return -1;
}