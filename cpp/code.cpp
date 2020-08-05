#include <bits/stdc++.h>
#include <igloo/igloo_alt.h>
using namespace igloo;
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        for (int i=0; i< nums.size() - 2; i++) {
            for (int j=i+1; j < nums.size() - 1; j++) {
                for (int k=i+2; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int>& V {nums[i],nums[j],nums[k]};
                        
                        // Sorting
                        for(int a=0; i<V.size(); i++){
                            for (int b=a+1; b < V.size(); b++) {
                                if (V[a] > V[b]) {
                                    swap(V[a], V[b]);
                                }
                            }
                        }
                        if (find(nums.begin(), nums.end(), V) != nums.end()) {
                            ans.push_back(V);
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};

Describe(CodeWars){
  It(BasicTests)
  {
    Assert::That(fakeBin("45385593107843568"), Equals("01011110001100111"));
    Assert::That(fakeBin("509321967506747"), Equals("101000111101101"));
    Assert::That(fakeBin("366058562030849490134388085"), Equals("011011110000101010000011011"));
    Assert::That(fakeBin("15889923"), Equals("01111100"));
    Assert::That(fakeBin("800857237867"), Equals("100111001111"));
  }
};

int main(int argc, char* argv[])
{
  return TestRunner::RunAllTests(argc, argv);
}