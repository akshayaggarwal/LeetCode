class Solution {
    	
	public List<Integer> getRow(int rowIndex){
        
        List<Integer> list = new ArrayList<Integer>();
        double out=1;
        
		for (int i = 0; i<rowIndex+1; i++){
                list.add((int)out);
                out = out*((double)rowIndex-(double)i)/((double)i+1);       
		}
		return list;
		
	}
}
