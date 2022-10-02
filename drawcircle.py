import turtle

def Drawcircle(radius):
    color = ['red','black','yellow','pink','blue','purple','orange','green','red']
    for i in range(9):
        turtle.pencolor(color[i])
        turtle.circle((radius+i*10),360)
        turtle.right(90)
        turtle.penup()
        turtle.fd(10)
        turtle.pendown()
        turtle.left(90)
            
def main():
    turtle.setup(1300,800,0,0)
    turtle.pensize(5)
    Drawcircle(30)
    
main()
