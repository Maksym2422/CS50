from cs50 import get_int

while True:
    height = get_int("Height: ")
    if height >= 1 and height <= 8:
        break

for floor in range(height):
    for space in range(height - floor - 1):
        print(" ", end = "")
    for hash in range(floor + 1):
        print("#", end = "")
    print()
