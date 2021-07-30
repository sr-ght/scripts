import pandas as pd

data = {
    'ebooks': ["Dev Java", "Dev Python", "Dev C#"],
    'tools': ["Android Studio", "PyCharm", "Visual Studio"]
}

myVar = pd.DataFrame(data)

print(myVar)