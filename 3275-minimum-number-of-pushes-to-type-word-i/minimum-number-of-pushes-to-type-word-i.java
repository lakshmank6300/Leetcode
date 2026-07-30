class Solution {
    public int minimumPushes(String word) {
        int n = word.length();
            System.out.println(n/16);
        if(n/24 >= 1){
            return 48 + (n % 8) * 4;
        }
        if( n/16 >= 1){
            return 24 + (n % 8) * 3;
        }
        else if( n/8 >= 1)
            return 8 + (n % 8) * 2;
        else 
            return n % 8;
    }
}