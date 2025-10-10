from datetime import date

y1, m1, d1 = map(int, input().split())
y2, m2, d2 = map(int, input().split())

today = date(y1, m1, d1)
target = date(y2, m2, d2)

if y2 - y1 > 1000 or (y2 - y1 == 1000 and (m2 > m1 or (m2 == m1 and d2 >= d1))):
    print("gg")
else:
    diff = (target - today).days
    print(f"D-{diff}")