def power(base, exponent):
    if exponent == 0:
        return 1
    else:
        return base * power(base, exponent - 1)

def main():
    x = int(input("Dati baza:"))
    n = int(input("Dati exponentul:"))
    print(power(x, n))
main()
    
