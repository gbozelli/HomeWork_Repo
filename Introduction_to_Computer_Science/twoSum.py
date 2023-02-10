
def twoSum(self ,nums, target):
    list = []
    for i in range(0,len(nums)):
        for j in range(i+1,len(nums)):
            if(i!=j):
                sum = nums[i]+nums[j]
                if(sum==target):
                    list2 = []
                    list2.append(i)
                    list2.append(j)
                    list.append(list2)

    return list
x = twoSum(0,[1,2,3,4,5],6)
print(x)