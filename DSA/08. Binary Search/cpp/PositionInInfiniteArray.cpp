// https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/

#include <bits/stdc++.h>
using namespace std;

vector<int> findRange(vector<int>& arr, int target){
    int start = 0;
    int end = 1;
    // finding range for where the target exists
    while(target > arr[end]){
        int temp = end + 1;
        end = end + (end - start + 1) * 2;
        start = temp;
    }
    return {start, end};
}

int findIndex(vector<int>& arr, int target, int start, int end){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

// TC - Time taken to find the range + Time taken to find the element in that range.
// TC - O(logn) + O(logn) => 2 * O(logn) => O(logn)
int main() {
    vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int target = 10;
    vector<int> range = findRange(arr, target);
    int result = findIndex(arr, target, range[0], range[1]);
    cout << result << endl;
    return 0;
}