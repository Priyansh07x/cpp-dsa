#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<pair<int, int>> arr;

        // Store value and original index
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        // Sort according to values
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n - 1;

        while (left < right) {

            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    vector<int> ans = obj.twoSum(nums, target);

    if (ans.empty()) {
        cout << "No solution found." << endl;
    } else {
        cout << "Indices are: " << ans[0] << " " << ans[1] << endl;
        cout << "Values are: " << nums[ans[0]] << " " << nums[ans[1]] << endl;
    }

    return 0;
}