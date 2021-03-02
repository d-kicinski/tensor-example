#include <tensor/ts.hpp>

auto str(ts::MatrixF &) -> std::string;

auto main() -> int
{
    ts::MatrixF A = {
        {3, 1, 3},
        {1, 5, 9},
    };
    ts::MatrixF B = {
        {3, 1},
        {1, 5},
        {2, 6}
    };
    ts::MatrixF C = ts::dot(A, B);

    std::cout << "A = " << std::endl << str(A) << std::endl;
    std::cout << "B = " << std::endl << str(B) << std::endl;
    std::cout << "A @ B = " << std::endl << str(C) << std::endl;

    return 0;
}

auto str(ts::MatrixF & m) -> std::string {
    std::ostringstream ss;
    for (int i = 0; i < m.shape(0); i++) {
        ss << " | ";
        for (int j = 0; j < m.shape(1); j++) {
            ss << m(i, j) << " ";
        }
        ss << " | " << std::endl;
    }
    return ss.str();
}