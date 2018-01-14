def quadrant(x, y):
    if x > 0 and y > 0: #cadranul 1
        print(1)
    elif x < 0 and y > 0: #cadranul 2
        print(2)
    elif x < 0 and y < 0: #cadranul 3
        print(3)
    else:   #cadranul 4
        print(4)

def main():
    a = int(input("Dati abscisa punctului:"))
    b = int(input("Dati ordonata punctului:"))
    print("Punctul se afla in cadranul: ")
    print(quadrant(a, b))

main()
