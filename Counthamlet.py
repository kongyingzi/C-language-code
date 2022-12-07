#CountHamlet.py
excludes = {"the","and","of","you","a","i","my","in","to","it","that",\
            "is","not","his","this","but","with","for","your","me","be",\
            "as","he","what","him","so","have","will","do","no","we","are",\
            "on","all","our","by","or","shall","if","o"}


def GetTxt():
    txt = open("hamlet.txt","r").read()
    txt = txt.lower()
    for ch in '!"#$%&()*+,-./:;<=>?@[\\]^_‘{|}~':
        txt.replace(ch," ")
    return txt

Halmat = GetTxt()
Words = Halmat.split()
Count = {}
for word in Words:
    Count[word] = Count.get(word,0) + 1
for word in excludes:
    del Count[word]
ls = list(Count.items())
ls.sort(key = lambda element:element[1], reverse = True)
for i in range(10):
    word, number = ls[i]
    print("{0:<10}{1:>5}".format(word,number))
    
