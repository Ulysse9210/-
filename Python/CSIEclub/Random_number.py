import tkinter as tk
import random


def choose():
    if start.get() > end.get() or many.get() == 0:
        ans.set('參數錯誤')
    else:
        s = str()
        for i in range(many.get()):
            s += str(random.randint(start.get(), end.get())) + " "
        ans.set(s)

win = tk.Tk()
win.title('亂數取號碼')
win.geometry('300x200')

frame1 = tk.Frame(win)
frame2 = tk.Frame(win)
frame3 = tk.Frame(win)

label1 = tk.Label(frame1, text='號碼: ', font=('Arial', 15))
label2 = tk.Label(frame1, text='~', font=('Arial', 15))
label4 = tk.Label(frame2, text='要取 ', font=('Arial', 15))
label5 = tk.Label(frame2, text=' 個', font=('Arial', 15))

ans = tk.StringVar()
label3 = tk.Label(frame3, textvariable=ans, font=('Arial', 15))

start = tk.IntVar()
start.set(1)
entry1 = tk.Entry(frame1, textvariable=start, width=5, font=('Arial', 15))
end = tk.IntVar()
end.set(100)
entry2 = tk.Entry(frame1, textvariable=end, width=5, font=('Arial', 15))
many = tk.IntVar()
many.set(1)
entry3 = tk.Entry(frame2, textvariable=many, width=5, font=('Arial', 15))

button = tk.Button(win, text='開始', command=choose, font=('Arial', 15))

frame1.pack()
frame2.pack()
frame3.pack()
label1.pack(side=tk.LEFT)
entry1.pack(side=tk.LEFT)
label2.pack(side=tk.LEFT)
entry2.pack(side=tk.LEFT)
label4.pack(side=tk.LEFT)
entry3.pack(side=tk.LEFT)
label5.pack(side=tk.LEFT)
button.pack(side='bottom')
label3.pack(side='bottom')

win.mainloop()