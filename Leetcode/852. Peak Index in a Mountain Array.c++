// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int l = 0, r = arr.size() - 1, mid;
        while (l < r)
        {
            mid = (l + r) / 2;
            if (arr[mid] < arr[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};