import numpy as np

#有A,B,C三個班級，每班皆有10個學生，期中考結束後，老師希望計算各班級每位學生的加權平均成績。
#請隨機產生3個班級的成績單,每班10人,共五科,權重為weights=[0.25,0.25,0.25,0.15,0.10]
#請算出班級加權平均成績，並以一個array輸出

a = np.random.randint(0, 101, (10, 5))
b = np.random.randint(0, 101, (10, 5))
c = np.random.randint(0, 101, (10, 5))
weights = [0.25, 0.25, 0.25, 0.15, 0.10]

a = np.dot(a, weights)
b = np.dot(b, weights)
c = np.dot(c, weights)

print(np.vstack([a, b, c]))