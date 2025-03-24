#include <stdio.h>

int main()

{

    /*
    data_type array_name[rows][columns];
    int matrix[3][4]; // A 3x4 matrix (3 rows, 4 columns)
        [ [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0] ]

        matrix[0][2] = 5;  // Sets the element in 1st row, 3rd column to 5

A **2-dimensional array** in **C** is essentially an array of arrays. It allows you to store data in a **table-like structure**, where you have rows and columns.

### 📌 Definition:
```c
data_type array_name[rows][columns];
```

### ✅ Example:
```c
int matrix[3][4]; // A 3x4 matrix (3 rows, 4 columns)
```
This can be visualized like:
```
[ [0, 0, 0, 0],
  [0, 0, 0, 0],
  [0, 0, 0, 0] ]
```

You can access individual elements using:
```c
matrix[0][2] = 5;  // Sets the element in 1st row, 3rd column to 5
```

---

### 🎯 Purpose in Real World:
2D arrays are useful in many **real-world applications**, especially where data is structured like a grid or table:

#### 🔹 1. **Matrix Calculations**
- Used in scientific computing, graphics, and physics simulations.
- Example: Matrix multiplication, transformations in 3D graphics.

#### 🔹 2. **Games**
- Used to build game boards (like chess, tic-tac-toe, sudoku).
- Example: `char gameBoard[3][3];`

#### 🔹 3. **Image Processing**
- An image is made up of pixels arranged in rows and columns.
- Each pixel can be stored as an element in a 2D array.

#### 🔹 4. **Storing Tabular Data**
- Like a spreadsheet: rows and columns of data.
- Example: Storing marks of students across subjects.

#### 🔹 5. **Pathfinding Algorithms**
- In robotics or games, grids (2D arrays) are used to map out environments and find shortest paths.

---



    */

    int marks[2][3] = {
        {85, 90, 78},
        {88, 92, 80}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Student %d, Subject %d: %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}
