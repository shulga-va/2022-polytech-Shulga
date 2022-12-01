#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

struct BasicToken 
{
  string value;
};

struct StringToken : public BasicToken 
{
  StringToken(string s) 
  { 
    value = '"' + s + '"'; 
  }
};

struct NumToken : BasicToken 
{
  template <typename T> NumToken(T i) 
  { 
    value = to_string(i); 
  }
};

struct BoolToken : BasicToken 
{
  BoolToken(bool b) 
  { 
    value = b ? "true" : "false"; 
  }
};

struct ArrayToken : BasicToken 
{
  ArrayToken(initializer_list<BasicToken> v) 
  {
    value = "[";
    for (size_t i = 1; auto s : v) 
    {
      value.append(s.value);
      if (i != v.size()) 
      {
        value.append(",");
        i++;
      }
    }
    value.append("]");
  }
};

struct Json 
{
  unordered_map<string, BasicToken> tokens;

  Json(unordered_map<string, BasicToken> j) 
  { 
    tokens = j; 
  }
  string serialize() 
  {
    string out = "{";
    for (size_t i = 1; const auto &elem : tokens) 
    {
      out.append("\"" + elem.first + "\":" + elem.second.value);
      if (i != tokens.size()) 
      {
        out.append(",");
        i++;
      }
    }
    out.append("}");
    return out;
  }
};
