import math

for i in range(2019, 2100):
    thing = math.sqrt(int(str(i)[:2]) * int(str(i)[2:]))
    if round(thing) == thing:
        print(i)
