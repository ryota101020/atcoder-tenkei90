def main():
    H, W = map(int, input().split())
    A = [list(map(int, input().split())) for _ in range(H)]
    row = [0]*W
    col = [0]*H
    for j in range(W):
        for i in range(H):
            row[j] += A[i][j]
            col[i] += A[i][j]
    for i in range(H):
        for j in range(W):
            print(row[j]+col[i]-A[i][j], end=" ")
        print()


if __name__ == '__main__':
    main()
