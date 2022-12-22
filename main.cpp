//
// Created by lukas on 22.12.2022.
//

#include <cstdlib>
#include <iostream>

class Solution {
private:
    int arr[50]{};

public:
    Solution() {
        for (int &i : arr) {
            i = rand() % 100;
        }
    }

    void swap(int* xp, int* yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

    void bubbleSort()
    {
        int i, j;
        int n = sizeof(arr) / sizeof(int);
        for (i = 0; i < n - 1; i++)

            for (j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(&arr[j], &arr[j + 1]);
    }

    void binarySearch(int num)
    {
        int lo = 0, hi = sizeof (arr) / sizeof (int) - 1;

        while (hi - lo > 1) {
            int mid = (hi + lo) / 2;

            std::cout << "przeszukuje: " << arr[mid] << "\n";

            if (arr[mid] < num) {
                lo = mid + 1;
            }
            else {
                hi = mid;
            }
        }
        if (arr[lo] == num) {
            std::cout << "Znaleziono"
                 << " Na indexie " << lo << std::endl;
        }
        else if (arr[hi] == num) {
            std::cout << "Znaleziono"
                 << " Na indexie " << hi << std::endl;
        }
        else {
            std::cout << "Nie znaleziono" << std::endl;
        }
    }
};

int main(void) {
    Solution solution;

    int num;

    num:
    std::cout<<"Podaj liczbe do wyszukania z zakresu od 0-100 \n";

    std::cin>>num;
    if (num > 100 || num < 0) {
        goto num;
    }

    solution.bubbleSort();

    solution.binarySearch(num);
}