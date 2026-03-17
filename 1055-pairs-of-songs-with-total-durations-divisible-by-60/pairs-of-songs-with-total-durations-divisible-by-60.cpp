class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
         vector<int> freq(60, 0);
        int count = 0;

        for(int t : time) {
            int rem = t % 60;
            int needed = (60 - rem) % 60;

            count += freq[needed];
            freq[rem]++;
        }

        return count;
    
    }
};