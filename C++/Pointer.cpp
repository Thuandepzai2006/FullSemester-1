#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

void swap(int* a, int* b);
void swap(int* &a, int* &b);
int sum(int* a, int* b);
int* summary(int* a, int* b);
void inputArray(int* &arr, int &n);
void outputArray(int* arr, int n);
int findMax(int* arr, int n);
int* findMaximum(int* arr, int n);
int* duplicateArray(int* arr, int n);
int* findLongestAscendingSubarray(int* arr, int n, int &length);
int* findLargestSumSubarray(int* arr, int n, int &largestSum, int &nRes);
void swapArrays(int* &a, int &na, int* &b, int &nb);
int* concatTwoArrays(int* a, int na, int* b, int nb, int &nc);
int* merge2Arrays(int* a, int na, int* b, int nb, int &nc);
void generateRandomMatrix(int** &mat, int &nRow, int &nCol);
int** generateMatrix(int* a, int na, int* b, int nb, int &nRow, int &nCol);
void swapRows(int** mat, int nRow, int nCol, int ir1, int ir2);
void swapColumns(int** mat, int nRow, int nCol, int ic1, int ic2);
void InputMatrix(int **mat, int Row, int Col);
void OutputMatrix(int **mat, int nRow, int nCol);
int** transposeMatrix(int** mat, int nRow, int nCol);
int** concatenate2MatricesH(int** a, int** b, int nRow, int nCol, int &resRow, int &resCol);
int** concatenate2MatricesV(int** a, int** b, int nRow, int nCol, int &resRow, int &resCol);
bool multiplyMatrices(int** a, int aRow, int aCol, int** b, int bRow, int bCol, int** &res, int &resRow, int &resCol);
int** findSubmatrix(int** mat, int nRow, int nCol, int &subRow, int &subCol);
int RemoveDuplicate(int *arr, int n);
void RemoveDuplicateLetter(char *str);
int findMostFrequent(int *arr, int n, int &frequency);

int main(){
    //Bai 1
    // int a = 3;
    // int b = 5;
    // swap(&a, &b);
    // cout << a << " " << b;

    //Bai 2
    // int a = 5;
    // int b = 3;
    // cout << sum(&a, &b) << endl;
    // int tong = *summary(&a, &b);
    // cout << tong << endl;

    //Bai 3
    // int n;
    // int *arr;
    // arr = new int[n];
    // inputArray(arr, n);

    //Bai 4
    // outputArray(arr, n);

    //Bai 5
    // findMax(arr, n);
    // int GTLN = *findMaximum(arr, n);
    // cout << GTLN;

    //Bai 6
    // int *duplicateArr = duplicateArray(arr, n);
    // for(int i = 0; i < n; ++i){
    //     cout << duplicateArr[i];
    // }
    // delete []arr;

    //Bai 7
    // int length = 0;
    // int* longestSubarray = findLongestAscendingSubarray(arr, n, length);
    // cout << "Longest ascending subarray length: " << length << endl;
    // cout << "The subarray is: ";
    // for (int i = 0; i < length; ++i) {
    //     cout << longestSubarray[i] << " ";
    // }
    // cout << endl;
    // delete[] longestSubarray;

    //Bai 9
    // int n = 8;
    // int len1 = 3;
    // int len2 = 6;
    // int *arr1 = NULL;
    // arr1 = new int[len1];
    // int *arr2 = NULL;
    // arr2 =  new int[len2];
    // for(int i = 0; i < len1 ; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr1[i];
    // }

    // for(int i = 0; i < len2; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr2[i];
    // }

    // for(int i = 0; i < len1; ++i){
    //     cout << arr1[i] << " ";
    // }

    // cout << "\n";
    // for(int i = 0; i < len2; ++i){
    //     cout << arr2[i] << " ";
    // }
    
    // swapArrays(arr1, len1, arr2, len2);

    // cout << "\n";

    // for(int i = 0; i < len1; ++i){
    //     cout << arr1[i] << " ";
    // }
    
    // cout << "\n";

    // for(int i = 0; i < len2; ++i){
    //     cout << arr2[i] << " ";
    // }

    // delete []arr1;
    // delete []arr2;

    //Bai 10
    // int len1 = 3;
    // int len2 = 4;
    // int len3;
    // int *arr1 = new int[len1];
    // int *arr2 = new int [len2];
    // for(int i = 0; i < len1; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr1[i];
    // }

    // for(int i = 0; i < len2; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr2[i];
    // }

    // int* result = concatTwoArrays(arr1, len1, arr2, len2, len3);
    // for(int i = 0; i < len3; ++i){
    //     cout << result[i];
    // }

    //Bai 11
    // int len1 = 3;
    // int len2 = 4;
    // int len3;
    // int *arr1;
    // arr1 = new int[len1];
    // int *arr2;
    // arr2 = new int[len2];
    // for(int i = 0; i < len1; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr1[i];
    // }

    // for(int i = 0; i < len2; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr2[i];
    // }

    // int *result = merge2Arrays(arr1, len1, arr2, len2, len3);
    // for(int i = 0; i < len3; ++i){
    //     cout << result[i] << " ";
    // }
    // delete []arr1;
    // delete []arr2;

    //Bai 12
    // int row;
    // int col;
    // int **mat;
    // cout << "Nhap so hang: "; cin >> row;
    // cout << "Nhap so cot: "; cin >> col;
    // generateRandomMatrix(mat, row, col);
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < row; ++i){
    //     delete []mat;
    // }
    // delete []mat;

    //Bai 13
    // int len1;
    // int len2;
    // cout << "Nhap chieu dai cua mang so mot: "; cin >> len1;
    // cout << " Nhap chieu dai cua mang so hai: "; cin >> len2;
    // int *arr1 = new int[len1];
    // int *arr2 = new int [len2];
    // int row;
    // int col;
    // for(int i = 0; i < len1; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr1[i];
    // }

    // for(int i = 0; i < len2; ++i){
    //     cout << "Nhap gia tri " << i << ": "; cin >> arr2[i];
    // }

    // int **result = generateMatrix(arr1, len1, arr2, len2, row, col);
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < row; ++i){
    //     delete []result[i];
    // }
    // delete []result;
    // delete []arr1;
    // delete []arr2;

    //Bai 14    
    // int row, col;
    // cout << "Nhap so hang: "; cin >> row;
    // cout << "Nhap so cot: "; cin >> col;
    // int **mat;
    // mat = new int *[row];
    // for(int i = 0; i < row; ++i){
    //     mat[i] = new int[col];
    // }

    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cin >> mat[i][j];
    //     }
    // }

    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // swapRows(mat, row, col, 0, row - 1);
    // cout << endl;
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // swapColumns(mat, row, col, 0, col - 1);
    // cout << endl;
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < row; ++i){
    //     delete []mat[i];
    // }
    // delete []mat;

    //Bai 15
    // int row, col;
    // cout << "Nhap so hang: "; cin >> row;
    // cout << "Nhap so cot: "; cin >> col;
    // int **mat;
    // mat = new int *[row];
    // for(int i = 0; i < row; ++i){
    //     mat[i] = new int[col];
    // }

    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cin >> mat[i][j];
    //     }
    // }
    // cout << endl;

    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // int **result = transposeMatrix(mat, row, col);
    // for(int i = 0; i < col; ++i){
    //     for(int j = 0; j < row; ++j){
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Bai 16
    // int row, col;
    // cout << "Nhap so hang: "; cin >> row;
    // cout << "Nhap so cot: "; cin >> col;
    // int **arr1, **arr2;
    // arr1 = new int *[row];
    // for(int i = 0; i < row; ++i){
    //     arr1[i] = new int[col];
    // }

    // arr2 = new int *[row];
    // for(int i = 0; i < row; ++i){
    //     arr2[i] = new int[col];
    // }

    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cin >> arr1[i][j];
    //     }
    // }

    // cout << endl;
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cin >> arr2[i][j];
    //     }
    // }

    // cout << endl;
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << arr1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // cout << endl;
    // for(int i = 0; i < row; ++i){
    //     for(int j = 0; j < col; ++j){
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int resRow;
    // int resCol;
    // cout << endl;
    // int **result = concatenate2MatricesV(arr1, arr2, row, col, resRow, resCol);
    // for(int i = 0; i < resRow; ++i){
    //     for(int j = 0; j < resCol; ++j){
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int **resultt = concatenate2MatricesH(arr1, arr2, row, col, resRow, resCol);
    // for(int i = 0; i < resRow; ++i){
    //     for(int j = 0; j < resCol; ++j){
    //         cout << resultt[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < resRow; ++i){
    //     delete []arr1[i];
    //     delete []arr2[i];
    // }

    // delete[]arr1;
    // delete[]arr2;
    // delete[]result;
    // delete[]resultt;

    //Bai 17
    // int arow, brow;
    // int acol, bcol;
    // int **arr1;
    // int **arr2;
    // cout << "Nhap so hang mang 1: "; cin >> arow;
    // cout << "Nhap so cot mang 1: "; cin >> acol;
    // arr1 = new int*[arow];
    // for(int i = 0; i < arow; ++i){
    //     arr1[i] = new int[acol];
    // }

    // cout << "Nhap so hang mang 2: "; cin >> brow;
    // cout << "Nbap so cot mang 2: "; cin >> bcol;
    // arr2 = new int *[brow];
    // for(int i = 0; i < brow; ++i){
    //     arr2[i] = new int[bcol];
    // }

    // for(int i = 0; i < arow; ++i){
    //     for(int j = 0; j < acol; ++j){
    //         cout << "Nhap arr1[" << i << "][" << j << "]:"; cin >> arr1[i][j];
    //     }
    // }

    // cout << endl;
    // for(int i = 0; i < brow; ++i){
    //     for(int j = 0; j < bcol; ++j){
    //         cout << "Nhap arr2[" << i << "][" << j << "]:"; cin >> arr2[i][j];
    //     }
    // }

    // for(int i = 0; i < arow; ++i){
    //     for(int j = 0; j < acol; ++j){
    //         cout << arr1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    // for(int i = 0; i < brow; ++i){
    //     for(int j = 0; j < bcol; ++j){
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    // int resRow;
    // int resCol;
    // int **res;
    // int result = multiplyMatrices(arr1, arow, acol, arr2, brow, bcol, res, resRow, resCol);
    // if(result){
    //     for(int i = 0; i < resRow; ++i){
    //         for(int j = 0; j < resCol; ++j){
    //             cout << res[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    // else{
    //     cout << "This is invalid";
    // }

    // for(int i = 0; i < arow; ++i){
    //     delete []arr1[i];
    // }
    // for(int i = 0; i <brow; ++i){
    //     delete []arr2[i];
    // }
    // for(int i = 0; i < resRow; ++i){
    //     delete res[i];
    // }
    
    // delete []arr1;
    // delete []arr2;
    // delete []res;

    //Bai 18
    // int **mat;
    // int nRow;
    // int nCol;
    // cout << "Nhap so hang cua ma tran: "; cin >> nRow;
    // cout << "Nhap so cot cua ma tran: "; cin >> nCol;
    // mat = new int *[nRow];
    // for(int i = 0; i < nRow; ++i){
    //     mat[i] = new int[nCol];
    // }
    // int subRow;
    // int subCol;
    // for(int i = 0; i < nRow; ++i){
    //     for(int j = 0; j < nCol; ++j){
    //         cout << "Mang[" << i << "][" << j << "]: "; cin >> mat[i][j];
    //     }
    // }
    // for(int i = 0; i < nRow; ++i){
    //     for(int j = 0; j < nCol; ++j){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // cout << "Nhap so hang tim gia tri: "; cin >> subRow;
    // cout << "Nhap so cot tim gia tri: "; cin >> subCol;
    // int** result = findSubmatrix(mat, nRow, nCol, subRow, subCol);
    // cout << "Submatrix with maximum sum:" << endl;
    // for (int i = 0; i < subRow; ++i) {
    //     for (int j = 0; j < subCol; ++j) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // delete[] result;

    // for (int i = 0; i < nRow; ++i) {
    //     delete[] mat[i];
    // }
    // delete[] mat;

    //Bai 19
    int arr[] = {1, 2, 5, 2, 1, 7, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newSize = RemoveDuplicate(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//Bai 1
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int *&a,int *&b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Bai 2
int sum(int* a, int* b){
    return *a + *b;
}
int* summary(int* a, int* b){
    int *result = new int;
    *result = *a + *b;
    return result;
}

//Bai 3
void inputArray(int* &arr, int &n){
    cout << "Nhap vao so luong phan tu: "; cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> *(arr + i);
    }
}

//Bai 4
void outputArray(int* arr, int n){
    for(int i = 0; i < n; ++i){
        cout << *(arr + i) << " ";
    }
}

//Bai 5
int findMax(int* arr, int n){
    int max = *(arr + 0);
    for(int i = 0; i < n; ++i){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
    }
    cout << max << endl;
}
int* findMaximum(int* arr, int n){
    int *result = new int;
    int max = *(arr + 0);
    for(int i = 0; i < n; ++i){
        if(max < *(arr + i)){
            max = *(arr + i);
        }
    }
    *result = max;
    return result;
}

//Bai 6
int* duplicateArray(int* arr, int n){
    int *ptr = new int[n];
    for(int i = 0; i < n; ++i){
        *(ptr + i) = *(arr + i);
    }
    return ptr;
}

//Bai 7
int* findLongestAscendingSubarray(int* arr, int n, int &length){
    int i = 0;
    int j = 0;
    int start = 0;
    int end = 0;
    while(i < n){
        if(i > 0 && arr[i] < arr[i - 1]){
            j = i;
        }
        if((end - start) < (i - j)){
            end = i;
            start = j;
        }
        ++i;
    }
    length = end - start + 1;
    int *subArray = new int[length];
    for(int i = 0; i < n; ++i){
        subArray[i] = arr[i + start];
    }
    return subArray;
}

//Bai 8
int* findLargestSumSubarray(int* arr, int n, int &largestSum, int &nRes){
    int max_right = 0;
    int max_left = 0;
    int max_sum = arr[0];
    int current_sum = 0;

    for (int i = 0; i < n; ++i){
        if(current_sum == 0)
            max_left = i;
        
        current_sum += arr[i];
        if (current_sum > max_sum){
            max_sum = current_sum;
            max_right = i;
        }   
        if (current_sum < 0)
            current_sum = 0;
    }

    nRes = max_right - max_left + 1;
    int* subarr = new int[nRes];

    for (int i = 0; i < nRes; ++i){
        subarr[i] = arr[i + max_left];
    }

    return subarr;
}

//Bai 9
void swapArrays(int* &a, int &na, int* &b, int &nb){
    int *temp = a;
    a = b;
    b = temp;

    int TempSize = na;
    na = nb;
    nb = TempSize;
}

//Bai 10
int* concatTwoArrays(int* a, int na, int* b, int nb, int &nc){
    nc = na + nb;
    int *length;
    length = new int[nc];
    for(int i = 0; i < na; ++i){
        length[i] = a[i];
    }

    for(int i = 0; i < nb; ++i){
        length[na + i] = b[i];
    }
    return length;
}

//Bai 11
int* merge2Arrays(int* a, int na, int* b, int nb, int &nc){
    nc = na + nb;
    int *length;
    length = new int[nc];
    for(int i = 0; i < na; ++i){
        *(length + i) = *(a + i);
    }

    for(int i = 0; i < nb; ++i){
        length[na + i] = b[i];
    }
    int max = *(length + 0);
    for(int i = 0; i < nc; ++i){
       for(int j = i + 1; j < nc; ++j){
        if(length[i] < length[j]){
            int temp =  length[i];
            length[i] = length[j];
            length[j] = temp;
            }
        }
    }
    return length;
}

//Bai 12
void generateRandomMatrix(int** &mat, int &nRow, int &nCol){
    mat = new int*[nRow];
    for(int i = 0; i < nRow; ++i){
        mat[i] = new int[nCol];
    }

    srand(time(0));
    for(int i = 0; i < nRow; ++i){
        for(int j = 0; j < nCol; ++j){
            mat[i][j] = rand() % 100;
        }
    }
}

//Bai 13
int** generateMatrix(int* a, int na, int* b, int nb, int &nRow, int &nCol){
    nRow = na;
    nCol = nb;
    int **arr = new int*[nRow];
    for(int i = 0; i < nRow; ++i){
        arr[i] = new int[nCol];
    }

    for(int i = 0; i < nRow; ++i){
        for(int j = 0; j < nCol; ++j){
            arr[i][j] = a[i] * b[j];
        }
    }
    return arr;
}

//Outside
void InputMatrix(int **mat, int Row, int Col){
    for(int i = 0; i < Row; ++i){
        for(int j = 0; j < Col; ++j){
            cin >> mat[i][j];
        }
    }
}

void OutputMatrix(int **mat, int nRow, int nCol){
    for(int i = 0; i < nRow; ++i){
        for(int j = 0; j < nCol; ++j){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

//Bai 14
void swapRows(int** mat, int nRow, int nCol, int ir1, int ir2){
    int *temp = mat[ir1];
    mat[ir1] = mat[ir2];
    mat[ir2] = temp;
}

void swapColumns(int** mat, int nRow, int nCol, int ic1, int ic2){
        for(int i = 0; i < nRow; ++i){
            int temp = mat[i][ic1];
            mat[i][ic1] = mat[i][ic2];
            mat[i][ic2] = temp;
        }
}

//Bai 15
int** transposeMatrix(int** mat, int nRow, int nCol){
    int **transpose = new int *[nCol];
    for(int i = 0; i < nCol; ++i){
        transpose[i] = new int[nRow];
    }

    for(int i = 0; i < nRow; ++i){
        for(int j = 0; j < nCol; ++j){
            transpose[j][i] = mat[i][j];
        }
    }
    return transpose;
}

//Bai 16
int** concatenate2MatricesV(int** a, int** b, int nRow, int nCol, int &resRow, int &resCol){
    resRow = nRow * 2;
    resCol = nCol;
    int **result = new int *[resRow];
    for(int i = 0; i < resRow; ++i){
        result[i] = new int[nCol];
    }

    for(int i = 0; i < nRow; ++i){
        for(int j = 0; j < nCol; ++j){
            result[i][j] = a[i][j];
        }
    }

    for(int i = 0; i < nRow; ++i){
        for(int j = 0; j < nCol; ++j){
            result[nRow + i][j] = b[i][j];
        }
    }
    return result;
}

int** concatenate2MatricesH(int** a, int** b, int nRow, int nCol, int &resRow, int &resCol){
    resCol = nCol * 2;
    resRow = nRow;
    int **result =  new int *[resRow];
    for(int i = 0; i < resRow; ++i){
        result[i] = new int[resCol];
    }
    for(int i = 0; i < resRow; ++i){
        for(int j = 0; j < nCol; ++j){
            result[i][j] = a[i][j];
        }
    }

    for(int i = 0; i < resRow; ++i){
        for(int j = 0; j < nCol; ++j){
            result[i][nCol + j] = b[i][j];
        }
    }
    return result;
}

//Bai 17
bool multiplyMatrices(int** a, int aRow, int aCol, int** b, int bRow, int bCol, int** &res, int &resRow, int &resCol){
    if(aCol != bRow){
        return false;
    }
    else{
        resRow = aRow;
        resCol = bCol;
        res = new int *[resRow];
        for(int i = 0; i < resRow; ++i){
            res[i] = new int[resCol];
        }
        int k = 0;
        int j = 0;
        int i = 0;
        int l = 0;
        int sum = 0;
        while(i < resRow){
            l = 0;
            while(l < resCol){
                k = 0;
                sum = 0;
                while(k < resRow && j < resCol){
                    sum += a[i][k] * b[k][l];
                    k++;
                }
                res[i][l] = sum;
                l++;
            }
            i++;
        }
        return true;
    }   
}

//Bai 18
int** findSubmatrix(int** mat, int nRow, int nCol, int &subRow, int &subCol){
    int **result = new int*[subRow];
    for(int i = 0; i < subRow; ++i){
        result[i] = new int[subCol];
    }
    int max = -100;
    int i = 0;
    int maxI = 0;
    int maxJ = 0;
    while(i + subRow <= nRow){
        int j = 0;
        while(j + subCol <= nCol){
            int sum = 0;
            int x = 0;
            while (x < subRow) {
                int y = 0;
                while (y < subCol) {
                    sum += mat[i + x][j + y];
                    y++;
                }
                x++;
            }
            if(sum > max){
                max = sum;
                maxI = i;
                maxJ = j;
            }
            j++;
        }
        i++;
    }
    for(int i = 0; i < subRow; ++i){
        for(int j = 0; j < subCol; ++j){
            result[i][j] = mat[maxI + i][maxJ + j];
        }
    }
    return result;
}

//Bai 19
int RemoveDuplicate(int *arr, int n){
    int *result = arr;                                                                  
    int *current = arr;
    for(int i = 0; i < n; ++i){
        bool checkDup = false;
        for(int *temp = arr; temp < result; ++temp){
            if(*temp == *current){
                checkDup = true;
                break;
            }
        }
        if(!checkDup){
            *result = *current;
            ++result;
        }
        ++current;
    }
    return result - arr;
}

//Bai 20
int findMostFrequent(int *arr, int n, int &frequency){
    int *out = arr;
    int mostFrequency = *arr;
    frequency = 0;

    for(; out < arr + n; ++out){
        int count = 0;
        int *inner = arr;

        for(; inner < arr + n; ++inner){
            if(*inner == *out){
                count++;
            }
        }
        if(count > frequency){
            frequency = count;
            mostFrequency = *out;
        }
    }
    return mostFrequency;
}

//Bai 19
int RemoveDuplicate(int *arr, int n){
    int *result = arr;
    int *current = arr;
    for(int i = 0; i < n; ++i){
        bool checkDup = false;
        for(int *temp; temp < result; ++temp){
            if(*temp == *current){
                checkDup = true;
                break;
            }
        }
        if(!checkDup){
            *result = *current;
            result++;
        }
        current++;
    }
    return result - arr;
}

//Bai 19
int RemoveDuplicate(int *arr, int n){
    int *result = arr; 
    int *current = arr;
    for(int i = 0; i < n; ++i){
        bool checkDup = false;
        for(int *temp = 0; temp < result; ++temp){
            if(*current == *temp){
                checkDup = true;
                break;
            }
        }
        if(!checkDup){
            *result = *current;
            result++;
        }
        current++;
    }
    return result - arr;
}

//Bai 20
int findMostFrequent(int *arr, int n, int &frequency){
    int *outer = arr;
    int MostFrenquent = *arr;
    int frequent = 0;
    for(; outer < arr + n; ++outer){
        int count = 0;
        int *inner = arr;

        for(; inner < arr + n; ++inner){
            if(*inner == *outer){
                count++;
            }
        }
        if(count > frequency){
            frequency = count;
            MostFrenquent = *outer;
        }
    }
    return MostFrenquent;
}

//Bai 20
int findMostFrequent(int *arr, int n, int &frequency){
    int *outer = arr;
    int mostFrequent = *arr;
    frequency = 0;
    for(; outer < arr + n; ++outer){
        int count = 0;
        int *inner = arr;
        for(; inner < arr + n; ++inner){
            if(*inner == *outer){
                count++;
            }
        }
        if(count > frequency){
            frequency = count;
            mostFrequent = *outer;
        }
    }
    return mostFrequent;
}

//Bai 19
int RemoveDuplicate(int *arr, int n){
    int *result = arr;
    int *current = arr;
    for(int i = 0; i < n; ++i){
        bool checkDup = false;
        for(int *temp = 0; temp < result; ++temp){
            if(*temp == *current){
                checkDup = true;
                break;
            }
        }
        if(!checkDup){
            *result = *current;
            result++;
        }
        current++;
    }
    return result - arr;
}

//Bai 11



