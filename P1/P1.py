def twoSum(array,target):
    seen = {}
    for num in array:
        if str(target-num) in seen:
            ans = [seen[str(target-num)],array.index(num)]
            return ans 
        else:
            seen[str(num)] = array.index(num)


print(twoSum([-5,-1,10],-6))