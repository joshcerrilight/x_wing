#GUI Version 1.1.0 

###Version Info:###

###Basic window creation for future initialization configuration utility. For setup of: IP, Port, Baud of encoder wing.

from tkinter import *

#Window creation
root = Tk()

#Window setup
root.title("X-Wing Encoder Initialization")
root.geometry("300x50")

#Create frame/widget holder.
app = Frame(root)
app.grid()
label = Label(app, text="Encoder Configuration Utility")
label.grid()

#Begin event loop
root.mainloop()

