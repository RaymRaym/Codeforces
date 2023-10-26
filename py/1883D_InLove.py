import sys
import collections
from sortedcontainers import SortedDict
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
dict_l = SortedDict()
dict_r = SortedDict()
for _ in range(sz):
    s = input()[:-1]
    chs = s.split(" ")
    op, cur_l, cur_r = chs[0], int(chs[1]), int(chs[2])
    if op == '+':
        if cur_l not in dict_l:
            dict_l[cur_l] = 0
        if cur_r not in dict_r:
            dict_r[cur_r] = 0
        dict_l[cur_l] += 1
        dict_r[cur_r] += 1
    else:
        dict_l[cur_l] -= 1
        if dict_l[cur_l] == 0:
            del dict_l[cur_l]
        dict_r[cur_r] -= 1
        if dict_r[cur_r] == 0:
            del dict_r[cur_r]
    # print(dict_l, dict_r)
    if len(dict_l) <= 1:
        print("NO")
    else:
        min_r = dict_r.peekitem(0)[0]
        max_l = dict_l.peekitem()[0]
        # print(min_r, max_l)
        if min_r < max_l:
            print("YES")
        else:
            print("NO")
        
# 4
# + 2 8
# + 6 8
# + 3 9
# + 8 10
        
        
  