class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        final = self.ToNum(a) + self.ToNum(b)

        return self.ToStr(final)
    
    def ToNum(self, string):
        num = 0
        
        if string == "0": return 0
        
        for i in range(len(string)):
            if string[i] == '1': num = num + pow(2, len(string)-i-1)
        
        return num

    def ToStr(self, num):
        if num == 0: return "0"
        
        result = ""
         
        while num >= 1:
            result = str(num % 2) + result
            num = num // 2
        
        return result
