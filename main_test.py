import pytest
import re

def regex_test(expected, lines):
    i = 0 ; match = 0
    for token in expected:
        for j in range(i, len(lines)):
            res = re.search(token, lines[j])
            if res is not None:
                i = j + 1
                match += 1
                break
        else:
            print(f'\033[91m Not Found: {token} \033[0m')
            assert False, f'Expect: {expected}'
    else:
        print(f'\033[91m match count: {match} \033[0m')
        assert match == len(expected), f'Expect: {expected}'


@pytest.mark.T1
def test_main_1():
    # data1=3: no discount, original=297.00, discount=0.00, total=297.00
    with open('result1.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'297\.00', r'0\.00', r'297\.00'], lines)


@pytest.mark.T2
def test_main_2():
    # data2=10: 20% discount, original=990.00, discount=198.00, total=792.00
    with open('result2.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'990\.00', r'198\.00', r'792\.00'], lines)


@pytest.mark.T3
def test_main_3():
    # data3=-5: negative input, prints error message and exits
    with open('result3.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'[Pp]ositive'], lines)


@pytest.mark.T4
def test_main_4():
    # data4=-2: negative input, prints error message and exits
    with open('result4.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'[Pp]ositive'], lines)
