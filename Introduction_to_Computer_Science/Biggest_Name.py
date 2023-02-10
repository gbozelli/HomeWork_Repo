
def Biggest_Name(list):
    for i in range(1, len(list)):
        if(i<len(list)):
            current_name = list[i]
            j = i-1
            while(len(list[j])<len(current_name)):
                list[j] = current_name
                j = j-1
    return list[0]

list = ["Kenny", "Lucas", "Vitor", "Gabriel"]
name = Biggest_Name(list)
print(name)