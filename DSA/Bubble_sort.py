#-----------worst-solution-----------
# def BubbleSort(a, n):
#     for i in range(n-1,0, -1):
#         for j in range(0,i):
#             if a[j]>a[j+1]:
#                 temp = a[j]
#                 a[j] = a[j+1]
#                 a[j+1] = temp
#     print(a)

# a = [6,3,5,1,8]
# n = 5
# BubbleSort(a,n)

#--------------better-solution---------
def bubble_sort(arr):
    n = len(arr)
    for pass_num in range(n-1, -1, -1):
        swapped = False
        for i in range(0,pass_num-1):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                swapped = True
        if not swapped:
            break

def print_array(arr):
    for i in arr:
        print(i, end=" ")
    print()


arr = [1,2,3,4,5]
bubble_sort(arr)
print("Sorted array:")
print_array(arr)