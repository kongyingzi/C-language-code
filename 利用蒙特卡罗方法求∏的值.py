#利用蒙特卡罗方法求∏的值.py
from random import random
import time
def Count(repeat_num):
    start = time.perf_counter()
    number = 0
    for i in range(1,repeat_num + 1):
        x,y = random(),random()
        if (x ** 2 + y ** 2) <= 1:
            number += 1
    pi = 4 * (number / repeat_num)
    end = time.perf_counter()
    print("∏的值为：{:.6f}".format(pi))
    print("程序运行时间为:{:.2f}".format(end - start))
try:
    repeat_num = eval(input("请输入撒点个数："))
except:
    print("请输入一个整数！")
else:
    Count(repeat_num)
finally:
    print("操作成功结束！")
