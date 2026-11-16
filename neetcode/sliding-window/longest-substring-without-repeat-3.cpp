/*
### Longest substring without repeating characters 

Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> map;

        int max_length =0;

        int start=0,length;

        for(int i=0;i<s.size();i++)
        {
            map[s[i]]++;

            while(map[s[i]]>1 && start<=i)
            {
                map[s[start]]--;

                if(map[s[start]]<=0)
                    map.erase(s[start]);
                start++;
            }
            length = map.size();
            max_length = max(length,max_length);
        }

        return  max_length;

    }
};