
class Solution:
    def trafficSignal(self, timer: int) -> str:
        if(timer == 0):
            return "Green";
        elif(timer == 30):
            return "Orange";
        elif(timer<=90 and timer>30):
            return "Red";
            
        return "Invalid";