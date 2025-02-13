GFG-Largest Element In An Array
class Solution {
    public:
      int largest(vector<int> &arr) {
          // code here
          int largest=arr[0];
          for(int i=1;i<arr.size();i++){
              if(arr[i]>largest){
                  largest=arr[i];
              }
          }
          return largest;
      }
  };

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

GFG-Second largest element in an array-Important
class Solution {
    public:
      int largest(vector<int> &arr) {
          // code here
          int largest=arr[0];
          for(int i=1;i<arr.size();i++){
              if(arr[i]>largest){
                  largest=arr[i];
              }
          }
          return largest;
      }
  };

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

26. Remove Duplicates from Sorted Array(LeetCode)
class Solution {
    public:
        int removeDuplicates(vector<int> &nums) {
            
          int i=0;
          for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
          }
              }return i+1;
        }
    };

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
189. Rotate Array(LeetCode)

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
        }
    };