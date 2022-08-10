import random as r
print("========== Menu ==========")
print("Choose an option for the length of the message:")
print("A. 1")
print("B. 2")
print("C. 5")
print("D. 10")
print("E. Infinity")
print("F. Custom")
opr = input()
leng = None
if (opr == "A"):
    leng = 1
elif (opr == "B"):
    leng = 2
elif (opr == "C"):
    leng = 5
elif (opr == "D"):
    leng = 10
elif (opr == "E"):
    leng = -1
elif (opr == "F"):
    leng = int(input())
if (leng == -1):
    while True:
        print(chr(r.randint(33, 126)), end = "")
else:
    for i in range(leng):
        print(chr(r.randint(33, 126)), end = "")
