def SelectionSort(arr):
    n = len(arr)
    for i in range(0,n-1):
        min = i
        for j in range(i, n):
            if arr[j] < arr[min]:
                min = j
        arr[min], arr[i] = arr[i], arr[min]
    return arr

arr = [5,3,7,1,9]
x = SelectionSort(arr)
print(x)