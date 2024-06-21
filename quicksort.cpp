#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

void quickselect(vector<int>& nums, int left, int right) {
  if(left >= right) return;
  int key = nums[left];
  int i = left + 1, j = right;
  while (true) {
      // 向右找到第一个小于等于 pivot 的元素位置
      while (i <= j && nums[i] <= key) ++i;
      // 向左找到第一个大于等于 pivot 的元素位置
      while(i <= j && nums[j] >= key ) --j;
      if(i >= j) break;
      swap(nums[i], nums[j]);
      // 交换两个元素的位置，使得左边的元素不大于key,右边的不小于key
  }
  // 使中轴元素处于有序的位置
  swap(nums[left], nums[j]);
  quickselect(nums, left, j - 1);
  quickselect(nums, j + 1, right);
}

int main(int argc, char *argv[]) {
  vector<int> nums(10);
  int a;
  srand((int)time(0));
  for(int i = 0; i < nums.size(); i++){
    nums[i] = rand() % 100;
  }
  for(int i : nums) cout << i << " ";
  cout <<endl;
  int n = nums.size();
  quickselect(nums, 0, n - 1);  
  for(int i : nums) cout << i << " ";
  cout <<endl;
  return 0;
}