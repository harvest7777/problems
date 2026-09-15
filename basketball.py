s = input()
prev = ""
points = {"A": 0, "B": 0}
for ch in s:
    if ch.isdigit():
        points[prev] += int(ch)
    else:
        prev = ch
    if abs(points["A"] - points["B"]) >= 2 and (points["A"] >= 11 or points["B"] >= 11):
        ans = "A" if points["A"] > points["B"] else "B"
        print(ans)
        
