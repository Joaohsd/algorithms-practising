def bubble_sort(arr, ascending):
    N = len(arr)

    print(f'Before sorting: {arr}')

    has_shift = True

    while has_shift:
        has_shift = False
        for curr_index in range(N-1):
            next_index = curr_index + 1
            if ascending:
                if arr[curr_index] > arr[next_index]:
                    has_shift = True
                    tmp = arr[curr_index]
                    arr[curr_index] = arr[next_index]
                    arr[next_index] = tmp
            else:
                if arr[curr_index] < arr[next_index]:
                    has_shift = True
                    tmp = arr[curr_index]
                    arr[curr_index] = arr[next_index]
                    arr[next_index] = tmp
        N = N - 1 

    print(f'After sorting: {arr}')

arr = [21,13,10,9,11,3,2,0]

ascending = True

bubble_sort(arr, ascending)