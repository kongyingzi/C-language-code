#DrawSnowFlake.py
import turtle
def DrawSnowFlake(length ,n):
    if(n == 0):
        turtle.fd(length)
    else:
        for i in [0,60,-120,60]:
            turtle.left(i)
            DrawSnowFlake(length / 3,n - 1)
def main():
    turtle.setup(1200,1200,0,0)
    turtle.penup()
    turtle.goto(-300,100)
    turtle.pendown()
    turtle.seth(0)
    turtle.pensize(5)
    turtle.pencolor("red")
    DrawSnowFlake(400,3)
    turtle.right(120)
    turtle.pencolor("green")
    DrawSnowFlake(400,3)
    turtle.right(120)
    turtle.pencolor("yellow")
    DrawSnowFlake(400,3)
    turtle.hideturtle()
    turtle.done()
main()
