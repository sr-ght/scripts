import pandas as pd

a = [1, 7, 2]

# Modificando o Index na matriz
myVar = pd.Series(a, index = ['x', 'y', 'z'])

print(myVar)