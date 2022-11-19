class Complex 
{
  public:
    double x;
    double y;
    
    Complex(double a, double b) : x(a), y(b) {};
    const Complex operator+(const Complex other) const;
    const Complex operator-(const Complex other) const;
    const bool operator==(const Complex other) const;
    const double abs() const;
};
