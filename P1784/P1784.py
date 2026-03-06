class Solution(object):
    def checkOnesSegment(self, s):
        numB = "1"
        for i in s:
            if numB == "0" and i == "1":
                return False
            numB = i

        return True
        
