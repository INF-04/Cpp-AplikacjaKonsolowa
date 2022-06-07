#include <iostream>

class Sortowanie {
  private:
    int tablica[10];
    int tablicaSize = sizeof(tablica) / sizeof(int);

  public:
    void wykonaj() {
        std::cout<<"Podaj liczby do tablicy\n";
      
        for (int i = 0; i < tablicaSize; i++) {
          int add;
          std::cin>>add;
          
          tablica[i] = add;
        }

      selection_sort(tablica);

      std::cout<<"Posortowane:\n";

      for(int i : tablica)
        std::cout<<i<<std::endl;
    }

  private:
    int* selection_sort(int tablica[]) {
      for (int i = 0; i < tablicaSize - 1; i++) {
        int max = i;

        for (int j = i + 1; j < tablicaSize; j++) {
          if (tablica[max] < tablica[j])
            max = j;

          if(max != i) {
            int temp = tablica[max];
            tablica[max] = tablica[i];
            tablica[i] = temp;
          }
        }
      }
      return tablica;
    }

};

int main() {
  Sortowanie sortowanie;

  sortowanie.wykonaj();
}