#include <iostream>
#include "ArrayList.h"
using namespace std;

int main(){
      int op;
   int l;
   
   
  cout<<"Enter set maximum List: ";
  cin>>l;

   ArrayList obj(l);
   cout<<endl;
   
  do
   {
    cout<<endl;
    cout<<" Menu "<<endl;
    cout<<" 1:ADD 2:SIZE 3:GET 4:REMOVE 5:SET"<<endl;
    cout<<" 6:INDEXOF 7:MAX 8:MIN 9:CLEAR 10:DISPLAY"<<endl;
    cout<<endl;
    cout<<" Enter Number of Menu: ";
    cin>>op;
  
  if(op==1) //ADD
  {
    int l1;
    for( int i = 0; i < l; i++)
    {
      cout<<"Set Data List position: "<<i<<" Is: ";
      cin>>l1;
      obj.add(i,l1);
    }
      obj.display();
      cout<<endl;
  }

  else if(op==2) //SIZE
  {
    int k1 = obj.size();
    cout<<"The current data size List is: "<<k1<<endl;
    cout<<endl;
  }

  else if(op==3) // GET
  {
    obj.display();
    int p;
    cout<<"Enter data List: ";cin>>p;
    int p1 = obj.get(p);
    cout<<"Position of Is: "<< p1 <<endl;
    cout<<endl;
  }

  else if(op==4) //REMOVE
  {
    obj.display();
    int r;
    cout<<"Enter position to delete: ";cin>>r;
    int temp = obj.remove(r);
    cout<<"Remove: "<<temp<<" done."<<endl;
    obj.display();
    cout<<endl;
  }

  else if(op==5) //SET
  {
    int i,e;
    obj.display();
    cout<<"Enter position to List: ";
    cin>>i;
    cout<<"Enter new data List: ";
    cin>>e;
    obj.set(i,e);
    obj.display();
  }

  else if(op==6) //Indexof
  {
    obj.display();
    int e;
    cout<<"Enter data List: ";cin>>e;
    int e1 =  obj.indexof(e);
    cout << "position is: " << e1 <<endl;
    cout<<endl;
  }
 
  else if(op==7) // Max
  {
    obj.display();
    int Max = obj.Max();
    cout<<"The maximum value in this data List is: "<< Max <<endl;
    cout<<endl;

  }

  else if(op==8) //Min
  {
    obj.display();
    int Min = obj.Min();
    cout<<"The minimum value in this data List is: "<< Min <<endl;
    cout<<endl;
  }

  else if(op==9) //clear
  {
    obj.Clear();
    obj.display();
  }

  else if(op==10) // Display
  {
    obj.display();
  }
 
   } while (op !=0);
   
   return 0;
   
 }
