#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

//1

/*
void sortElementsBetweenNegatives(int arr[], int size) {
    int leftNegIndex = -1;
    int rightNegIndex = -1;


    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (leftNegIndex == -1) {
                leftNegIndex = i;
            }
            rightNegIndex = i;
        }
    }

    sort(arr + leftNegIndex + 1, arr + rightNegIndex);


    cout << "arr: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    const int size = 15;
    int numbers[size];


    srand(time(0));
    for (int i = 0; i < size; ++i) {
        numbers[i] = rand() % 41 - 20;
    }


    cout << "arr: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;


    sortElementsBetweenNegatives(numbers, size);

    return 0;
}
*/



//2

/*
void shuffleArray(int arr[], int size) {
    srand(time(0));
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }
}


int findPosition(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int size = 20;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    shuffleArray(arr, size);

    int randomNum = rand() % size + 1;
    int position = findPosition(arr, size, randomNum);

    if (position != -1) {
        cout << "nums " << randomNum << position << endl;

        sort(arr, arr + position, greater<int>());

        sort(arr + position + 1, arr + size);

        cout << "arr: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
    return 0;
}
*/