#include <iostream>
#include <cstring>

class String
{
  private:
    unsigned int length;
    char* data;
    
  public:

    String()
    {
        length = 0;
        data = new char[1];
        data[0] = '\0';
    }

    String(const char* init)
    {
        length = strlen(init);
        data = new char[length+1];
        strcpy(data, init);
    }

    unsigned int get_length()
    {
        return length;
    }

    const char* c_str()
    {
        return data;
    }

    char operator [] (unsigned int pos)
    {   
        return data[pos];
    }

    friend std::ostream &operator<<(std::ostream &out, String &S)
    {
    out << S.c_str();
    return out;
    }

    String operator+(String &other) 
    {
      auto newString = (char *)malloc(length + other.length);
      int i, size = length + other.length;
      int thisLength = this->length, otherLength = other.length;

      for(i = 0; i < thisLength; i++)
        newString[i] = data[i];

      for(int j = 0; j < otherLength; i++, j++)
        newString[i] = other[j];
      
      newString[thisLength + otherLength] = '\0';
      return newString;
    }

    ~String()
    {
        delete[] data;
    }
};