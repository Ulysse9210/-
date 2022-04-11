#請利用python將這50筆數據做線性迴歸。
#2、  計算出這條迴歸線的斜率

import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
import pandas as pd


x = np.linspace(0, 10, 50)
y = np.array(np.random.uniform(0, 10, 50))
x = x.reshape(50, 1)

regr = LinearRegression()
regr.fit(x, y)

plt.scatter(x, y)
plt.plot(x, regr.predict(x), 'r')
plt.show()

m = (regr.predict(x)[49]-regr.predict(x)[0])/(x[49]-x[0])[0]
print(m)
