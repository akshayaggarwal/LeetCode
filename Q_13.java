public class Solution {
    public int romanToInt(String s) {
        
        char arr[] = s.toCharArray();
        int i;
        int num = 0;
        int count = 0;
        
        for(i=0;i<arr.length;i++)
        {
            if(i+1<arr.length)
            {
                if(arr[i] == 'I' && arr[i+1] == 'V'){
                    count+=4;
                    i++;
                    continue;
                }
                else if(arr[i] == 'I' && arr[i+1] == 'X'){
                    count+=9;
                    i++;
                    continue;
                }
                else if(arr[i] == 'X' && arr[i+1] == 'L'){
                    count+=40;
                    i++;
                    continue;
                }
                else if(arr[i] == 'X' && arr[i+1] == 'C'){
                    count+=90;
                    i++;
                    continue;
                }
                else if(arr[i] == 'C' && arr[i+1] == 'D'){
                    count+=400;
                    i++;
                    continue;
                }
                else if(arr[i] == 'C' && arr[i+1] == 'M'){
                    count+=900;
                    i++;
                    continue;
                }
                
            }
            
            if(arr[i] == 'X')
                count += 10;
                
            if(arr[i] == 'I')
                count += 1;
                
            if(arr[i] == 'V')
                count += 5;
                
            if(arr[i] == 'L')
                count += 50;
            
            if(arr[i] == 'C')
                count += 100;
            
            if(arr[i] == 'D')
                count += 500;
                
            if(arr[i] == 'M')
                count += 1000;    
        }
        
        //System.out.println(count);
        return count;
    }
}
