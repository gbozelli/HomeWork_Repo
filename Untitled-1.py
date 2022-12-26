
def canVisitAllRooms(self, rooms):
    keys = []
    test = len(rooms)
    count = 1
    for i in range(0,len(rooms[0])):
        keys.append(rooms[0][i])
    for i in range(1,len(rooms)):
        for j in range(0,len(keys)):
            if(keys[j]==i):
                count = count + 1
                for k in range(0,len(rooms[i])):
                    keys.append(rooms[i][k])
                break
    if(count==test):
        return True
    else:
        return False
rooms = [[2],[],[1]]
x=canVisitAllRooms(0,rooms)
print(x)