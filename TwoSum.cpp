class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    { //nums is an array of integers, target is our target return value (9)
        int sum = 0;
        vector<int> two;

        for(int i = 0; i < nums.size();i++) //first index
        {
            for(int j = 0; j < nums.size();j++) //seconf index
            {
                if(i != j) //while not on same index
                {
                    sum = nums[i] + nums[j]; //add indexes
                    if(sum == target) //if the sum equals our target value
                    {
                        two.push_back(i); //we add the index' to our vector
                        two.push_back(j);
                        return two; //we return both index'
                        //return i,j;
                    }
                }
            }
        }
        return two; // for all paths we make a return here
    }
};
