import os

with open("testdata.txt","w") as f:
    for i in range(0, 100):
        f.write(str(i)+'\n')
