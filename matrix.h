#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

class matrix{

    public:
    matrix() noexcept;
    matrix(int rows, int cols); //конструктор с кол-вом строк и столбцов
    matrix(const matrix& other);
    int getRows();
    int getCols(); 
    double getArr();
    void changeMatrix(vector<vector<int>> arr_, int rows, int cols);
    void printMatrix();
    void EqMatrix(const matrix& other);
    void SumMatrix(const matrix& other);

private:

    int rows_, cols_;
    double** arr_;
    
};