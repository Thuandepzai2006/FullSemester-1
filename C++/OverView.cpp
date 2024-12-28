#include <iostream>

using namespace std;

typedef unsigned int unit;

//Bai 1
void printHelloWorld(){
    cout << "Hello World!" << endl;
}

//Bai 2
void printSyntax(){
    cout << "C Language Basic Syntax Rules:" << endl;
    cout << "\t1. Lowercase letters are signficant" << endl;
    cout << "\t2. Main is where program execution begins" << endl;
    cout << "\t3. Opening and closing braces enclose program statements in a routine" << endl;
    cout << "\t4. All program statements must be terminated by a semicolon" << endl;
}

//Bai 3
void printCal(){
    int sum = 321 - 123;
    cout << "The difference: " << sum << endl;
}

//Bai 4
int printCalculate(int a, int b){
    int sum = a - b;
    return sum;
}

//Bai 5
int printValue(int x){
    int value = x*x*x  - 5*x*x + 6;
    return value;
}

//Bai 6
float Perimeter(float r){
    float Perimeter = r * 2 * 3.14; 
    return Perimeter;
}

float Area(float r){
    float Area = r * r * 3.14;
    return Area;
}

//Bai 7
float LiterCal(float D, float m){
    float V = m / D*1.0;
    return V;
}

//Bai 8
float TimeCal(float s, float v){
    return s*1.0/v;
}

//Bai 9
float VATCal(float change){
    float VAT = change + (change*1.0*(10*1.0/100));
    return VAT;
}

//Bai 10
void SwapVal(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

//Bai 11
void ConvertTime(int second){
    int g = 0;
    int sec, min, hour;
    g = second % 60;
    sec = g;
    second = second / 60;
    g = second % 60;
    min = g;
    second = second / 60;
    hour = second;
    cout << hour << ":" << min << ":" << sec << endl;
}

//Bai 12
float GravityCal(float m1, float m2, float d){
    float k = 6.67E-11;
    float F = k*1.0*((m1*m2)*1.0/(d*d));
    return F;
}

//Bai 13
int BagCal(int x){
    int BagNum = x / 20;
    int g = 0;
    g = x % 20;
    if(g != 0){
        BagNum++;
    }
    return BagNum;
}

//Bai 14
void CardCount(int money){
    int tendollars, fivedollars, twodollars, onedollar;
    int g;
    g = money % 10;
    tendollars = money / 10;
    money = g;
    g = money % 5;
    fivedollars = money / 5;
    money = g;
    g = money % 2;
    twodollars = money / 2;
    money = g;
    onedollar = money;
    cout << "Number of each money card: " << endl;
    cout << "\tTen dollars: " << tendollars << endl;
    cout << "\tFive dollars: " << fivedollars << endl;
    cout << "\tTwo dollars: " << twodollars << endl;
    cout << "\tOne dollar: " << onedollar << endl;
}

//Bai 15
void BottleCardCount(int bottlNum, unit price,  unit userpaid){
    int Total = bottlNum * price;
    if(userpaid - Total == 0) cout << "Do not have change";
    if(userpaid - Total != 0){
        int g = 0, tendollars, fivedollars, twodollars, onedollar;
        int money = userpaid - Total;
        g = money % 10;
        tendollars = money / 10;
        money = g;
        g = money % 5;
        fivedollars = money / 5;
        money = g;
        g = money % 2;
        twodollars = money / 2;
        money = g;
        onedollar = money;
        cout << "Number of each money card: " << endl;
        cout << "\tTen dollars: " << tendollars << endl;
        cout << "\tFive dollars: " << fivedollars << endl;
        cout << "\tTwo dollars: " << twodollars << endl;
        cout << "\tOne dollar: " << onedollar << endl;
    }
}

//Bai 16
int Mutiply(int x, int y){
    int g, mutiply = 0;
    g = y % 10;
    mutiply += g*x;
    y = y / 10;
    g = y % 10;
    mutiply += g*x*10;
    y = y / 10;
    g = y % 10;
    mutiply += g*x*100;
    return mutiply;
}

//Bai 17
double BMICal(double weight, double height){
    double BMI = weight*1.0/(height*height);
    return BMI;
}

//Bai 18
int TotalTime(int n, int arr[]){
    int TotalTime = 0;
    for(int i = 0; i < n; ++i){
        TotalTime += arr[i];
    }
    return TotalTime;
}

int main(){
    //Bai 1
    printHelloWorld();

    //Bai 2
    printSyntax();

    //Bai 3
    printCal();

    //Bai 4
    int a = 10;
    int b = 5;
    int sum = printCalculate(a, b);
    cout << "The difference: " << sum << endl;

    //Bai 5
    int x = 2;
    int value = printValue(x);
    cout << "The difference: " << value << endl;

    //Bai 6
    float r = 3.2;
    cout << "Perimeter of circle: " << Perimeter(r) << endl;
    cout << "Area of circle: " << Area(r) << endl;

    //Bai 7
    float D = 3.2;
    float m = 1.2;
    cout << "The amount of water: " << LiterCal(D, m) << endl;

    //Bai 8
    float s = 3.2;
    float v = 30;
    cout << "Time to take: " << TimeCal(s, v) << endl;

    //Bai 9
    float change = 13000;
    cout << "Change after the VAT: " << VATCal(change) << endl;

    //Bai 10
    SwapVal(a, b);
    cout << "a after swap: " << a << " and b after swap: " << b << endl;

    //Bai 11
    int second = 9622;
    ConvertTime(second);

    //Bai 12
    float m1 = 10;
    float m2 = 20;
    float d = 30;
    cout << "The value of Gravity is: " << GravityCal(m1, m2, d) << endl;

    //Bai 13
    int rice = 21;
    cout << "The number of bag-needed: " << BagCal(rice) << endl;

    //Bai 14;
    int money = 98;
    CardCount(money);   

    //Bai 15
    int bottleNum = 5;
    unit price = 10;
    unit userpaid = 64;
    BottleCardCount(bottleNum, price, userpaid);

    //Bai 16
    int t = 763;
    int y = 23;
    cout << "The Number after multiply: " << Mutiply(t, y) << endl;

    //Bai 17
    double weight = 30;
    double height = 1.72;
    cout << "The BMI is: " << BMICal(weight, height) << endl;

    //Bai 18
    int arr[] = {2, 3, 6, 7};
    int n = 4;
    cout << "The total time of " << n << " runners is: " << TotalTime(n, arr) << endl;
    return 0;
}