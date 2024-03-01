class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // Get the size of the array
        int size = arr.size();

        // Initialize low and high pointers for binary search
        int low = 0, high = size - 1;

        // Binary search loop
        while (low <= high) {
            // Calculate the middle index
            int mid = (low + high) / 2;

            // Calculate the number of missing elements before arr[mid]
            int missing = arr[mid] - (mid + 1);

            // Check if the number of missing elements is less than k
            if (missing < k) {
                // If there are less missing elements than k, move low to mid +
                // 1
                low = mid + 1;
            } else {
                // If there are equal to or more missing elements than k, move
                // high to mid - 1
                high = mid - 1;
            }
        }

        // At this point, low points to the index where the kth missing number
        // should be inserted We add k to low because we need to find the kth
        // missing number, not just its index
        return low + k;
    }
};
