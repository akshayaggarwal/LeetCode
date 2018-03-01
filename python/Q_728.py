class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        mylist =[]
        
        for i in range(left,right+1):
            num = i
            temp = i
            while num>0:
                digit=num%10
                if digit==0 or temp%digit!=0:
                    break
                num = num//10
            if num == 0:
                mylist.append(temp)
        return mylist
