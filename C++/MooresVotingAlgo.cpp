 /*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/
int majorityElement(vector<int>& nums) {
        int ele,count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0)
                ele=nums[i];
            if(ele==nums[i])
                count++;
            else
                count--;
        }
        return ele;
    }

    //MAJORITY ELEMENTS II
    //Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
    /*
    **brute force:**
    Run two loops 1st for selecting a number and second for counting it,if count is >n/3 then its a majority element
    Time Complexity:O(N^2)
    Space:O(1)
    **2nd way:**
    Use HashMap
    Time Complexity:O(N)
    Space:O(N)
    **Optimized way**
    Moores Algorithm
    Time Complexity:O(N)
    Space:O(1)
    */

     vector<int> majorityElement(vector<int>& nums) {
        int ele1=-1,ele2=-1,count1=0,count2=0;
        int n=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1)
                count1++;
            else if(nums[i]==ele2)
                count2++;
            else if(count1==0){
                ele1=nums[i];
                count1=1;
            }
            else if(count2==0){
                 ele2=nums[i];
                 count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1)
                count1++;
            else if(nums[i]==ele2)
                count2++;
                
        }
        if(count1>n && count2>n)
            return {ele1,ele2};
        else{
            if(count1>n)
                return {ele1};
            else if(count2>n)
                return {ele2};
            else
                return {};
        }
    }
