#if !defined(_SORTING_H)
#define _SORTING_H
#include "../ArrayList/ArrayList.h"
#include <stdlib.h>
#include <time.h>
#define DEAULT_SIZE 50000

class Sorting{
    private:
        ArrayList *data;
        ArrayList *temp;
        int maxSize;
        int swapCounter; 
        int loopCounter; 
        double timeElasped;

    private:
        void swap(int i, int j); 
        int findMaxIndex(int n);
        void Insert(int n);
        void bubble_(int n);
        void selectK( int k);
        int findMinIndexK(int iStart, int k);
        void copyArray(ArrayList *src ,ArrayList *dest , int begin ,int end);
        void merge_(ArrayList *data ,ArrayList *result , int begin ,int end);
        void quick_(int begin, int end);
        int pickPivotIndex(int begin, int end);

    public:
        Sorting(int maxSize = DEAULT_SIZE);
        ~Sorting();

        void seletion(bool verbose = false);
        void Insertion(bool verbose = false);
        void bubble(bool verbose = false);
        void shell(bool verbose = false);
        void merge(bool verbose = false);
        void quick(bool verbose = false);
    
    public:
        void resetCounter();
        void random();
        void backup();
        void restore();
        void diaplayswapCounter();
        void displayloopCounter();
        void displaytimes();
        void display();  
};
#endif // _SORTING
