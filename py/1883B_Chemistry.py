import sys
import collections
input = sys.stdin.readline

############ ---- Input Functions ---- ############
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))

sz = inp()
for _ in range(sz):
    n, k  = inlt()
    s = insr()
    c = collections.Counter(s)
    count_of_odd = 0
    for v in c.values():
        if v % 2 == 1:
            count_of_odd += 1
    # if count_of_odd == 0:
    #     print("YES")
    # elif k - (count_of_odd - 1) < 0:
    #     print("NO")
    # else:
    #     print("YES")
    if k - (count_of_odd - 1) < 0:
        print("NO")
    else:
        print("YES")
        
        
  