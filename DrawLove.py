from turtle import *
def DrawLove():
    fillcolor("red")
    begin_fill()
    left(140)
    fd(111.65)
    for i in range(200):
        right(1)
        fd(1)
    left(120)
    for i in range(200):
        right(1)
        fd(1)
    fd(111.65)
    end_fill()
def main():
    setup(600,600)
    pencolor("red")
    pensize(2)
    DrawLove()
    pencolor("red")
    penup()
    goto(-100,-50)
    seth(0)
    pendown()
    write("I love 空银子！",font = ("宋体",20,"italic"))
    hideturtle()
    done()
main()
