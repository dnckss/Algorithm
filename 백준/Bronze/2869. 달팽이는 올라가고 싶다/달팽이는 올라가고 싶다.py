import sys

a, b, v = map(int, sys.stdin.readline().split())

f = a - b  

cnt = (v - a) // f  
if (v - a) % f != 0:  
    cnt += 1

print(cnt + 1)  