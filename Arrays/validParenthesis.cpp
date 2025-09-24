
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {
    vector<char> arr; // stack for brackets

    for (char c : s)
    {
      if (c == '(' || c == '[' || c == '{')
      {
        arr.push_back(c); // opening bracket
      }
      else
      {
        if (arr.empty())
          return false; // no matching open

        if ((c == ')' && arr.back() != '(') ||
            (c == ']' && arr.back() != '[') ||
            (c == '}' && arr.back() != '{'))
        {
          return false; // mismatch
        }
        arr.pop_back(); // matched pair remove
      }
    }

    return arr.empty(); // valid if nothing left
  }
};

int main()
{
  Solution sol;
  string s = "[]";
  bool a = sol.isValid(s);
  cout << a; // Output: 1 (true)
  return 0;
}
