// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// https://leetcode.com/problems/find-peak-element/


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

// approach 2 - better approach
int findPeak2(vector<int>& arr){
      int start = 0;
    int end = arr.size() - 1;
        int temp = end;
    while(start < end){
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid + 1]){
                // This means we are in the decreasing part of the array.
                // Doing end = mid and not mid - 1, Because we don't if mid - 1 > mid.
                end = mid;
            }
            else{
                // This means we are in the increasing part of the array.
                // Here we have checked that mid is less than mid + 1, so start = mid + 1
                start = mid + 1;
            }
        }
        // In the end, start == end, start will be equal to end because of the above two checks, Therefore, start and end will point to the peak element in the array. So, we can return either. 
    return start;
}

int main() {
    vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 80, 65, 40};
    // int result = findPeak(arr);
    int result = findPeak2(arr);
    cout << result << endl;
    return 0;
}