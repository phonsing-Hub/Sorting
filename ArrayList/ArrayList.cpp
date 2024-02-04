#include "ArrayList.h"
#include <iostream>
using namespace std;

ArrayList::ArrayList(int maxSize){
    this->maxSize = maxSize;
    curSize = 0;
    L = new int [this->maxSize];
}

ArrayList::~ArrayList(){
    delete []L; 
}

void ArrayList::add(int i, int e){
    if(curSize == maxSize){
    cout<<"Error:"<<e<<" list is full"<<endl; 
    return;
    }
    if(i<0){
      cout<<"Waring: i is under lower bound, i change to 0"<<endl;
      i=0;
    }
    else if(i>curSize){
      cout<<"Waring: i is over upper bound, i change to "<< curSize<<endl;
      i = curSize;
    }

    for(int j = curSize-1; j>=i ; j--)
      L[j+1] = L[j];

    L[i] = e;
    curSize++;
}

void ArrayList::Clear(){
    curSize = 0;
}

void ArrayList::display()
{
    cout<<"L:[ ";
    if(curSize == 0)
    cout<<"]";
    else{
       for(int i=0; i<curSize;i++){
       cout<<L[i];
       if(i<curSize-1)
       cout<<" : ";
       else
       cout<<"]";
       }
    }
    cout<<" size:"<<curSize<<"/"<<maxSize<<endl;
}

int ArrayList::get(int i)
{
    if(curSize == 0 || i < 0 || i > curSize -1)
       return -1;                        
     
    return L[i];
}

int ArrayList::indexof(int e){
    int i;
    for ( i = 0; i <=curSize-1 ; i++)
        if (L[i] == e)
        return i;
        
    cout<<"Data "<< e <<" This information is not available. "<<endl;
    return -1;
}

int ArrayList::Min(){
    int min = L[0];
    for (int i=0; i <=curSize-1; i++)
      if(min > L[i])
         min = L[i];
      
   return min;
}

int ArrayList::Max(){
    int max = L[0];
    for(int i=0; i<=curSize-1; i++ ) 
     if(max < L[i])
        max = L[i];

  return max;
}

int ArrayList::remove(int i){
    if(curSize == 0 || i < 0 || i > curSize -1)
       return -1; 

    int temp = L[i];
    for(int j = i+1; j<=curSize-1 ; j++)
        L[j-1] = L[j];

    curSize--;

    return temp;
}

void ArrayList::set(int i, int e){
  if(curSize == 0 || i < 0 || i > curSize -1)
     cout << "SET: " << i << " This not set" << endl;
   L[i] = e;
}

int ArrayList::size(){
    return curSize;
}