import math
def CountMedian(ls1,num):
    ls2 = sorted(ls1)
    if num % 2 == 0:
        median = (ls2[num // 2] + ls2[num // 2 - 1]) / 2
    else:
        median = ls2[num // 2]

    return median
def CountVariance(ls,average,num):
    n = 0;
    for i in range(num):
        n += (ls[i] - average) ** 2
    variance = math.sqrt(n / (num - 1))

    return variance
def CountSum(ls,num):
    sum = 0
    for i in range(num):
        sum += ls[i]

    return sum
def GetNum():
    list1 = []
    iNumStr = input("请输入数字(回车退出)：")
    while iNumStr != "":
        list1.append(eval(iNumStr))
        iNumStr = input("请输入数字(回车退出)：")
    return list1
def main():
    try:
        numlist = GetNum()
        numletter = len(numlist)
        sumletter = CountSum(numlist,numletter)
        average = sumletter / numletter
        variance = CountVariance(numlist,average,numletter)
        median = CountMedian(numlist,numletter)
    except Exception as e:
        print("错误为{}".format(e))
        print("请输入正确数量的数字！")
    else:
        print("这个列表有{}个数字\n它总和为:{:.1f}\n平均值为:{}\n方差为:{:.2f}\n中位数为:{:.2f}\n"\
              .format(numletter,sumletter,average,variance,median))
main()
        
