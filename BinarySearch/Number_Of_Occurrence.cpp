class Solution {
public:
    int count(int arr[], int n, int x) {

        int first = -1, last = -1;
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == x) {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        low = 0; 
        high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == x) {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (first == -1)
            return 0;

        return last - first + 1;
    }
};
