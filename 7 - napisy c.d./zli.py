letters_lower = {}
letters_upper = {}

for _ in range(int(input())):
    for letter in input().replace(' ', ''):
        case = letters_lower if letter.lower() == letter else letters_upper
        if letter in case.keys():
            case[letter] += 1
        else:
            case[letter] = 1

letters_lower = list(letters_lower.items())
letters_upper = list(letters_upper.items())
letters_lower.sort(key=lambda item: item[0])
letters_upper.sort(key=lambda item: item[0])

for item in letters_lower:
    print(item[0], item[1])

for item in letters_upper:
    print(item[0], item[1])
