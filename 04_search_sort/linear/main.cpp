#include <iostream>
#include "linear_search.h"

int main()
{
    int arr[] = {2, 4, 4, 4, 5, 8, 10};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result[arr_size];
    int n = search(arr, arr_size, x, result); 
    std::cout << n << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << result[i] << " ";
    }
    return 0;
} 