import tkinter as tk
import tkinter.ttk as ttk


def insert(num):
    ans.set(ans.get() + num)

def clear():
    ans.set('')

def equ():
    ans.set(eval(ans.get()))

def back():
    ans.set(ans.get()[:-1])


win = tk.Tk()

win.title("計算機")

win.geometry("500x400")

win.config(bg='#000000')


f = ("Arial", 20)


# Button

btn_clear = tk.Button(win, text='C', font=f, bg='gray', fg='black', command=lambda:clear())

btn_back = tk.Button(win, text='<-', font=f, bg='gray', fg='black', command=lambda:back())

btn_div = tk.Button(win, text='/', font=f, bg='gray', fg='black', command=lambda:insert('/'))

btn_7 = tk.Button(win, text='7', font=f, bg='black', fg='black', command=lambda:insert('7'))

btn_8 = tk.Button(win, text='8', font=f, bg='black', fg='black', command=lambda:insert('8'))

btn_9 = tk.Button(win, text='9', font=f, bg='black', fg='black', command=lambda:insert('9'))

btn_time = tk.Button(win, text='*', font=f, bg='gray', fg='black', command=lambda:insert('*'))

btn_4 = tk.Button(win, text='4', font=f, bg='black', fg='black', command=lambda:insert('4'))

btn_5 = tk.Button(win, text='5', font=f, bg='black', fg='black', command=lambda:insert('5'))

btn_6 = tk.Button(win, text='6', font=f, bg='black', fg='black', command=lambda:insert('6'))

btn_minus = tk.Button(win, text='-', font=f, bg='gray', fg='black', command=lambda:insert('-'))

btn_1 = tk.Button(win, text='1', font=f, bg='black', fg='black', command=lambda:insert('1'))

btn_2 = tk.Button(win, text='2', font=f, bg='black', fg='black', command=lambda:insert('2'))

btn_3 = tk.Button(win, text='3', font=f, bg='black', fg='black', command=lambda:insert('3'))

btn_add = tk.Button(win, text='+', font=f, bg='gray', fg='black', command=lambda:insert('+'))

btn_0 = tk.Button(win, text='0', font=f, bg='black', fg='black', command=lambda:insert('0'))

btn_point = tk.Button(win, text='.', font=f, bg='black', fg='black', command=lambda:insert('.'))

btn_equ = tk.Button(win, text='=', font=f, bg='gray', fg='black', command=lambda:equ())



# Label

ans = tk.StringVar()

entry_ans = ttk.Entry(win, textvariable=ans, width=4, font=("Arial", 22))



# put in

win.rowconfigure((0, 1, 2, 3, 4, 5), weight=1)

win.columnconfigure((0, 1, 2, 3), weight=1)



entry_ans.grid(row=0, column=0, columnspan=4, sticky="EWNS")

btn_clear.grid(row=1, column=0, columnspan=2, sticky="EWNS", padx=1, pady=1)

btn_back.grid(row=1, column=2, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_div.grid(row=1, column=3, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_7.grid(row=2, column=0, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_8.grid(row=2, column=1, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_9.grid(row=2, column=2, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_time.grid(row=2, column=3, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_4.grid(row=3, column=0, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_5.grid(row=3, column=1, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_6.grid(row=3, column=2, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_minus.grid(row=3, column=3, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_1.grid(row=4, column=0, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_2.grid(row=4, column=1, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_3.grid(row=4, column=2, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_add.grid(row=4, column=3, rowspan=2, sticky="EWNS", padx=1, pady=1)

btn_0.grid(row=5, column=0, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_point.grid(row=5, column=1, columnspan=1, sticky="EWNS", padx=1, pady=1)

btn_equ.grid(row=5, column=2, columnspan=1, sticky="EWNS", padx=1, pady=1)



win.mainloop()