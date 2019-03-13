from math import log
if __name__ == '__main__':
    n = int(input())
    temp = 0
    temp2 = 0
    for i in range(n+1)[1:]:
        temp2 += (int(log(i,10)+1))

    for i in range(n+1)[1:] :
        temp += i*(10**(temp2-(int(log(i,10)+1))))
        temp2 -= (int(log(i,10)+1))
    print(temp)
