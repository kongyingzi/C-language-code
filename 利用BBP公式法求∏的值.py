#利用BBP公式法计算∏的值
def Count(repeat_number):
    pi = 0
    for k in range(1,repeat_number + 1):
        pi += (1 / 16 ** k) * (4 / (8 * k + 1) - 2 / (8 * k + 4) - 1 / (8 * k + 5) - 1 / (8 * k + 6))
    print("∏的值{:.6f}".format(pi))
try:
    repeat_number = eval(input("请输入求和的次数："))
except:
    print("请正确输入一个整数！")
else:
    Count(repeat_number)
finally:
    print("操作成功结束！")
