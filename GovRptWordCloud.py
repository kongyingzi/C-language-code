#GovRptWordCloud.py
import jieba
import wordcloud
import matplotlib.image as mpimg

f  = open("关于实施乡村振兴战略的意见.txt","r",encoding = "utf-8")
txt = f.read()
f.close()
txt = jieba.lcut(txt)
txt = " ".join(txt)
excludes = {"的","吧","和","对","以","农村"}
mask = mpimg.imread("chinamap.jpg")
w = wordcloud.WordCloud(\
    width = 1000,height = 700,\
    background_color = "white",\
    font_path = "msyh.ttc",
    max_words = 100,
    mask = mask,
    stopwords = excludes
    )
w.generate(txt)
w.to_file("grwordcloudm.png")
