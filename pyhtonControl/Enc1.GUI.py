#GUI Version 1.1.0 

###Version Info:###

###Basic window creation for future initialization configuration utility. For setup of: IP, Port, Baud of encoder wing.

from tkinter import *

#Window creation
root = Tk()

#Window setup
root.title("X-Wing Encoder Initialization")
root.geometry("375x125")

#Create frame/widget holder.
app = Frame(root)
app.grid()

#Create Labels
Label(text="Please enter the following information").grid(row=0, column=1)
Label(text="Server IP").grid(row=1, column=0)
Label(text="Port").grid(row=2, column=0)
Label(text="Baud Rate").grid(row=3, column=0)

e1=Entry(text="10.0.0.1")
e2=Entry(text="5100")
e3=Entry(text="9600")

e1.grid(row=1, column =1)
e2.grid(row=2, column =1)
e3.grid(row=3, column =1)

#Create Buttons

applybutton = Button(text="Apply").grid(row=4, column=3)
cancelbutton = Button(text="Cancel").grid(row=4, column=2)
acceptbutton = Button(text="OK!").grid(row=4, column=0)

#Begin event loop
root.mainloop()

