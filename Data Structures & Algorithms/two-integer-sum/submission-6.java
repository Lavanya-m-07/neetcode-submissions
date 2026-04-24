class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> myMapping = new HashMap<Integer, Integer>();

        int [] arr = new int[2];

        for(int i = 0; i < nums.length; i++){
            int tempValue = target - nums[i];
            
            System.out.println("Check temp : " + tempValue);

            if(!myMapping.containsKey(tempValue)){
                myMapping.put(nums[i], i);
                System.out.println("Check key not : "  + tempValue);
            }
            else{
                System.out.println("Check key exist : " + tempValue);
                arr[0] = myMapping.get(tempValue);
                arr[1] = i;
                return arr;
            }
        }
        return arr;
    }
}
