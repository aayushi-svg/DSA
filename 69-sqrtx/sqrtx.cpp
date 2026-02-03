class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long long low = 1, high = x;
        int ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x)
                return mid;

            if (mid * mid < x) {
                ans = mid;      // possible answer
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    //   int ans = 1;
    //   for(int i = 1; i<= x; i++){
    //      if(i*i <= x){
    //         ans= i;
    //     }
    //     else{
    //         break;
    //     }
    //   }
    //   return ans;
    
};
