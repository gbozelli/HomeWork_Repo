
def find_letter(string):
    uppers = ""
    for i in range(0,len(string)):
        if ord(string[i]) >= 65 and ord(string[i])<=90:
            uppers = uppers + string[i]
    return uppers
string = "SUS"
x = find_letter(string)
print(x)