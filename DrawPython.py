import turtle

def DrawPython(rad,angle,len):
    for i in range(len):
        turtle.circle(rad,angle)
        turtle.circle(-rad,angle)
    turtle.circle(rad,angle/2)
    turtle.fd(rad)
    turtle.circle(rad/2,180)
    turtle.fd(rad)
        
        
def main():
    turtle.setup(1300,800,0,0)
    pythonsize = 30
    turtle.pensize(pythonsize)
    turtle.pencolor("black")
    turtle.penup()
    turtle.fd(-200)
    turtle.pendown()
    turtle.seth(-40)
    DrawPython(40,80,5)

main()
