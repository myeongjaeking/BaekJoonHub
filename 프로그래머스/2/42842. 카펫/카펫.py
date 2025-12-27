def solution(brown, yellow):
    total = brown + yellow

    for row in range(3, total + 1):
        if total % row != 0:
            continue

        col = total // row

        if col < row:
            continue

        if (col - 2) * (row - 2) == yellow:
            return [col, row]
