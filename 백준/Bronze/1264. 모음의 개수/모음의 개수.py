while True:
    s = input()
    if s == "#":
        break
    count = 0
    for ch in s:
        if ch.lower() in "aeiou":
            count += 1
    print(count)