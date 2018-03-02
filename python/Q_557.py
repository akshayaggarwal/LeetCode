class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        mystr = s.split(' ')
        ret=''
        flag = 0
        for i in mystr:
            i=i[::-1]
            if flag==0:
                flag=1
            else:
                ret=ret+' '
            ret=ret+i
        return ret
         
