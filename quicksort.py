def quicksort(ls):
    if len(ls)<=1:
        return ls
    left = []
    right = []
    pivot = ls.pop(len(ls)-1)
    for i in ls:
        if i < pivot:
            left += [i]
        elif i >= pivot:
            right += [i]
    return quicksort(left)+[pivot]+quicksort(right)

ls = [42,31,44,32,6,37,23]
print(quicksort(ls))
