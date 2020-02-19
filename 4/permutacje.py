
def main():
    count = int(input())
    arr = [int(x) for x in input().split()]

    arr.sort()

    for i, num in enumerate(arr, 1):
        if i != num:
            return 'NIE'

    return 'TAK'


print(main())
