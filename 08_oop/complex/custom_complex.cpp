#include <cmath>
#include "custom_complex.h"
#include <doctest.h>

const Complex Complex::operator+(const Complex other) const 
{
  return Complex(x + other.x, y + other.y);
}
const Complex Complex::operator-(const Complex other) const 
{
  return Complex(x - other.x, y - other.y);
}

const bool Complex::operator==(const Complex other) const 
{
  return x == other.x && y == other.y;
}

const double Complex::abs() const 
{
  return sqrt(x * x + y * y);
}