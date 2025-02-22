class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return;
        int j = -1;
        for(int i = 0;i < n;i++) {
            if(arr[i] == 0) { 
                j = i;
                break;
            }
        }
        if(j != -1) {
            for(int i = j+1;i < n;i++) {
                if(arr[i] != 0) {
                    swap(arr[j],arr[i]);
                    j++;
                }
            }
        }
    }
};