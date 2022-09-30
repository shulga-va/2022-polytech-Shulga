int search(int arr[], int n, int x, int result[])
{
    int j = 0;
    for(int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
            result[j++] = i;
    }
    return j;
}