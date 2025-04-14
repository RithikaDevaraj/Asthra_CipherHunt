def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j], arr[j + 1]
    return arr


arr = [5, 2, 9, 1, 5, 6]
print("Sorted array:", bubble_sort(arr))
