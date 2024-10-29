def matrix_multiply(A, B):
    rows_A = len(A)
    cols_A = len(A[0]) if rows_A > 0 else 0
    rows_B = len(B)
    cols_B = len(B[0]) if rows_B > 0 else 0

    if cols_A != rows_B:
        raise ValueError("Number of columns in A must be equal to number of rows in B")

    C = [[0 for _ in range(cols_B)] for _ in range(rows_A)]

    for i in range(rows_A):
        for j in range(cols_B):
            for k in range(cols_A):
                C[i][j] += A[i][k] * B[k][j]

    return C

def get_matrix_input(matrix_name):
    rows, cols = map(int, input(f"Enter dimensions of matrix {matrix_name} (rows and columns): ").split())
    matrix = []
    for _ in range(rows):
        row = list(map(int, input().split()))
        if len(row) != cols:
            raise ValueError(f"Each row must have exactly {cols} elements.")
        matrix.append(row)
    return matrix

def main():
    A = get_matrix_input('A')
    B = get_matrix_input('B')
    try:
        C = matrix_multiply(A, B)
        print("Resultant matrix C (A * B):")
        for row in C:
            print(" ".join(map(str, row)))
    except ValueError as e:
        print(e)

if __name__ == "__main__":
    main()

