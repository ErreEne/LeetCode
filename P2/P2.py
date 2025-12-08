l1 = [1,2,3,4,5]
l2 = [1,2,3,4]
def AddTwoNumbers(l1, l2):
    num = 0
    num2 = 0
    result = []
    while(len(l1)!=0):
        num*=10
        num += l1[-1]
        l1.remove(l1[-1])

    while(len(l2)!=0):
        num2*=10
        num2 += l2[-1]
        l2.remove(l2[-1])
    num2+=num

    while num2>=0:
        result.append(num2%10)
        num2=int(num2/10)
        if num2==0:
            num2-=1
    print(result)

AddTwoNumbers(l1,l2) 

