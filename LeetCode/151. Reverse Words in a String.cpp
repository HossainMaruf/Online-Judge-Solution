/**
 * Algorithm
 * ---------
 * Reverse each words
 * Reverse entire text
 * Remove all the extra spaces from the beginning, trailing and middle
*/

class Solution {
public:
    void reverseString(string& st, int start, int end) {
		while(start < end) {
			swap(st[start], st[end]);
			start++; end--;
		}
	}
    
    string reverseWords(string s) {
        int start = 0, end = 0, len = s.length() - 1;
        while(end < len) {
            if(isspace(s[start]) && isspace(s[end])) {
                start++; end++;
            } else {
                while(s[end] != ' ' && s[end] != '\0') end++;
                reverseString(s, start, end-1); // reverse each words
                start = end;
            }
        }

        reverseString(s, 0, len); // reverse entire text

        // now the time to remove spaces

        string help;
        start = 0;
        // remove spaces from the beginning
        while(isspace(s[start])) start++;
        // remove spaces from the middle of words
        while(start <= len) {
            if(isspace(s[start]) && isspace(s[start+1])) start++;
		    else help.push_back(s[start++]);
        }
        // remove one trailing space if presents
        if(help.back() == ' ') help.pop_back();
        return help;
    }
};

/*
Medium
Time = O(n)
Space = O(1)
*/