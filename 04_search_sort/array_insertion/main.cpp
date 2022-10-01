#include <iostream>
#include "array_ins.h"

int main()
{
    int arr[] = {1, 5, 8};
    int x = 4, p = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr_new[++n];
    insert_sorted(arr, arr_new, n, x);
    for(int i = 0; i < n; i++)
        std::cout << arr_new[i] << " ";
    std::cout << std::endl;
    return 0;
}