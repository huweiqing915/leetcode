#include "apue.h"

using namespace std;

int lengthOfLongestSubstring(string s)
{
	map<char, int> m;
	int maxLen = 0;
	int lastRepeatPos = -1;
	for (int i = 0; i < s.size(); i++) {
		if (m.find(s[i]) != m.end() && lastRepeatPos < m[s[i]]) {
			lastRepeatPos = m[s[i]];
		}
		if (i - lastRepeatPos > maxLen) {
			maxLen = i - lastRepeatPos;
		}
		m[s[i]] = i;
	}
	return maxLen;
}

int main(int argc, char *argv[])
{
	string s = "abcabcbb";
//cout << s << " : " << lengthOfLongestSubstring(s) << endl;
	s = "bbbbb";
	cout << s << " : " << lengthOfLongestSubstring(s) << endl;
	return 0;
}
