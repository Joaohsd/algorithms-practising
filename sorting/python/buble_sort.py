def bubble_sort(arr, ascending=True):
    '''
    Bubble sort function to sort an array in either ascending or descending order.

    Arguments:
        - arr : Array to be sorted
        - ascending: Order to be sorted (True for Ascending, False for Descending)
    '''
    N = len(arr)  # Length of the array

    print(f'Before sorting: {arr}')

    has_shift = True  # Flag to check if any swap occurs during a pass

    while has_shift:
        has_shift = False  # Reset the flag for each pass
        for curr_index in range(N-1):
            next_index = curr_index + 1
            if ascending:
                # Check for ascending order
                if arr[curr_index] > arr[next_index]:
                    has_shift = True
                    # Swap elements if they are in the wrong order
                    tmp = arr[curr_index]
                    arr[curr_index] = arr[next_index]
                    arr[next_index] = tmp
            else:
                # Check for descending order
                if arr[curr_index] < arr[next_index]:
                    has_shift = True
                    # Swap elements if they are in the wrong order
                    tmp = arr[curr_index]
                    arr[curr_index] = arr[next_index]
                    arr[next_index] = tmp
        N = N - 1  # Decrease the range in each pass as the largest element is already at the end

# Example usage
arr = [21, 13, 10, 9, 11, 3, 2, 0]
ascending = True
bubble_sort(arr, ascending)
print(f'After sorting: {arr}')
