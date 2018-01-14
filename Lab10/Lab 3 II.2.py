
def fibonaci(n):
    if n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        return fibonaci(n - 1) + fibonaci(n - 2)

def fibonaci1(n):
    a = 1
    b = 1
    if n == 1 or n == 2:
        print(a)
    else:
        i = 3
        c = 2
        while i <= n:
            c = a + b
            a = b
            b = c
            i = i + 1
    return c
            

def main():
    n = int(input("n = "))
    print(fibonaci(n))
    #print(fibonaci1(n))
main()
