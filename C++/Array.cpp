#include <iostream>
#include <cstring>

using namespace std;


//Part 1: 1D Array
//Bai 1
void inputArray(int arr[], int &n){
    for(int i = 0; i < n; ++i){
        cout << "Nhap gia tri arr[" << i << "]: "; cin >> arr[i];
    }    
}

//Bai 2
void outputArray(int arr[], int n){
    cout << "Arr: ";
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Bai 3
int sumArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += arr[i];
    }
    return sum;
}

//Bai 4
int findMin(int arr[], int n){
    int MIN = arr[0];
    for(int i = 0; i < n; ++i){
        if(arr[i] < MIN){
            MIN = arr[i];
        }
    }
    return MIN;
}

//Bai 5
int findIndexOfX(int arr[], int n, int x){
    string index;
    int pos;
    try{
        for(int i = 0; i < n; ++i){
            if(arr[i] == x){
                index = to_string(i) + index;
            }
        }
        pos = stoi(index);
        return pos;
    }
    catch(...){
        return 0;
    }
}

//Bai 6
int countOccurrences(int arr[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] == x) count++;
    }
    return count;
}

//Bai 7
int checkPrime(int num){
    if(num <= 1) return false;
    else if(num == 2 || num == 3 || num % 2 != 0 && num % 3 != 0) return true;
    else{
        return false;
    }
}

int countNumberofPrime(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; ++i){
        if(checkPrime(arr[i])) count++;
    }
    return count;
}

//Bai 8
int isAscendingOrder(int arr[], int n){
    for(int i = 0; i < n - 1; ++i){
        if(arr[i] > arr[i+1]) return false;
    }
    return true;
}

//Bai 9
void removeElements(int arr[], int &n, int x){
    int i = 0;
    while(i < n){
        if(arr[i] == x){
            for(int j = i; j < n; ++j){
                arr[j] = arr[j + 1];
            }
            n--;
        }
        else{
            i++;
        }
    }

    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Bai 10
void removeElementsFromIndex(int arr[], int &n, int idx, int num_del){
    int i = 0;
    while(i < n){
        if(i == idx){
            for(int j = i; j < n - num_del; ++j){
                arr[j] = arr[j + num_del];
            }
            n = n - num_del;
            break;
        }
        i++;
    }

    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Bai 11
void concatTwoArrays(int a[], int na, int b[], int nb, int c[], int &nc){
    nc = na + nb;
    for(int i = 0; i < na; ++i){
        c[i] = a[i];
    }

    for(int i = 0; i < nb; ++i){
        c[i + na] = b[i];
    }

    for(int i = 0; i < nc; ++i){
        cout << c[i] << " ";
    }
    cout << endl;
}

//Bai 12
void interleaveArrays(int a[], int na, int b[], int nb, int c[], int &nc){
    nc = na + nb;
    int j = 0;
    int k = 0;
    for(int i = 0; i < nc; ++i){
        if(j < na && (i % 2 == 0 || k >= nb)){
            c[i] = a[j++];
        }
        else if(k < nb){
            c[i] = b[k++];
        }
    }

    for(int i = 0; i < nc; ++i){
        cout << c[i] << " ";
    }
    cout << endl;
}

//Part 2: 2D Array
const int MAX = 100;
//Bai 1
void input2dArray(int arr[][MAX], int m, int n){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout << "Nhap vao gia tri cua arr[" << i << "][" << j << "]: "; cin >> arr[i][j];
        }
    }
}

//Bai 2
void output2dArray(int arr[][MAX], int m, int n){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//Bai 3
int sumArray(int arr[][MAX], int m, int n){
    int sum = 0;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            sum += arr[i][j];
        }
    }
    return sum;
}

//Bai 4
int sumDiagonal(int arr[][MAX], int m, int n){
    int sum = 0;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(i == j){
                sum += arr[i][j];
                if(m - i - 1 == n - j - 1 && m - 1 - i != i){
                    sum += arr[i][j];
                }
            }
        }
    }
    return sum;
}

//Bai 5
int findMin(int arr[][MAX], int m, int n){
    int MIN = arr[0][0];
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(MIN > arr[i][j]){
                MIN = arr[i][j];
            }
        }
    }
    return MIN;
}

//Bai 6
int countOccurrences(int arr[][MAX], int m, int n, int x){
    int count = 0;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(arr[i][j] == x){
                count++;
            }
        }
    }
    return count;
}

//bai 7
int countNumberofPrime(int arr[][MAX], int m, int n){
    int count = 0;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(checkPrime(arr[i][j])){
                count++;
            }
        }
    }
    return count;
}

//Bai 8
void removeElements(int arr[][MAX], int &m, int &n, int x){
    int count = 0;
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(arr[i][j] == x) count++;
        }
    }
    while(count != 0){
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(arr[i][j] == x){
                    for(int l = i; l < m; ++l){
                        for(int k = 0; k < n; ++k){
                            arr[l][k] = arr[l + 1][k];
                        }
                    }

                    for(int l = 0; l < m; ++l){
                        for(int k = j; k < n; ++k){
                            arr[l][k] = arr[l][k + 1];
                        }
                    }
                    m -= 1;
                    n -=1;
                }
            }
        }
        count--;
    }

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
//Part 1: 1D Array
    //Bai 1
    int x = 2;
    int n = 6;
    int arr[100];
    inputArray(arr, n);

    //Bai 2
    outputArray(arr, n);

    //Bai 3
    cout << "The sum of the arr: " << sumArray(arr, n) << endl;

    //Bai 4
    cout << "The minimum value of arr: " << findMin(arr, n) << endl;

    //Bai 5
    cout << "The pos of x in arr: " << findIndexOfX(arr, n, x) << endl;

    //Bai 6
    cout << "The number of occurrences is: " << countOccurrences(arr, n, x) << endl;

    //Bai 7
    cout << "Prime number in this arr: " << countNumberofPrime(arr, n) << endl;

    //Bai 8
    if(!isAscendingOrder(arr, n)){
        cout << "Not Ascending" << endl;
    }
    else{
        cout << "Ascending" << endl;
    
    }

    //Bai 9
    removeElements(arr, n, x);

    //Bai 10
    int idx = 2;
    int num_del = 2;
    removeElementsFromIndex(arr, n, idx, num_del);

    //Bai 11
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[100];
    int na = 4;
    int nb = 5;
    int nc;
    concatTwoArrays(a, na, b, nb, c, nc);

    //Bai 12
    interleaveArrays(a, na, b, nb, c, nc);

//Part 2: 2D Array
    int arr[MAX][MAX];
    int m = 3, n = 3;
    //Bai 1
    input2dArray(arr, m, n);

    //Bai 2
    output2dArray(arr, m, n);

    //Bai 3
    cout << "Tong gia tri cua mang la: " << sumArray(arr, m, n) << endl;

    //Bai 4
    cout << "Tong gia tri in cheo cua mang la: " << sumDiagonal(arr, m, n) << endl;

    //Bai 5
    cout << "Gia tri nho nhat trong mang la: " << findMin(arr, m, n) << endl;

    //Bai 6
    int x = 3;
    cout << "So luong phan tu " << x << " co trong mang la: " << countOccurrences(arr, m, n, x) << endl;

    //Bai 7
    cout << "So luong so nguyen to trong mang la: " << countNumberofPrime(arr, m, n) << endl;

    //Bai 8
    removeElements(arr, m, n, x);
    return 0;
}