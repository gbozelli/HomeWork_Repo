
def findMinArrowShots(points) -> int:
    points = sorted(points)
    p = points[0][0]
    q = points[0][1]
    ans = 0
    for i,j in points:
        if p <= i <= q or p <= j <= q:
            p = max(i,p)
            q = min(j,q)
        else:
            ans += 1
            p = i
            q = j
    return ans + 1
points = [[9,12],[1,10],[4,11],[8,12],[3,9],[6,9],[6,7]]
print(findMinArrowShots(points))

# This code is contributed by AR_Gaurav
