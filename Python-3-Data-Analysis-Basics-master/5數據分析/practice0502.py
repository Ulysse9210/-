#請實作五乘五矩陣的矩陣加法函式。(輸入任意兩個五乘五矩陣做相加的結果)
#請實作五乘五矩陣的矩陣乘法函式。(輸入任意兩個五乘五矩陣做相乘的結果)

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

df1 = pd.DataFrame(np.random.randint(0, 10, (5, 5)))
df2 = pd.DataFrame(np.random.randint(0, 10, (5, 5)))

print(df1 + df2)
print(df1 * df2)