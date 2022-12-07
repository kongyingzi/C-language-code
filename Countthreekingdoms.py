#Countthreekingdoms.py
import jieba

excludes = {"将军","却说","荆州","二人","不可","不能","如此","商议",\
            "如何","主公","军士","左右","军马","引兵","次日","大喜",\
            "天下","于是","今日","不敢","魏兵","陛下","一人","都督",\
            "人马","不知","汉中","只见","众将","后主","蜀兵","上马",\
            "大叫","太守","此人","夫人","先主","后人","背后","城中",\
            "天子","一面","何不"}
txt = open("threekingdoms.txt","r",encoding = 'utf-8').read()
Words = jieba.lcut(txt)
Count={}
for word in Words:
    if len(word) == 1:
        continue
    elif word in ["诸葛亮","孔明曰"]:
        rword = "孔明"
    elif word in ["关公","云长"]:
        rword = "关羽"
    elif word in ["玄德","玄德曰"]:
        rword = "刘备"
    elif word in ["孟德","丞相"]:
        rword = "曹操"
    else:
        rword = word
    Count[rword] = Count.get(rword,0) + 1
for word in excludes:
    del Count[word]
ls = list(Count.items())
ls.sort(key = lambda element:element[1], reverse = True)
for i in range(15):
    name , number = ls[i]
    print("{0:<5}{1:>5}".format(name,number))
    
