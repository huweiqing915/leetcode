#include "apue.h"

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) 
	{
		map<int, int> m;
		vector<int> result;
		for(int i = 0; i < numbers.size(); i++)
		{
			if (m.find(numbers[i]) == m.end())
			{
				cout << "---if m.find--------" << endl;
				cout << target - numbers[i] << " i:" << i << endl;
				m[target - numbers[i]] = i;
			}
			else 
			{
				cout << "----else-------" << endl;
				cout << m[numbers[i]] + 1 << "  i+1:" << i+1 <<endl;
				result.push_back(m[numbers[i]]+1);
				result.push_back(i+1);
				break;
			}
		}
		return result;
	}
};

int main()
{
	Solution sol;
	vector<int> input;
	vector<int> output;
	int target = 9;
	input.push_back(2);
	input.push_back(7);
	input.push_back(11);
	input.push_back(15);
	cout << "-----input---" << endl; 
	for(int i = 0; i < input.size(); i++)
	{
		cout << input[i] << " ";
	}
	cout << endl;
	output = sol.twoSum(input, 9);
	cout << "-----result-----" << endl;
	for(int i = 0; i < output.size(); i++)
	{
		cout << output[i] << " " << endl;
	}
	return 0;
}
