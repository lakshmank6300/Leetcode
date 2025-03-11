class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        i, j, ans = 0,0,0
        n = len(s)
        characters = {'a':0,'b':0,'c':0}
        while j < n:
            characters[s[j]]+=1
            if all(characters.values()):
                ans += n-j
                characters[s[i]]-=1
                i+=1
            while(all(characters.values()) and i < n):
                characters[s[i]]-=1
                ans += n-j
                i+=1
            j+=1

        return ans