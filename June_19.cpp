// 1732. Find the Highest Altitude

// beats 100%
// time complexity: O(n)

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt=0;
        int maxAlt=0;
        for(int i=0; i<gain.size(); i++)
        {
            alt+=gain[i];
            if(maxAlt<alt)
                maxAlt=alt;
        }
        return maxAlt;
    }
};
