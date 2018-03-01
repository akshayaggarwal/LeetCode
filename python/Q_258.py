class Solution:
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        while num>9:
            temp=0
            while num>0:
                temp = temp+num%10
                num = num//10
            num=temp
        return num
