double expon(double a, double b)
{
    double res = 1;
    for(int i = 0; i < b; ++i)
        res *= a;
    return res;
}

double calculate(double a, char $, double b)
{
    switch($)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '^':
            return expon(a, b);
        default:
            return 0.00;
    }
}