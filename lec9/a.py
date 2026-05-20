import random
import time


def print_array(arr):
    print(*arr)


def shuffle_array(arr):
    for i in range(len(arr) - 1, 0, -1):
        j = random.randint(0, i)
        arr[i], arr[j] = arr[j], arr[i]


def compare_ascending(a, b):
    return a > b


def compare_descending(a, b):
    return a < b


def sort_array(arr, compare):
    size = len(arr)
    for i in range(size - 1):
        for j in range(size - i - 1):
            if compare(arr[j], arr[j + 1]):
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


def main():
    arr = [1, 2, 3, 4, 5]

    random.seed(time.time())

    print("원본 배열:", end=" ")
    print_array(arr)

    shuffle_array(arr)
    print("섞인 배열:", end=" ")
    print_array(arr)

    sort_array(arr, compare_ascending)
    print("오름차순 정렬 배열:", end=" ")
    print_array(arr)

    sort_array(arr, compare_descending)
    print("내림차순 정렬 배열:", end=" ")
    print_array(arr)


if __name__ == "__main__":
    main()
