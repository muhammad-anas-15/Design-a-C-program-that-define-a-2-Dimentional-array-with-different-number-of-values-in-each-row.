/*
Program that define a 2-Dimentional array with different number of values in each row.
We use double pointer to define and access the elements of arr 
How many rows n the user want to define?
How many elements should have for each row ?[store those numbers in 1Darray (DMA)].

Define that rows with required amount of values in each row (already stored in 1D array
name cols)
e. Input values for each row one by one in 2D array
f. Print all the values row wise from 2D array
g. Delete the 2D array
h. Delete the pointer array
*/
#include<iostream>

using namespace std;

int main()
{
	int rows;
	cout<<"Enter number of rows you want to define: ";//Pompt user to define size of array.
	cin>>rows;
	int **array = new int*[rows];//Declaring pointer to 2D array(rows).
	
	int *no_of_elements = new int[rows];//Declare pointer which include no of elements in each row.
    
    cout<<"Enter number of elements you want to enter in 1D array: "; 
	for(int i=0; i<rows; i++)
	{
		cout << "Row no: " << i+1 << ": ";
		cin>>no_of_elements[i];//Prompt user to enter elements of array.
		array[i] = new int[no_of_elements[i]];// Allocate memory for each row.
		
	}
	
	//Defining elements for each row.
	cout << "Enter values for each row: \n";
    for (int i = 0; i < rows; ++i) {
        cout << "Row no: " << i+1 << ":\n";
        for (int j = 0; j < no_of_elements[i]; ++j) {
            cout << "Enter value in row " << j+1 << ": ";
            cin >> array[i][j];//Prompt user to enter values in each row
        }
    }
    cout<<"\n";
    //Printing values stored in each row individually.
	cout << "Values in the 2D array:\n";
    for (int i = 0; i < rows; ++i) {
        cout << "Row no: " << i+1 << ": ";
        for (int j = 0; j < no_of_elements[i]; ++j) {
            cout << array[i][j] << " ";
        }
        cout <<endl;
    }
	
	for (int i = 0; i <rows; ++i) 
	{
        delete[] array[i];//Deallocating rows of array.
    }
    delete[] array;//Deallocating whole array.
    delete[] no_of_elements;//Deallocating pointer of elements.

}
