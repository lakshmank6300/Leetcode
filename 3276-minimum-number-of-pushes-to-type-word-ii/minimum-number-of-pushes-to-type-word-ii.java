class Solution {
    public int minimumPushes(String word) {

        Integer arr[] = new Integer[26];
        Arrays.fill(arr,0);

        for(int i = 0; i < word.length(); i++){
            arr[ word.charAt(i) - 'a' ] += 1;
        }

        Arrays.sort(arr, Collections.reverseOrder());
        
        int result = 0;

        for(int i = 0; i < 26; i++){
            if(arr[i] == 0)
                return result;

            result += ((i/8) + 1) * arr[i];
        }

        return result;
    }
}