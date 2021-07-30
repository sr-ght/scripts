import pandas

myDataset = {
    'ebooks': ["Dev Java", "Dev Python", "Dev C#"],
    'codes': [251, 548, 105]
}

myVar = pandas.DataFrame(myDataset)

print(myVar)