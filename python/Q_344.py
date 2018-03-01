class Solution:
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        ch=""
        for i in range(len(s)-1,-1,-1):
            ch=ch+s[i]
        return ch
