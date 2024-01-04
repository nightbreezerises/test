#include"Solution.h"

int main() 
{
	Solution sol;

	std::string a = "ababc", b = "abcababcabc";
	int minOps = sol.minCharacters(a, b);
	std::cout << "Minimum operations: " << minOps << std::endl;

	return 0;
}