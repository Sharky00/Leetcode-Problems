//Sharik Mahmood - Learning Outcome: This is an initial attemt to lengthOfLongestSubstring problem in c++, I used brute force but wasnt happy with outcome
// check my JS version of this problem for a better solution incorperating the "sliding window" technique
class Solution {
public:
    bool isIn(vector<char> V, char c) // checks to see if Substring is already recorded in our vector
    {
        for(int i = 0;i< V.size();i++) //for loop for vector
        {
            if(V[i] == c) return true; //if found we return true
        }
        return false; //else we return false
    }

    int lengthOfLongestSubstring(string s) 
    {
        int L = 0; //our return value size
        vector<char> V; //our vector we use to record our substring

        for(int i = 0;i< s.length();i++) //  for the size of the string
        {
            V.clear(); // make sure our vector is empty
            V.push_back(s[i]); // add current string position to the vector

            for(int j = i+1;j< s.length();j++) // for the rest of the string
            {
                if(!isIn(V,s[j])) // if the char is not in our substr already
                {
                    V.push_back(s[j]); // we add it in
                }
                else
                {
                    break; // else we break
                }
            }
            if(V.size() > L) // then we see if the substr is longer then our previously recorded largest size
            {
                L = V.size(); // if its bigger we add it here
            }
        }


        return L; // return largest size
    }
};
