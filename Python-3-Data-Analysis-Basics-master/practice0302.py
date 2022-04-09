import numpy as np
import matplotlib.pyplot as plt

#向日葵班有40位學生，學期結束後，老師希望知道班上的期末成績相關資訊，作為下個學期教學的參考
#請隨機產生40筆0~100的數字作為向日葵班的成績分布，接著列出最高分、最低分、及格人數(>=60)、平均數、標準差
#並且以10分作為一個區間，使用圖表畫出各個區間的人數

grades = np.random.randint(0, 101, 40)
print("最高：", np.max(grades))
print("最低：", np.min(grades))
print("及格數：", grades[grades >= 60].size)
print("平均：", np.average(grades))
print("標準差：", np.std(grades, ddof = 0))
plt.hist(grades, bins=10)
plt.show()