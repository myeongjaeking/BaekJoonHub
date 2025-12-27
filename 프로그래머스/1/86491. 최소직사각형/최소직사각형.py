def solution(sizes):
    if sizes[0][0] < sizes[0][1] :
        max_row = sizes[0][1];
        max_col = sizes[0][0];
    else :
        max_row = sizes[0][0];
        max_col = sizes[0][1];
        
    for i in sizes:
        if i[0] < i[1] :
            target = i[0]
            i[0] = i[1]
            i[1] = target
        if max_row < i[0]:
            max_row = i[0]
        if max_col < i[1]:
            max_col = i[1]
    
    answer = max_row * max_col
    return answer