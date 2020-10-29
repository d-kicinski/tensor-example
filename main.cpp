#include <tensor/ts.hpp>

auto str(ts::Matrix &) -> std::string;

auto main() -> int
{
    ts::Matrix A = {
        {3, 1, 3},
        {1, 5, 9},
    };
    ts::Matrix B = {
        {3, 1},
        {1, 5},
        {2, 6}
    };
    ts::Matrix C = ts::dot(A, B);

    std::cout << "A = " << std::endl << str(A) << std::endl;
    std::cout << "B = " << std::endl << str(B) << std::endl;
    std::cout << "A @ B = " << std::endl << str(C) << std::endl;

    return 0;
}

auto str(ts::Matrix & m) -> std::string {
    std::ostringstream ss;
    for (int i = 0; i < m.dimensions()[0]; i++) {
        ss << " | ";
        for (int j = 0; j < m.dimensions()[1]; j++) {
            ss << m(i, j) << " ";
        }
        ss << " | " << std::endl;
    }
    return ss.str();
}