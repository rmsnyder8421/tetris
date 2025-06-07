#include <iostream>
#include <vector>

#include <iostream>
#include <string>

class Grid 
{
    public:
        Grid(int grid_rows,int grid_cols);
        void printGrid();

    private:
        int grid_rows;
        int grid_cols;

};

// Constructor definition. Takes in cols, rows. Assigns cols to grid_cols, for example, with this->grid_cols
Grid::Grid(int rows, int cols) : grid_rows(rows), grid_cols(cols) {}

void Grid::printGrid()
{
    std::vector<std::vector<char>> grid(grid_rows, std::vector<char>(grid_cols, '.'));
    for (int i=0;i<grid_rows;i++)
    {
        for (int j=0;j<grid_cols;j++)
        {
            std::cout << "  " << grid[i][j];
        }
        std::cout << std::endl;
    }
}

int main() 
{
    int r = 20;
    int c = 10;
    
    std::cout<<"TETRIS:\n";
    Grid my_grid(r,c);
    my_grid.printGrid();

return 0;
}