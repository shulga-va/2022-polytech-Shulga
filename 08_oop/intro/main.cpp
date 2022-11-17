
#include "String.h"

int main() 
{
  String a = "Hello";
  
  String b = " World!";
  String c = a + b;
  std::cout << c << '\n' << c.get_length() << std::endl;
  return 0;
}