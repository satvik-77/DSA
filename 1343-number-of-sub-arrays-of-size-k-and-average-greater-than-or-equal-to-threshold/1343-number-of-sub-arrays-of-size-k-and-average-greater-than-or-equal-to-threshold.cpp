class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int n = arr.size();
        int count = 0;
        for(int i=0; i <k; i++){
            sum += arr[i];
        }
        if((double)(sum/k)>= threshold){
            count++;
        }
        for(int i=1; i < (n-k+1); i++){
            sum = sum - arr[i-1] + arr[i+k-1];
            if((double)sum/k >= threshold){
                count++;
            }
        }
        return count;

    }
};