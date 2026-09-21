from bisect import bisect_left


def solution(phone_book):
    phone_book.sort()
    n = len(phone_book)

    for i, number in enumerate(phone_book):
        idx = bisect_left(phone_book, number, i + 1)

        if idx < n and phone_book[idx].startswith(number):
            return False

    return True