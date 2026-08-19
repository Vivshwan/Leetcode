class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int year[101]={0};
        for(auto &log: logs){
            year[log[0]-1950] += 1;
            year[log[1]-1950] -= 1;

        }

        int maxPop=0 , curr =0 , maxYear = 1950;
        for(int i =0 ; i<101 ; i++){
            curr += year[i];
            if(curr > maxPop){
                maxPop= curr;
                maxYear= i+1950;
            }
        
        }
        return maxYear; 
    }
};