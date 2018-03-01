import hashlib
class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        count=0
        mymap={}
        for c in J:
            mymap[c]=c
        for c in S:
            if c in mymap
                count=count+1
        return count
