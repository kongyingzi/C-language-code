#TempConvert.py

Temp = input("请用户输入一个温度值(例如:32C):")
if Temp[-1] in ['C','c']:
    f = (float(Temp[0:-1]) * 9 / 5) + 32
    print("转化后的华氏温度为: %.2fF"%f)
elif Temp[-1] in ['F','f']:
    c = (float(Temp[0:-1]) - 32) * 5 / 9
    print("转化后的摄氏温度为: %.2fC"%c)
else:
    print("输入错误")
input()
