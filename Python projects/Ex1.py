import numpy as np
from sklearn.datasets import make_blobs
import matplotlib.pyplot as plt

A = np.array([1,2,3,4,5])
B = A * 2
print(B)
X, y = make_blobs(n_samples=100, n_features=2, centers=2, random_state=0)
y = y.reshape((y.shape[0], 1))

print('dimensions de X:', X.shape)
print('dimensions de y:', y.shape)

plt.scatter(X[:,0], X[:, 1], c=y, cmap='summer')
plt.show()

choice = int(input("What will you like to do ?\n"
                   "1.addition\n"
                   "2.subtaction\n"))

if choice ==1:
    number1 = int(input("Enter the first number: "))
    number2 = int(input("Enter the second number: "))
    print("The sum of the two numbers is: "+str(number1+number2))
elif choice ==2:
    number1 = int(input("Enter the first number: "))
    number2 = int(input("Enter the second number: "))
    print("The difference of the two numbers is: "+str(number1-number2))    
else:
    print("Invalid input")