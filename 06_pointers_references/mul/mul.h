#include <cassert>

const char numbers[] = "0123456789";
const int arr_numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

unsigned int length(const char* str)
{
    if (str == nullptr)
    return 0;
    const char* c = str;
    while(*c != '\0')
        ++c;
    return c - str;
}

int convert_to_int(const char* x)
{
    int res = 0;
    for (int i = 0; i < length(x); i++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (x[i] == numbers[k])
            {
                res = res * 10;
                res = res + k;
            }
        }
    }
    return res;
}

const char* convert_to_char(int x)
{
    int y = x;
    int c = 1;
    while ((y / 10) != 0)
    {
        y /= 10;
        c++;
    }
    char* res = new char[c + 2];
    y = x;
    for (int i = c - 1; i > -1; i--)
    {
        for (int k = 0; k < 10; k++)
        {
            if ((x % 10) == arr_numbers[k])
            {
                res[i] = numbers[k];
                break;
            }
        }
        x /= 10;
        res[c] = '\0';
    }
    return res;
}

const char* mul(const char* x, const char* y)
{
    return convert_to_char(convert_to_int(x) * convert_to_int(y));
}