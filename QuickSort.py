def QuickSort(A):
    if len(A) < 1:
        return A
    
    pivot = A[0]
    left = []
    right = []
    
    for i in range(1, len(A)):
        if A[i] <= pivot:
            left.append(A[i])
        else:
            right.append(A[i])
            
    left = QuickSort(left)
    right = QuickSort(right)
    A = left + [pivot] + right
    return A
