#include <iostream>
#include "binary_search.h"

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 10};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    std::cout << search(arr, arr_size, x) << std::endl;
    return 0;
} 