class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = number value, Value = index of the number
        std::unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in our map
            if (seen.find(complement) != seen.end()) {
                // If found, return the index of the complement and the current index
                return {seen[complement], i};
            }
            
            // If not found, store the current number and its index in the map
            seen[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though the problem guarantees one)
        return {};
    }
};