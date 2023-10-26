# s = input()
# print(s.split(" "))
# op, cur_l, cur_r = s.split(" ")
# print(op, cur_l, cur_r)
from sortedcontainers import SortedDict

dict = SortedDict()
dict[0] = 0
dict[1] = 0
dict[-1] = 1
print(dict.peekitem(-1))
print(dict.peekitem(0))
del dict[1]
print(dict.peekitem(-1))
print(dict.peekitem(0))