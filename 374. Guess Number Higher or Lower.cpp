/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int low=1;
        long int high=n;
        long int mid;
        int r;
        //if(n==1) r=1;
        while(high>=low){
            mid=(low+high)/2;
            int curmid = guess(mid);
            if(curmid==0){
                return mid;
            }else if(curmid==1){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
};
