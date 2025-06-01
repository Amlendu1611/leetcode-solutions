#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int lastNonZero =0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] != 0){
                    swap(nums[lastNonZero], nums[i]);
                    lastNonZero++ ;
                }
            }
        }
    };


    //You’re not “pushing” zeros to the left — you’re pulling non-zeros to the front. That’s the key idea.