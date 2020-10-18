// Problem - 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int x=0; x<nums.size(); x++) {            //outer loop  0 --> size of vector nums
            
            for(int y=1; y<nums.size(); y++) {        //inner loop  1 --> size of vector nums
                
                if(nums[x]+nums[y]==target && x!=y)   
                    return vector<int> {x,y};         // return vector of i and j if condition satisfies
                    
            }
        }
        return {};   // return empty vector if condition fails for every element
    }
};
