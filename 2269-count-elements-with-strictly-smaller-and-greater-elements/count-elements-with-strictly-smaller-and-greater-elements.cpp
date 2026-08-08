class Solution {
public:
    int countElements(vector<int>& arr) {
    int s= arr.size();
    sort(arr.begin(),arr.end());
    int count=0;
    int min=arr[0];
    int max=arr[s-1];
    for(int i=1;i<s-1;i++){
        if (min<arr[i] && arr[i]<max){
           count++;
        }
    }
    return count;   
    }
};