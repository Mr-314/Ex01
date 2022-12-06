A = list(map(int, input().split()))

count = 1
for h in range(4):
    ans = [0] * len(A)
    B = [0] * 10
    for i in range(0, len(A)):
        count_2 = A[i] // count
        B[count_2 % 10] += 1

    for j in range(1, 10):
        B[j] += B[j-1]

    k = len(A) - 1
    while k >= 0:
        count_2 = A[k] // count
        ans[B[count_2 % 10] -1] = A[k]
        B[count_2 % 10] -= 1
        k -= 1  
        
    for l in range(0, len(A)):
        A[l] = ans[l]
    #print(A)
    count *= 10

for k in ans:
    print(k, end=" ")

print()