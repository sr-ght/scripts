import pandas as pd

data = {
    'ebooks': ["Dev Java", "Dev Python", "Dev C#"],
    'tools': ["Android Studio", "PyCharm", "Visual Studio"]
}

df = pd.DataFrame(data)

print(df.loc[0])
print(df.loc[[1, 2]])