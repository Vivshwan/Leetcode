class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> results(n,vector<int>(n));

        int top=0;
        int down=n-1;

        int left=0;
        int right=n-1;

        int id =0;
        int initial=1;
        while(top<=down && left<=right){
            if (id==0){ //left to right 
                for(int i=left ; i<=right ;i++){
                    
                    results[top][i]=initial++;
                }
                top++;
            }
            else if (id==1){ //top to down
                for(int i =top ; i<=down ;i++){
                    results[i][right]=initial++;
                }
                right--;
            }
            else if (id ==2){ //right to left
                for(int i =right ; i>=left ;i--){
                    results[down][i]=initial++;
                }
                down--;
            }
            else {  //down to top
                for(int i =down;i>=top;i--){
                    results[i][left]=initial++;
                }
                left++;
            }
            id = (id +1)%4;
        }
        return results;
    }
};