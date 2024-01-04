#include<iostream>
#include<vector>
using std::vector;

int findPeakElement(vector<int>& nums) {
	int left = 0;
	int right = nums.size() - 1;
	// 二分法
		while (left < right) {
			int mid = (left + right) / 2;
			// 右边是往下，不一定有坡峰
			if (nums[mid] > nums[mid + 1])
				right = mid;
			// 右边是往上，一定能找到波峰
			else
				left = mid + 1;//修改此行代码即可
		}
	// 其中一个波峰
		return right;
}

//先编写一个调试函数(已提前编写好)
//原因：程序陷入了死循环
void testFindPeakElement() {
	vector<int> test1 = { 1, 2, 3, 1 };
	vector<int> test2 = { 1, 2, 1, 3, 5, 6, 4 };
	vector<int> test3 = { 1 };

	std::cout << "Peak index in [1, 2, 3, 1]: " << findPeakElement(test1) << std::endl;
	std::cout << "Peak index in [1, 2, 1, 3, 5, 6, 4]: " << findPeakElement(test2) << std::endl;
	std::cout << "Peak index in [1]: " << findPeakElement(test3) << std::endl;
}

int main() {
	testFindPeakElement();
	return 0;
}
