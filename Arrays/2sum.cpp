
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {

    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
        {

          return {i, j};
        }
      }
    }
    return {};
  }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  int target = 10;

  vector<int> ans = sol.twoSum(nums, target);
  for (int x : ans)
    cout << x;
}