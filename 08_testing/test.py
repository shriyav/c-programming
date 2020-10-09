import os
import sys

#with open('test.txt', 'w') as f:
    #sys.stdout=f
for i in range(1000):
    p=os.system("./isPrime-broken2 " + str(i))
    #print(p)

    
