def determine(test_num, test):
    reversed_test = ''.join(list(reversed(test)))
    print('Test #{} is {} palindrom'.format(test_num, 'a' if reversed_test == test else 'not a'))


a = input()

determine(1, a)