import pandas as pd

tools = {"1": "Android Studio", "2": "PyCharm", "3": "Visual Studio"}

myVar = pd.Series(tools, index = ["1", "2"])

print(myVar)