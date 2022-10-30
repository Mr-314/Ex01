def MergeSort(A):
    if len(A) <= 1:
        return A
    
    middle = len(A) // 2
    L = A[:middle]
    R = A[middle:]

    #分解
    L = MergeSort(L)
    R = MergeSort(R)
    
    
    #マージ
    ans = []
    L_index = 0
    R_index = 0
    
    while L_index < len(L) and R_index < len(R):
        if L[L_index] <= R[R_index]:
            ans.append(L[L_index])
            L_index += 1
        else:
            ans.append(R[R_index])
            R_index += 1
            
    if L_index < len(L):
        ans.extend(L[L_index:])
        
    if R_index < len(R):
        ans.extend(R[R_index:])

    return ans
