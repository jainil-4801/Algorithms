import sys
def get_array(): return list(map(int , sys.stdin.readline().strip().split()))
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def input(): return sys.stdin.readline().strip()

for _ in range(int(input())):
    n=int(input())
    li=get_array()
    if(li.count(li[0])==len(li)):
        print(1)
        for i in range(n):
            print(1,end=" ")
        print()
    else:
        if(n%2==0):
            k=1
            print(2)
            for i in range(n):
                if(k==1):
                    print(1,end=" ")
                    k=-1
                else:
                    print(2,end=" ")
                    k=1
            print()
        else:
            # j=set(li)

            adj=0

            for i in range(1,n):
                if(li[i]==li[i-1]):
                    adj=1
                    break

            k=1
            if(adj==0):
                print(3)
                for i in range(n-1):
                    if(k==1):
                        print(1,end=" ")
                        k=-1
                    else:
                        print(2,end=" ")
                        k=1
                print(3,end=" ")
                print()
            else:
                print(2)
                car=0
                k=1
                print(1,end=" ")
                for i in range(1,n):
                    if(li[i]==li[i-1] and car==0):
                        car=1
                        print(k,end=" ")
                    else:
                        if(k==1):
                            k=2
                        else:
                            k=1
                        print(k,end=" ")
                print()
