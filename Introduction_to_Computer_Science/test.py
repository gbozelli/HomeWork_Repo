class Solution(object):
    def canCompleteCircuit(self, gas,cost):
        if sum(gas) < sum(cost):
            return -1
        g, position, len_s = 0, 0, len(gas)
        for i in range(len_s):
            g = g+ gas[i] - cost[i]
            if g < 0:
                position = i + 1
                g = 0 
        return position