class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        d = {}
        for char in magazine:
            if char not in d:
                d[char] = 1
            else:
                d[char] += 1

        for char in ransomNote:
            if char not in d:
                return False
            d[char] -= 1
        
        for i in d:
            if d[i] < 0:
                return False

        return True
