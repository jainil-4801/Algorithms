# Python template 
from collections import defaultdict 
import sys
import math 

def get_array(): return list(map(int , sys.stdin.readline().strip().split()))
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def input(): return sys.stdin.readline().strip()


def func(l,r):
    return min(l,r)

def build(seg_ind,seg_st,seg_end,arr):
    if seg_st == seg_end:
        stree[seg_ind] = arr[seg_st]
        return 
    
    mid = (seg_st+seg_end)//2 
    build(seg_ind*2,seg_st,mid,arr)
    build(seg_ind*2+1,mid+1,seg_end,arr)

    stree[seg_ind] = func(stree[seg_ind*2],stree[seg_ind*2+1])

def query(si, qs, qe, ss, se):
    if se<qs or ss>qe:
        return math.inf 
    if ss>=qs and se<=qe:
        return stree[si]
    mid = (ss+se)//2
    l = query(2*si, qs, qe, ss, mid)
    r = query(2*si+1, qs, qe, mid+1, se)
    return func(l,r)

def update(seg_ind,seg_st,seg_end,qi,arr):
    if seg_end == seg_st:
        stree[seg_ind] = arr[seg_ind]
        return 
    mid = (seg_st+seg_end)//2 

    if(qi<=mid):
        update(2*seg_ind,seg_st,mid,qi,arr)
    else:
        update(2*seg_ind+1,mid,seg_end,qi,arr)
    stree[seg_ind] = f(stree[seg_ind]*2, stree[seg_ind]*2+1)


n = int(input())
c = int(input())
d = int(input())
    
a = get_array()
stree = [None]*(2*n)
build(1,0,n-1,a)
print(stree)

(l,r) = get_ints()

print(query(1,l-1,r-1,0,n-1))
