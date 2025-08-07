letter = str(input("enter a letter"))
match letter:
    case 'a' | 'e' | 'i' | 'o' | 'u':
        print("it's a vowel")
    case _:
        print("it's not a vowel")