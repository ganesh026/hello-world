// Question : LeetCode-287 

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2

// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3

#include <iostream>
#include <vector>

using namespace std;

int store(vector<int>& nums, int cur) {            // Recursive method
    if (cur == nums[cur])
        return cur;
    int nxt = nums[cur];
    nums[cur] = cur;
    return store(nums, nxt);
}

int main(){

    //defining var
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];

    // Algorithm Theory: Use the Array as a HashMap -- map each number to its equivalent index in the array. 
    // For instance, map (and store) the number 5 to index 5 (i.e. nums[5] = 5). Since there are (n + 1)
    // positions/indexes in the input array, and the numbers range from 1 to n, at least one index will have more 
    // than one number (due to the pigeonhole principle)

    while(nums[nums[0]]!=nums[0]){
        swap(nums[0],nums[nums[0]]);
    }
    
    return nums[0];
}
