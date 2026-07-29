#include <iostream>
using namespace std;
int main() 

{
    int numbers[] = {45, 12, 89, 73, 22};
    int *ptr = numbers; 
    int size = sizeof(numbers) / sizeof(numbers[0]);;
	int maxNumber = *ptr; 

    
    for (int i = 0; i<size ; i++) {
        
        if (*(ptr + i) > maxNumber) 
		{
            maxNumber = *(ptr + i); 
        }
    }

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}
