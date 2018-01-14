import math

def prim(x):
    if x < 2:
        return 0
    for i in range(2, x // 2):
        if x % i == 0:
            return 0
    return 1
def main():
    n = int(input("Give me the number:"))
    print(prim(n))

main()
