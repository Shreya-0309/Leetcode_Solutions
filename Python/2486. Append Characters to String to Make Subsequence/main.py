class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        max_sub=0
        curr_max_sub=0
        n=min(len(s),len(t))
        j=0
        for i in range(n):
            if s[i]==t[j]:
                curr_max_sub+=1
                if max_sub<curr_max_sub:
                    max_sub=curr_max_sub
                print(j,len(t)-1)
                if j==len(t):
                    return 0
                j+=1
            else:
                curr_max_sub=0
        return len(t)-max_sub
