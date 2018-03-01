class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        count1 = 0;
        count2 = 0;
        mymap = {'U': 1, 'D': -1, 'L': 1, 'R': -1}
        for c in moves:
            if c in ['L', 'R']:
                count2 = count2 + mymap[c]
            elif c in ['U', 'D']:
                count1 = count1 + mymap[c]
        if count1 == 0 and count2 == 0:
            return True
        return False
        
            
         
