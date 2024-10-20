# 2-Dimensional Dynamic Array Program

This C++ program allows users to create a 2-dimensional array where each row can have a different number of elements. The program utilizes dynamic memory allocation and double pointers to efficiently manage memory. Users can input values for each row, and the program will display these values row-wise.

## How It Works

1. **User Input for Rows**: 
   - The program prompts the user to enter the number of rows they wish to define for the 2-dimensional array.

2. **Dynamic Memory Allocation**: 
   - A double pointer is used to create a 2D array. Each row can have a different number of elements, which the user specifies.

3. **Input Values**: 
   - The user is prompted to enter values for each row one by one.

4. **Display Values**: 
   - The program prints all values stored in the 2D array row-wise.

5. **Memory Management**: 
   - The program handles memory cleanup by deleting allocated memory for both the 2D array and the 1D array that holds the number of elements per row.

## Features

- **Flexible Row Sizes**: 
   - Each row in the array can have a different number of elements, providing flexibility in data storage.
   
- **Dynamic Memory Management**: 
   - Memory is allocated and deallocated dynamically, which optimizes memory usage.
   
- **User-Friendly Interface**: 
   - The program is interactive and prompts users for input clearly.
