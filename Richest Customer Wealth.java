class Solution {
    public int maximumWealth(int[][] accounts) {
        int sum=0;
        for(int i=0 ;i<accounts.length;i++){
            int inSum=0;
            for(int j=0;j<accounts[0].length;j++){
                inSum+=accounts[i][j];


            }
            sum=Math.max(sum,inSum);
        }
        return sum;
    }
}
