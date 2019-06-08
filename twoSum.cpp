// N^2 Solution
using namespace std;    
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // Loop though every element in vector
        for(int idx=0; idx < nums.size(); idx++)
        {
            // Get the remain value
            int remain = target - nums[idx];
            // Find remain value in remaining table
            for(int idx_sub=idx+1; idx_sub < nums.size(); idx_sub++)
            {
                // Return when remain matches value in vector
                if(nums.at(idx_sub) == remain)
                {
                    return vector<int> {idx, idx_sub};
                }
            }
        }
        return vector<int> {};
    }
};


// N Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // Declear new hashmap
        unordered_map<int, int> hashmap;
        // Loop though every element in vector
        for (int i = 0; i < nums.size(); ++i)
        {
            // Get the remain value
            int remain = target - nums[i];
            
            // Find the index for remain element
            // If the found index is not outside the end of the map
            // Then return
            if (hashmap.find(remain) != hashmap.end())
            {
                return vector<int> {hashmap[remain], i};
            }
            hashmap[nums[i]] = i;
        }
        return vector<int>();
    }
};
