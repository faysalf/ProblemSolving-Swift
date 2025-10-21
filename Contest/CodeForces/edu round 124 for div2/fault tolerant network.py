tc_n = int(input())
 
def read_int_ln():
    return [int(x) for x in input().split()]
 
def c(x, y):
    return abs(x - y)
def mc(x, arr):
    return min(abs(x - y) for y in arr)
 
for tc in range(tc_n):
    n = int(input())
    a = read_int_ln()
    b = read_int_ln()
    c0 = c(a[0], b[0])
    c1 = c(a[-1], b[-1])
    cx01 = c(a[0], b[-1])
    cx10 = c(a[-1], b[0])
    mca0 = mc(a[0], b)
    mca1 = mc(a[-1], b)
    mcb0 = mc(b[0], a)
    mcb1 = mc(b[-1], a)
    res = min(c0 + c1, cx01 + cx10)
    res = min(res, c0 + mca1 + mcb1)
    res = min(res, c1 + mca0 + mcb0)
    res = min(res, cx01 + mca1 + mcb0)
    res = min(res, cx10 + mca0 + mcb1)
    res = min(res, mca0 + mca1 + mcb0 + mcb1)
    print(res)