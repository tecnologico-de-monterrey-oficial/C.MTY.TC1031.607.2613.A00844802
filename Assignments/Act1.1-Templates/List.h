#if !defined(List_h)
#define List_h

#include <vector>

class List {
    private:
        vector<T> list;
        int size;
    
    public:
        List();

}

template <typename T>
List<T>::List(){
    size = 0;
}

template <typename T>
void insert(T data){
    list.push_back(data);
    size++;
}

#endif // List_h
