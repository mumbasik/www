

#include <iostream>
using namespace std;
void function(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        ar[i] = i + 1;

    }
    int random;
    cout << "random: " << "\n";
    cin >> random;
    int* arr = new int[random];
    for (int i = 0; i < random; i++) {
        arr[i] = i + 1;

    }
    int* a = new int[size + random];
    for (int i = 0; i < size; i++) {
        a[i] = ar[i];

    }
    for(int i =0; i < size; i++)
    a[size + i] = arr[i];
    delete[] ar;
    ar = a;
    for (int i = 0; i < size + random; i++) {
        cout << ar[i];
    }
    delete[] ar;
    delete[] arr;
}
//N1
int main()
{
    int size;
    cout << "Size: " << "\n";
    cin >> size;
    int* ar = new int[size];
    for (int i = 0; i < size; i++) 
        ar[i] = i + 1;
    
    for (int i = 0; i < size; i++) 
        cout << ar[i] ;
    
    cout << "\n";
   
    int randsize;
    cout << "Size of random: " << "\n";
    cin >> randsize;
    int* arr = new int[randsize];
    for (int i = 0; i < randsize; i++) 
        arr[i] = i + 1;
    
    
    int* a = new int[size + randsize];
    for (int i = 0; i < size; i++) 
        a[i] = ar[i];
    for (int i = 0; i < size; i++) {


        a[size + i] = arr[i];
    }
        delete[] ar;
        ar = a;
        for(int i = 0; i < size + randsize  ; i++) {
            cout << ar[i];
        }
        cout << "\n";
        delete[] ar;
        delete[] arr;

        int sizee;
        cout << "Size: " << "\n";
        cin >> size;
        int* x = new int[size];
        function(x, size);

    //N3
        int M;
        int N;
        cout << "First: "  << "\n";
        cin >> M;
        
        cout << "Second: "  << "\n";
        cin >> N;
        int* A = new int[M];
        for (int i = 0; i < M; i++) {
            cin >> A[i];
        }
        
        for (int i = 0; i < M; i++) {
            cout << A[i];
        }
        cout << "\n";
        int* b = new int[N];
        for (int i = 0; i < N; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < N; i++) {
            cout << b[i];
        }
        
        int min;
        cout << "Minimum: " << "\n";
        cin >> min;
        int* o = new int[min];
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (A[i ] == b[j ]) {
                    o[min] = A[i] + b[j];
                }
            }
       }
        delete[] A;
        delete[] b;
        for (int i = 0; i < size; i++) {
            cout << o[i];
        }
        delete[] o;
        

}


