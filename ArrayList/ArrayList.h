#if !defined(_ARRAYLIST_H)
#define _ARRAYLIST_H

class ArrayList{
    private:
        int *L;      
        int maxSize;
        int curSize;
    public:
        ArrayList(int maxSize);
        ~ArrayList();

        int size();
        int get(int i);
        int remove(int i);
        int indexof(int e);
        void set(int i ,int e);
        void add(int i , int e);
        void Clear();
        int Max();
        int Min();
        void display();
};

#endif // _ARRAYLIST_H
