//First take a look on Binary Search concept (only idea without proper syntax)
        // Binary Search
// given array arr[l..r] where " l " is leftmost element and " r " is rightmost element also assumed as high, otherwise -1
int Binarysearch(int target) {
        vector<int>& nums={1,2,3,4,5,6,8,9};  // let take array of distinct elements
        
        int low = 0, high = --nums.size();// because array indexing starts from zero so high/r position in array is size-1 and low/leftmost element position is zero
        while( low <= high){  // till value of low is less or equal to high following indented code runs
            int mid = low + (high-low)/2;
            if (nums[mid] == target) return mid; 
            else if (nums[mid] > target) high = mid -1;
            else low = mid + 1;
        }
        return -1;
  }
int main()
{
  BinarySearch(6);
  return 0;
}

               // Recursive Binary Search

int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
int mid = l + (r - l)/2;
// If the element is present at the middle itself
if (arr[mid] == x) return mid;
// If element is smaller than mid, then it can only be present
// in left subarray
if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
// Else the element can only be present in right subarray
return binarySearch(arr, mid+1, r, x);
}
// We reach here when element is not present in array
return -1;
}
int main(void)
{
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr)/ sizeof(arr[0]);
int x = 10;
int result = binarySearch(arr, 0, n-1, x);
(result == -1)? printf("Element is not present in array")
: printf("Element is present at index %d", result);
return 0;
}

