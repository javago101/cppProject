#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map; // To store the difference and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate the complement
        if (num_map.find(complement) != num_map.end()) {
            // If the complement is found, return the indices
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i; // Store the index of the current element
    }
    // If no solution is found, return an empty vector (assuming the problem guarantees a solution, this line won't be reached)
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "Indices of the numbers that add up to " << target << " are: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
