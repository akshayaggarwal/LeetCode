class Solution:
    def anagramMappings(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        mymap = {}
        mylist=[]
        j=0
        for i in B:
            mymap[i]=j
            j=j+1
        for i in A:
            mylist.append(mymap[i]) 
        return mylist
