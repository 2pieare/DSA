class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rowstart = 0, rowend = n-1;
        int colstart = 0, colend = n-1;
        int val = 0;
		
		// result matrix
        vector<vector<int>> v(n, vector<int> (n));
        while(rowstart <= rowend && colstart <= colend)
        {
            // left to right (row will be fixed)
            for(int i = colstart; i <= colend; ++i)
                v[rowstart][i] = ++val;
				
				// move down(col will be fixed)
            for(int i = rowstart+1; i <= rowend; ++i)
                v[i][colend] = ++val;
				
            // move right to left
            // move  up
            if(rowstart < rowend && colstart < colend)
            {
                // move right to left (row will be fixed)
                for(int i = colend-1; i>colstart; --i)
                    v[rowend][i] = ++val;
					
					// move up (col will be fixed)
					for(int i = rowend; i>rowstart; --i) 
                    v[i][colstart] = ++val;
            }
            ++rowstart;
            --rowend;
            ++colstart;
            --colend;
        }
        return v;

    }
};
