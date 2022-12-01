#include <iostream>
#include <string>

using namespace std;

struct Person 
{
  Person() 
  { 
    cout << "Person::ctor" << endl; 
  }

  ~Person() 
  { 
    cout << "Person::dtor" << endl; 
  }

  string name{};
};

struct Student : virtual public Person 
{
  Student() 
  { 
    cout << "Student::ctor" << endl; 
  }

  ~Student() 
  { 
    cout << "Student::dtor" << endl; 
  }
  int score{};
};

struct Teacher : virtual public Person 
{
  Teacher() 
  { 
    cout << "Teacher::ctor" << endl; 
  }

  ~Teacher() 
  { 
    cout << "Teacher::dtor" << endl; 
  }
};

struct TA : Teacher, Student {};

int main() 
{
  TA ta;
  ta.score = 4.0;

  return 0;
}
