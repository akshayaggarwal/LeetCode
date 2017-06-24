public class Solution {
    public String[] findWords(String[] words) {
        
 	

		String str1 = "qwertyuiop";
		String str2 = "asdfghjkl";
		String str3 = "zxcvbnm";
		String temp;

		String stor[] = new String[(words.length)];

		int f1,f2,f3;

		int i,j = 0,z = 0;

		while(j<words.length)
		{

		//System.out.println("Hello");
		temp = words[j];
		
		temp = temp.toLowerCase();

		char arr[] = temp.toCharArray();

		f1 = f2 = f3 = 0;
		
		for(i=0;i<(words[j].length());i++)
		{
			if(str1.indexOf(arr[i])<0)
				f1 = -1;

			if(str2.indexOf(arr[i])<0)
				f2 = -1;

			if(str3.indexOf(arr[i])<0)
				f3 = -1;

		}

		if(f1==0 || f2==0 || f3==0){
			stor[z]=(words[j]);
			z++;
			}
		
		j++;
		}

        String ret[] = new String[z];
        
        System.out.println(z);
        
        for(i=0;i<z;i++){
            ret[i] = stor[i];
            System.out.println(stor[i]);
        }

        return ret;
//		int i = str1.indexOf('z');
//		System.out.println(i);
        
        
    }
}
