class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        /*
        int col0 = 1, row=matrix.size(), col=matrix[0].size();
        
        for(int i=0; i<row; i++){
            if(matrix[i][0]==0) col0 = 0;
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=1; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if(col0==0) matrix[i][0] = 0;
        }
        */
        int n = arr.size();
	int m = arr[0].size();
	bool isRowZero = false;
	bool isColZero = false;

	//check for 0 in 0th row and column

	//iterating on 0th column
	for (int i = 0; i < n; i++) if (arr[i][0] == 0) isColZero = true;
	//iterating on 0th row
	for (int j = 0; j < m; j++) if (arr[0][j] == 0) isRowZero = true;

	//check for the rest of the cells
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (arr[i][j] == 0) {
				arr[0][j] = 0;
				arr[i][0] = 0;
			}
		}
	}

	//row
	for (int i = 1; i < n; i++) {
		if (arr[i][0] == 0) {
			//set the entire row as 0.
			for (int j = 0; j < m; j++) {
				arr[i][j] = 0;
			}
		}
	}
	//column
	for (int j = 1; j < m; j++) {
		if (arr[0][j] == 0) {
			//set the entire column as 0.
			for (int i = 0; i < n; i++) {
				arr[i][j] = 0;
			}
		}
	}

	//now, fill zero for the 0th row and 0th column using isRowZero and isColZero.
	if (isRowZero) {
		//set entire 0th row as 0
		for (int j = 0; j < m; j++) {
			arr[0][j] = 0;
		}
	}
	if (isColZero) {
		//set the entire 0th col as 0
		for (int i = 0; i < n; i++) {
			arr[i][0] = 0;
		}
	}
    }
};
