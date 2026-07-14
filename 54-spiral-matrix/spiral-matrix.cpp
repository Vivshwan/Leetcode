class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    vector<int> results;

    int top=0;
    int down=m-1;

    int left=0;
    int right=n-1;

    int id=0;

    while (top<=down && left<=right) {
        if (id==0){ //left to right 
            for(int i =left;i<=right;i++){
                results.push_back(matrix[top][i]);
            }
            top++;
        }
        else if (id==1){ //top to down 
            for (int i=top;i<=down;i++){
                results.push_back(matrix[i][right]);
            }
            right--;
        }
        else if (id==2){ //right to left 
            for (int i =right;i>=left;i--){
                results.push_back(matrix[down][i]);
            }
            down--;
        }
        else if (id==3){ //down to top
            for (int i=down;i>=top;i--){
                results.push_back(matrix[i][left]);
            }
            left++;
        }
        else{
            return results;
        }
        id = (id +1)%4;
    }
    return results;   
 }
};