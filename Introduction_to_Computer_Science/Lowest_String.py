import string
def lowest_string(list):
    for i in range(1,len(list)):
        current_string = list[i].lower()
        j = i-1
        while(current_string<list[j].lower() and j>=0):
            list[j+1]=list[j]
            j = j-1
        list[j+1]=current_string
    print(list[0])
list = ["ana","maria","José","Valdemar"]
lowest_string(list)
