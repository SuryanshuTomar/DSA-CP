// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std;

// approach 1
int findPeak(vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;
    int temp = end;
    int result = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1]){
            result = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    if(result == -1){
        result = temp;
    }
    return result;
}

// approach 2
int findPeak2(vector<int>& arr){
      int start = 0;
    int end = arr.size() - 1;
        int temp = end;
    while(start < end){
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid + 1]){
                end = mid;
            }
            else{
                start = mid + 1;
            }
        }
    return start;
}

int main() {
    vector<int> arr = {3, 5, 7, 9, 10, 90, 100};
    int result = findPeak(arr);
   //  int result = findPeak2(arr);
    cout << result << endl;
    return 0;
}