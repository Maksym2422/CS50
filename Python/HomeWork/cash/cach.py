from cs50 import get_float

# взяти правильне число
while True:
    x = get_float("Change owed: ") * 100
    if x >= 0:
        break

# кількість 25к
a = x // 25

# кількість 10к
b = x % 25 // 10

# кількість 5к
с = x % 25 % 10 // 5

# кількість 1к
d = x % 25 % 10 % 5

print(int(a + b + с + d))
