# https://www.quora.com/How-would-you-explain-an-algorithm-that-generates-permutations-using-lexicographic-ordering


def lexic(vals):
    """Finding next value in lexicographical order"""
    # Step 1
    largest_i = -1
    i = 0
    while i < len(vals) - 1:
        if vals[i] < vals[i+1]:
            largest_i = i
        i += 1
    
    if largest_i == -1:
        print('Finished')
        return []

    # Steps 2
    largest_j = -1
    j = 0
    while j < len(vals):
        if vals[largest_i] < vals[j]:
            largest_j = j
        j += 1

    # Step 3
    vals[largest_i], vals[largest_j] = vals[largest_j], vals[largest_i]

    # Step 4
    new = vals.copy()[largest_i+1:]
    new.reverse()
    vals = vals[:largest_i+1] + new

    return vals


def lexic_chars(string):
    """Lexicographical order with strings"""
    string = list(string)
    string = [ord(v) for v in string]
    string = lexic(string)
    string = ''.join(map(chr, string))
    return string


def comp(a, b):
    """Function for comparing what's later in the lexicographical order"""
    for x in range(len(a)):
        if a[x] > b[x]:
            return 1
        elif a[x] < b[x]:
            return 2
    return 0


if __name__ == '__main__':
    # vals = [0, 1, 2, 3, 4, 5, 6, 7]
    vals = [0, 1, 2]

    while vals != []:
        print(vals)
        vals = lexic(vals)

    print(lexic_chars('aaba'))
    print(lexic_chars('abaa'))

    print(comp('aabb', 'aaaa'))
    print(comp('aabb', 'aabb'))
