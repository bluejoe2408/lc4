#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
}

int main() {
    int num1, num2;
    cin>>num1>>num2;
    vector<int> nums1, nums2;
    for (int i=0; i<num1; i++)
    {
        int temp;
        cin>>temp;
        nums1.push_back(temp);
    }
    for (int i=0; i<num2; i++)
    {
        int temp;
        cin>>temp;
        nums2.push_back(temp);
    }

    cout << findMedianSortedArrays(nums1,nums2); << endl;
    return 0;
}
