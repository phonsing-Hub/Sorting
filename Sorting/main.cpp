#include <iostream>
#include "Sorting.h"
using namespace std;

int main()
{
    int n;
    int a;
    Sorting s;
    s.random();
    s.restore();
    do{
        cout << " Manu " << endl;
        cout << "1:SeletionSort 2:InsertionSort 3:BuebleSort" << endl;
        cout << "4:ShellSort 5:MergeSort 6:QuickSoort 7:all Test" << endl;
        cout << "Enter Manu: ";
        cin >> a;

        switch (a){
            case 1:
                cout<<endl;    
                cout << "SeletionSort" << endl;
                cout << endl;
                s.restore();
                s.seletion();
                s.diaplayswapCounter();
                s.displayloopCounter();
                s.displaytimes();
                cout << endl;
                break;

            case 2:
                cout<<endl; 
                cout << "InsertionSort" << endl;
                cout << endl;
                s.restore();
                s.Insertion();
                s.diaplayswapCounter();
                s.displayloopCounter();
                s.displaytimes();
                cout << endl;
                break;

            case 3:
                cout<<endl; 
                cout << "BuebleSort" << endl;
                cout << endl;
                s.restore();
                s.bubble();
                s.diaplayswapCounter();
                s.displayloopCounter();
                s.displaytimes();
                cout << endl;
                break;

            case 4:
                cout<<endl; 
                cout << "ShellSort" << endl;
                cout << endl;
                s.restore();
                s.shell();
                s.diaplayswapCounter();
                s.displayloopCounter();
                s.displaytimes();
                cout << endl;
                break;

            case 5:
                cout<<endl; 
                cout << "MergeSort" << endl;
                cout << endl;
                s.restore();
                s.merge();
                s.diaplayswapCounter();
                s.displayloopCounter();
                s.displaytimes();
                cout << endl;
                break;

            case 6:
                cout<<endl; 
                cout << "QuickSoort" << endl;
                cout << endl;
                s.restore();
                s.quick();
                s.diaplayswapCounter();
                s.displayloopCounter();
                s.displaytimes();
                cout << endl;
                break;
        }
        }while (a != 0);
        return 0;
    }