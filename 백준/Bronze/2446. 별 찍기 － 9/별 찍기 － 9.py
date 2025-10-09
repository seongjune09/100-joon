n = int(input())

# 위쪽 삼각형
for i in range(n):
    print(' ' * i + '*' * (2 * (n - i) - 1))

# 아래쪽 삼각형
for i in range(1, n):
    print(' ' * (n - i - 1) + '*' * (2 * i + 1))