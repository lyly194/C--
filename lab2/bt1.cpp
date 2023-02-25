#include <iostream>
using namespace std;

bool isMagicSquare(int square[3][3]) {
    const int magicNum = 15; // Tổng của mỗi hàng, mỗi cột và mỗi đường chéo là 15 trong Lo Shu Magic Square
    int rowSum = 0, colSum = 0, diag1Sum = 0, diag2Sum = 0; // Tổng của mỗi hàng, mỗi cột, mỗi đường chéo chéo

    // Tính tổng các hàng, cột và đường chéo
    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        colSum = 0;

        for (int j = 0; j < 3; j++) {
            rowSum += square[i][j]; // Tổng các số trên hàng thứ i
            colSum += square[j][i]; // Tổng các số trên cột thứ i
        }

        diag1Sum += square[i][i]; // Tổng các số trên đường chéo 1
        diag2Sum += square[i][2-i]; // Tổng các số trên đường chéo 2

        // Nếu tổng các số trên hàng, cột hoặc đường chéo không bằng magicNum, trả về false
        if (rowSum != magicNum || colSum != magicNum) {
            return false;
        }
    }

    // Nếu tổng các số trên đường chéo 1 hoặc đường chéo 2 không bằng magicNum, trả về false
    if (diag1Sum != magicNum || diag2Sum != magicNum) {
        return false;
    }

    // Nếu không có bất kỳ lỗi nào, trả về true
    return true;
}

int main() {
    // Khởi tạo một mảng hai chiều đại diện cho Lo Shu Magic Square
    int square[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    // Kiểm tra xem mảng có phải là Lo Shu Magic Square hay không
    if (isMagicSquare(square)) {
        cout << "This is a Lo Shu Magic Square." << endl;
    } else {
        cout << "This is not a Lo Shu Magic Square." << endl;
    }

    return 0;
}
