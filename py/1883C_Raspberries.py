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
    nums = inlt()
    # print(nums, n, k)
    if k == 3 or k == 5:
        min_op = 6
        for num in nums:
            if num % k == 0:
                print(0)
                break
            min_op = min(min_op, k - num % k)
        else:
            print(min_op)
    elif k == 2:
        for num in nums:
            if num % k == 0:
                print(0)
                break
        else:
            print(1)
    else:
        count_of_even = 0
        min_op = 6
        for num in nums:
            if num % 4 == 0:
                print(0)
                break
            if num % 2 == 0:
                count_of_even += 1
            min_op = min(min_op, 4 - num % 4)
        else:
            if count_of_even == 0:
                print(min(min_op,2))
            elif count_of_even == 1:
                print(min(min_op,1))
            else:
                print(0)
        
        
        
  