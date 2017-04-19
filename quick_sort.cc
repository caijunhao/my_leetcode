#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& nums, int left, int right){
    auto pivot = nums[left];
    while(left<right){
        while(left<right&&nums[right]>=pivot)
            right--;
        if(left<right)
            nums[left++] = nums[right];
        while(left<right&&nums[left]<pivot)
            left++;
        if(left<right)
            nums[right--] = nums[left];
    }
    nums[left] = pivot;
    return left;
}
void quick_sort(vector<int>& nums, int left, int right){
    if(left>=right)
        return;
    int idx = partition(nums, left, right);
    quick_sort(nums, left, idx-1);
    quick_sort(nums, idx+1, right);
}

int main(){
    vector<int> vec = { 9, -3, 5, 2, 6, 8, -6, 1, 3  };
    for(auto& v : vec)
        cout<<v<<" ";
    cout<<endl;
    quick_sort(vec, 0, vec.size()-1);
    for(auto& v : vec)
        cout<<v<<" ";
    cout<<endl;
    return 0;
}
