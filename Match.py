from random import *
def main():
    printInfo()
    try:
        A,B,n= getinput()
    except NameError:
        print("请输入数值！")
    else:
        if (A > 0 and A < 1) and (B > 0 and B < 1) and n > 0:
            winA,winB = simNGames(A,B,n)
            printSummary(winA,winB,n)
        else:
            print("请输入两个在0到1范围的数作为A,B和一个大于0的数作为n！")
def printInfo():
    print("这是一个模拟体育竞技的程序")
    print("该程序获取选手A、选手B的能力值（从0到1）并输出A、B选手的胜利局数和胜率")
def getinput():
    A = eval(input("请输入选手A的能力值(从0到1):"))
    B = eval(input("请输入选手B的能力值(从0到1):"))
    n = eval(input("请输入进行的局数(大于0):"))
    return A,B,n
def printSummary(winA,winB,n):
    print("竞技开始，共模拟了{}局比赛".format(n))
    print("选手A胜了{}局，胜率为{:0.1%}".format(winA,winA / n))
    print("选手B胜了{}局，胜率为{:0.1%}".format(winB,winB / n))
def simNGames(A,B,n):
    winA = winB = 0
    for i in range(n):
        scoreA , scoreB = simOneGame(A,B)
        if scoreA < scoreB:
            winB += 1
        else:
            winA += 1
    return winA,winB
def simOneGame(A,B):
    scoreA = scoreB =0
    serving = 'A'
    while gameOver(scoreA,scoreB):
        if serving == 'A':
            if random() < A:
                scoreA += 1
            else:
                serving = 'B'
        else:
            if random() < B:
                scoreB += 1
            else:
                serving = 'A'
    return scoreA,scoreB
def gameOver(scoreA,scoreB):
    return scoreA != 15 and scoreB != 15
main()
input()
