class Solution:
    def readBinaryWatch(self, num: int) -> List[str]:
        if num == 0: return ["0:00"]
        
        result = []
        
        for i in range(12):
            for j in range(60):
                if((bin(i)+bin(j)).count("1") == num):
                    h = str(int(bin(i), 2))
                    m = "0" + str(int(bin(j), 2)) if int(bin(j), 2) <= 9 else str(int(bin(j), 2))
                    result.append(h + ":" + m)
        
        return result
