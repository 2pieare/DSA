
class Solution {
public:
    int firstBadVersion(int n) {
        long int start=0;
        long int end=n;
        long int mid;
        long int flag=n;
        while(end>=start){
            mid = (start+end)/2;
            if(isBadVersion(mid)){
                flag = mid;
                end = mid-1;
            }
            else start=mid+1;
        }
        return flag;
    }
};
