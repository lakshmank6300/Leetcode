class Solution {
    public int possibleStringCount(String word) {
        int numberOfWords = 1 , cnt = 0;
        for(int i = 0; i < word.length() - 1; i++){
            if(word.charAt(i)==word.charAt(i+1)){
                cnt++;
            }
            else{
                numberOfWords+=cnt;
                cnt = 0;
            }
        }
        numberOfWords += cnt;
        return numberOfWords;
    }
}