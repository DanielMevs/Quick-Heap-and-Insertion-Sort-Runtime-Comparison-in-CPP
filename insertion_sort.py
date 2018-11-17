arr = [3,44,5,47,15,36,26,27,2,46]
print("array = ", arr)

def swap(arr, i , j):
    temp = arr[j]
    arr[j] = arr[i]
    arr[i] = temp
    return arr
def insertion_sort(arr):    
    i = 1
    temp = 0
    n = len(arr)
    while i < n:
        current = arr[i]
        j = i - 1
        while j >= 0:
            if current < arr[j]:
                arr = swap(arr,j,j+1)
                '''temp = arr[j]
                arr[j] = arr[i]
                arr[i] = temp'''
                print(arr)
            j = j -1
            current = arr[j+1]
        i = i + 1


