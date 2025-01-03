#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

//Part 1: Conditional Statement
//Bai 1
bool TimeCheck(int hours, int mins, int seconds){
    if(hours >= 0 && hours < 24 && mins >= 0 && mins < 60 && seconds >= 0 && seconds < 60) return true;
    else{
        return false;
    }
}

//Bai 2
void StudentAnalyze(double Math, double Physic, double Chemistry){
    double total = Math + Physic + Chemistry;
    if(total >= 15 && Math >= 4 && Physic >= 4 && Chemistry >= 4){
        cout << "Pass" << endl;
        if(Math > 5 && Physic > 5 && Chemistry > 5) cout << "All subjects equally" << endl;
        else{
            cout << "All subjects unequally" << endl;
        }
    }
    else{
        cout << "Fail" << endl;
    }
}

//Bai 3
bool SquareCheck(double n){
    double square = sqrt(n);
    if(square * square == n) return true;
    else{
        return false;
    }
}

//Bai 4
bool NumberingCheck(int n){
    if(n % 2 == 0) return true;
    else{
        return false;
    }
}

//Bai 5
bool LeapYearCheck(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    else{
        return false;
    }
}

void DaysFromMonthYear(int month, int year){
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) cout << "31 days" << endl;
    else if(month == 4 || month == 6 || month == 9 || month == 11) cout << "30 days" << endl;
    else if(month == 2){
        if(LeapYearCheck(year)) cout << 28 + 1 << " days" << endl;
        else{
            cout << "28 days" << endl;
        }
    }
}

//Bai 6
void NumbertoText(int n){
    if(n < 0 || n > 9) return;
    else{
        switch(n){
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
        }
    }
}

//Bai 7
void NumberSorting(int a, int b, int c){
    int MAX = a;
    int MIN = a;
    if(b > MAX) MAX = b;
    else if(b < MIN) MIN = b;
    if(c > MAX) MAX = c;
    else if(c < MIN) MIN = c;
    cout << "Gia tri lon nhat: " << MAX << endl;
    cout << "Gia tri nho nhat: " << MIN << endl;

    int arr[3] = {a, b, c};
    for(int i = 0; i < 3; ++i){
        if(arr[i] != MAX && arr[i] != MIN){
            cout << "Ascending Order: " << MIN << " " << arr[i] << " " << MAX << endl;
            break;
        }
    }

}

//Bai 8
bool SquareTriangleCheck(int a, int b, int c){
    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) return true;
    else{
        return false;
    }
}

//Bai 9
void TriangleCout(int a, int b, int c){
    if(a + b > c || a + c > b || b + c > a){
        if(a == b && b == c && c == a) cout << "This is equilateral triangle" << endl;
        else if(a == b || b == c || a == c){
            if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) cout << "This is isosceles square triangle" << endl;
            else{
                cout << "This is isosceles triangle" << endl;
            }
        }
        else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) cout << "This is square triangle" << endl;
        else{
            cout << "This is scalene triangle" << endl;
        }
    }
    else{
        cout << "This triangle is not available" << endl;
    }
}

//Bai 10
double TaxiFare(double distance){
    double total = 0;
    if(distance == 1){
        total += 2;
        return total;
    }
    else if(distance >= 2 && distance <= 5){
        total = 2 + (distance - 1)*1.5;
        return total;
    }
    else if(distance >= 6){
        total = 2 + 4*1.5 + (distance - 5)*1;
        if(distance > 120){
            total = total*(1-(10*1.0/100));
        }
            return total;
    }

}

//Bai 11
void ElectricCal(double OldNum, double NewNum, double total){
    double Value = NewNum - OldNum;
    if(Value < 0) cout << "There is none of electric consuming" << endl;
    else{
        if(Value <= 100){
            total = Value * 1000;
            cout << total << endl;
        }
        else if(Value >= 101 && Value <= 150){
            total = 100 * 1000 + (Value - 100) * 1200;
            cout << total << endl;
        }
        else if(Value >= 151 && Value <= 200){
            total = 100 * 1000 + 50 * 1200 + (Value - 150) * 2000;
            cout << total << endl;
        }
        else if(Value >= 201){
            total = 100 * 1000 + 50 * 1200 + 50 * 2000 + (Value - 200) * 2500;
            cout << total << endl;
        }
    }
}

//Bai 12
double FineforCar(double speed){
    int STATIC_speed = 60;
    if(speed < STATIC_speed) return 0;
    else{
        double Differ = speed - STATIC_speed;
        if(Differ > 5 && Differ <= 10) return 28.45;
        if(Differ > 10 && Differ <= 20) return 101.61;
        if(Differ > 20 && Differ <= 35) return 223.53;
        if(Differ > 35) return 304.82;
    }
}

//Bai 13
void PrintASCII(int num){
    if(num <= 9){
        cout << num << endl;
        return;
    }
    else if(num >= 10){
        char c = 'A';
        if(num == 10){
            cout << c << endl;
        }
        else{
            c = c + (num - 10);
            cout << c << endl;
        }
    }
}

//Bai 14
void QuadraticEqual(int a, int b, int c){
    int delta = b*b - 4*a*c;
    if(delta < 0) cout << "Phuong trinh vo nghiem" << endl;
    else if(delta == 0) cout << "Phuong trinh co mot nghiem la: " << -b/(2*a) << endl;
    else if(delta > 0){
        cout << "Nghiem thu nhat cua phuong trinh: " << ((-b + sqrt(delta))* 1.0)/(2*a) << endl;
        cout << "Nghiem thu hai cua phuong trinh: " << ((-b - sqrt(delta))* 1.0)/(2*a) << endl;
    }
}

//Bai 15
void Calculate(int a, int b, char operators){
    switch(operators){
        case '+': cout << "a + b = " << a + b << endl; break;
        case '-': cout << "a - b = " << a - b << endl; break;
        case '*': cout << "a x b = "<< a * b << endl; break;
        case '/': cout << "a / b = " << a / b << endl; break;
        case '%': cout << "a % b = " << a % b << endl; break;
        default:    return;
    }
}

//Bai 16
void BankCheck(int accoutNum, char type, int minimum, double current){
    if(type == 's'){
        if(current < minimum) cout << "You have to pay for 10 dollars" << endl;
        else{
            double intrate = current * ((4*1.0)/100);
            cout << "Your current: " << "$" << current << ", your interesting rate: " << "$" << intrate << endl;
        }
    }
    else if(type == 'c'){
        if(current < minimum) cout << "You have to pay for 25 dollars" << endl;
        else{
            if(current - minimum <= 5000){
                double intrate = current * ((3*1.0)/100);
                cout << "Your current: $" << current << ", your interesting rate: " << intrate << endl; 
            }
            else{
                double intrate = current * ((5*1.0)/100);
                cout << "Your current: $" << current << ", your interesting rate: " << intrate << endl;
            }
        }
    }
}

//Bai 17
double BodyFatCounter(float bodyweight, double wristmeasurement, char gender){
    if(gender == 'g' || gender == 'w'){
        double waistmeasurement, hipmeasurement, forearmmeasurement;
        cout << "Chu vi vong eo: "; cin >> waistmeasurement;
        cout << "Chu vi vong hong: "; cin >> hipmeasurement;
        cout << "Chu vi cang tay: "; cin >> forearmmeasurement;
        double A1, A2, A3, A4, A5, B, bodyfat, BodyFatPercent;
        A1 = (bodyweight * 0.732) + 8.987;
        A2 = (wristmeasurement*1.0)/3.140;
        A3 = waistmeasurement * 0.157;
        A4 = hipmeasurement * 0.249;
        A5 = forearmmeasurement * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        bodyfat = bodyweight - B;
        BodyFatPercent = ((bodyfat * 100)*1.0)/bodyweight;
        return BodyFatPercent;
    }
    else if(gender == 'b' || gender == 'm'){
        double A1, A2;
        A1 = (bodyweight * 1.082) + 94.42;
        A2 = wristmeasurement * 4.15;
        double B = A1 - A2;
        double bodyfat = bodyweight - B;
        double BodyFatPercent = (bodyfat*100)/bodyweight;
        return BodyFatPercent;
    }
}

//Bai 18
string BMICal(double weight, double height){
    double BMI = weight*1.0/(height*height);
    if(BMI <= 18.5) return "UnderWeight";
    else if(BMI >= 18.5 && BMI < 25) return "Normal";
    else if(BMI >= 25 && BMI < 30) return "Overweight";
    else if(BMI >= 30) return "Obesity";
    else{
        return "Incorrect Input Value";
    }
}


//Part 2: Loop Statements
//Bai 1
int SumNum(int n){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        if(i % 4 == 0 && i % 5 != 0){
            sum += i;
        }
    }
    return sum;
}

//Bai 2
double sumNumerator(int n){
    double sum = 1;
    if(n <= 1) return 0;
    else{
        for(int i = 2; i <= n; ++i){
            sum += (i*1.0)/(i-1);
        }
        return sum;
    }
}

//Bai 3
int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int SumFactorial(int n){
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        sum += factorial(i);
    }
    return sum;
}

//Bai 4
void PrintDivisors(int n){
    int count = 0;
    int sum = 0;
    for(int i = 1; i <= 12; ++i){
        if(n % i == 0){
            cout << i << " ";
            count++;
            sum += i;
        }
    }
    cout << endl;
    cout << "The number of positive divisors: " << count << endl;
    cout << "Sum of all divisors: " << sum << endl;
}

//Bai 5
int FindLargestPrimeNumber(int n){
    if(n < 0 || n > 50) return 0;
    else{
        int MAX = 1;
        for(int i = 2; i <= n; ++i){
            if(i % 2 != 0 && i % 3 != 0 || i == 2 || i == 3){
                if(i > MAX)
                MAX = i;
            }
        }
        return MAX;
    }
}

//Bai 6
bool PrimeNumCheck(int a){
    if(a % 2 != 0 && a % 3 != 0 || a == 2 || a == 3){
        return true;
    }
    else{
        return false;
    }
}

void GCDFinder(int a, int b){
    if(PrimeNumCheck(a) || PrimeNumCheck(b)){
        cout << "GCD cua a va b la: " << 1 << endl;
    }
    else{
        int MIN = a;
        if(b < MIN) MIN = b;
        for(int i = 2; i <= MIN; ++i){
            if(a % i == 0 && b % i == 0){
                cout << "GCD cua a va b la: " << i << endl;
                break;
            }
        }
    }
}

void LCMFinder(int a, int b){
    int Time = a * b;
    int MAX = a;
    if(b > MAX) MAX = b;
    for(int i = MAX; i <= Time; ++i){
        if(i % a == 0 && i % b == 0){
            cout << "LCM cua a va b la: " << i << endl;
            break;
        }
    }
}

//Bai 7
void BinaryDigit(int n){
    if(n < 0) return;
    else{
        int remainer;
        string binary;
        while(n > 0){
            remainer = n % 2;
            binary = to_string(remainer) + binary;
            n = n / 2;
        }
        cout << "Binart digit: " << binary << endl;
    }
}

//Bai 8
void TablePrinting(){
    int S = 1;
    cout << "Table: " << endl;
    while(S < 10){
        int N = 1;
        while(N < 10){
            cout << N << " x " << S << " = " << N*S << "\t";
            N++;
        }
        cout << endl;
        S++;
    }
}

//Bai 9
void FlowerTower(int n){
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j < n - i; ++j){
            cout << " ";
        }
        for(int k = 0; k < 2 * i - 1; ++k){
            cout << "*";
        }
        cout << endl;
    }
}

//Bai 10
void CaloriesCount(){
    float minutes = 3.6;
    int n = 5;
    while(n < 31){
        cout << "Calories burn after " << n << " minutes: " << minutes*n << " calories" << endl;
        n += 5;
    }
}

//Bai 11
void SalaryCount(int n, int K, float x){
    int h = 1;
    float total = 0; 
    while(h < n + 1){
        float value = x*(10*1.0/100);
        total += x;
        x = x + value;
        h++;
    }
    cout << "Tong so tien la: " << total << endl;
}

//Bai 12
void CountDogChick(){
    for(int i = 1; i <= 36; ++i){
        for(int j = 1; j <= 36; ++j){
            if(4*i + j*2 == 100 && i + j == 36){
                cout << "So cho la: " << i << endl;
                cout << "So ga la: " << j << endl;
            }
        }
    }
}

void CountBuff(){
    for(int i = 1; i <= 100; ++i){
        for(int j = 1; j <= 100; ++j){
            for(int k = 1; k <= 100; ++k){
                if(i + j + k == 100 && 15*i + 9*j + k == 300){
                    cout << "Trau dung: " << i << " " << "Trau nam: " << j << " " << "Trau gia: " << k << endl;
                }
            }
        }
    }
}

//Bai 13
void TowerDefense(float A, float B, float Apercent, float Bpercent){
    float L = A;
    float K = B;
    int n = 0;
    while(A < B){
        A = A*(1+(Apercent*1.0/100));
        B = B*(1+(Bpercent*1.0/100));
        n++;
    }
    cout << "So nam de tp A lon hon hoac bang tp B la: " << n + 1 << endl;
}

//bai 14
void Fibonancii(int n){
    int l = n;
    int F0 = 0;
    int F1 = 1;
    n = n - 1;
    int Fn;
    while(n != 0){
        Fn = F1 + F0;
        F0 = F1;
        F1 = Fn;
        n--;
    }
    cout << "Fibonacci cua " << l << " la: " << Fn << endl;
}

//Bai 15
void PrintTallestShortest(float height){
    cout << "Enter height: "; cin >> height;
    float MIN = height;
    float MAX = height;
    while(height != 0){
        cout << "Enter height: "; cin >> height;
        if(height > MAX){
            MAX = height;
        }
        else if(height < MIN && height != 0){
            MIN = height;
        }
    }
    cout << "The height of the first student in the class: " << MIN << endl;
    cout << "The height of the last student in the class: " << MAX << endl;
}

//Bai 16
void SimpleCalculator(){
    int n;
    do{
        cout << "SIMPLE CALCULATOR" << endl;
        cout << "1.Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "0. Exit Program" << endl;
        cout << endl;
        cout << "Your Choice: "; cin >> n;
        int a, b;
        if(n == 1){
            cout << "Enter the first operand: "; cin >> a;
            cout << "Enter the second operand: "; cin >> b;
            cout << "Result: " << a + b << endl;
        }
        else if(n == 2){
            cout << "Enter the first operand: "; cin >> a;
            cout << "Enter the second operand: "; cin >> b;
            cout << "Result: " << a - b << endl;
        }
        else if(n == 3){
            cout << "Enter the first operand: "; cin >> a;
            cout << "Enter the second operand: "; cin >> b;
            cout << "Result: " << a * b << endl;
        }
        else if(n == 4){
            cout << "Enter the first operand: "; cin >> a;
            cout << "Enter the second operand: "; cin >> b;
            cout << "Result: " << a / b << endl;
        }
    }while(n != 0);
    cout << "You exited the program!" << endl;
}

//Bai 17
void TikTakClock(int &min, int sec){
    int l = sec;
    while(min != -1 ){
        sec = l;
        if(min >= 10){
            while(sec != -1){
                if(sec >= 10 && sec < 60){
                    cout << min << ":" << sec << endl;
                }
                else{
                    cout << min << ":" << "0" << sec << endl;
                }
                sec--;
            }
        }
        else if(min < 10 && min > 0){
            while(sec != -1){
                if(sec >= 10 && sec < 60){
                    cout << "0" << min << ":" << sec << endl;
                }
                else{
                    if(sec <= 5 && sec != 0 && min == 0){
                        cout << "0" << min << ":" << "0" << sec << endl;
                    }
                    else if(sec == 0){
                        cout << "0" << min << ":" << "0" << sec << endl;
                    }
                    else{
                        cout << "0" << min << ":" << "0" << sec << endl;
                    }
                }
                sec--;
            }
        }
        else{
            while(sec != -1){
                if(sec >= 10 && sec < 60 && min == 0){
                    cout << "0" << min << ":" << sec << endl;
                }
                else{
                    if(sec <= 5 && sec != 0 && min == 0){
                        cout << "0" << min << ":" << "0" << sec << " Tik-tok" << endl;
                    }
                    else if(sec == 0){
                        cout << "0" << min << ":" << "0" << sec << " Ding-dong" << endl;
                    }
                    else{
                        cout << "0" << min << ":" << "0" << sec << endl;
                    }
                }
                sec--;
            }
        }
        min--;
    }
}

//Bai 18
void CountOddEven(int n){
    int k = 0;
    while(n != 1){
        if(n % 2 != 0){
            int h = n;
            n = 3*n + 1;
            cout << "A" << k << " = 3 x " << h << " + 1 = " << n << endl;
        }
        else if(n % 2 == 0){
            int l = n;
            n = n / 2;
            cout << "A" << k << " = " << l << " / " << "2 = " << n << endl;
        }
        k++;
    }
    cout << "k = " << k << endl;
}

//Bai 19
void ASCIIChar(){
    int n = 66;
    char c = 66;
    cout << "Character" << "\tASCII Code" << endl;
    while(n < 123){
        if(n >= 66 && n <= 90 || n >= 97 && n <= 122)   cout << c << "\t\t" << n << endl;
        c++;
        n++;
    }
}

//Bai 20
void ReverseNum(int n){
    int remainer;
    int odd = 0;
    int even = 0;
    string reverse;
    while(n != 0){
        remainer = n % 10;
        if(remainer % 2 != 0){
            odd++;
        }
        else{
            even++;
        }
        n = n / 10;
        reverse = reverse + to_string(remainer);
    }
    cout << "The reverse is: " << reverse << endl;
    cout << "Number of odd is: " << odd << endl;
    cout << "Number of even is: " << even << endl;
}

int main(){
//Part 1: Conditional Statement
    //Bai 1
    int hours = 23;
    int mins = 32;
    int sec = 24;
    if(TimeCheck(hours, mins, sec)) cout << "Time is valid" << endl;
    else{
        cout << "Time is invalid" << endl;
    }

    //Bai 2
    double Math = 8.5;
    double Physic = 7;
    double Chemistry = 5.5;
    StudentAnalyze(Math, Physic, Chemistry);

    //Bai 3
    int square = 3;
    if(SquareCheck(square)) cout << "This is perfect square" << endl;
    else{
        cout << "This square is unperfect" << endl;
    }

    //Bai 4
    int n = 4;
    if(NumberingCheck(n)) cout << "This is odd number" << endl;
    else{
        cout << "This is even number" << endl;
    }

    //Bai 5
    int month = 2;
    int year = 1600;
    DaysFromMonthYear(month, year);

    //Bai 6
    int num = 6;
    NumbertoText(num);
    cout << endl;

    //Bai 7
    int a = 3, b = 5, c = 4;
    NumberSorting(a, b, c);

    //Bai 8
    if(SquareTriangleCheck(a, b, c)) cout << "This is square triangle" << endl;
    else{
        cout << "This is not square triangle" << endl;
    }

    //Bai 9
    int s = 3, g = 3, v = 3;
    TriangleCout(s, g, v);

    //bai 10
    double distance = 123;
    cout << "Gia tien phai tra cho taxi la: " << TaxiFare(distance) << endl;

    //Bai 11
    double OldNum = 300;
    double NewNum = 500;
    double total;
    ElectricCal(OldNum, NewNum, total);

    //Bai 12
    double speed = 100;
    cout << "The money you have to pay: " << "$" << FineforCar(speed) << endl;

    //Bai 13
    int hum = 17;
    PrintASCII(hum);

    //Bai 14
    int x = 1, y = 3, z = -4;
    QuadraticEqual(x, y, z);

    //Bai 15
    char operators = '+';
    Calculate(x, y, operators);

    //Bai 16
    int accNum = 123445;
    char l = 'c';
    int minimum = 2000; 
    double current = 7000;
    BankCheck(accNum, l, minimum, current);

    //Bai 17
    char gender = 'b';
    float bodyweight = 180;
    double wrist = 7.5;
    cout << "Your body fat percent is: %" << BodyFatCounter(bodyweight, wrist, gender) << endl;

    //Bai 18
    double weight = 60, height = 1.78;
    cout << "I am: " << BMICal(weight, height) << endl;


//Part 2: Loop Statement
    //Bai 1
    int n = 100;
    cout << "Tong gia tri la: " << SumNum(n) << endl;

    //Bai 2
    cout << "Tong gia tri cua phan so la: " << sumNumerator(n) << endl;

    //Bai 3
    cout << "Tong cua cac gia tri trong giai thua la: " << SumFactorial(n) << endl;

    //Bai 4
    PrintDivisors(12);

    //Bai 5
    cout << "The Largest Prime Number is: " << FindLargestPrimeNumber(n) << endl;

    //Bai 6
    int a = 123, b = 10;
    GCDFinder(a, b);
    LCMFinder(a, b);

    //Bai 7
    BinaryDigit(a);

    //Bai 8
    TablePrinting();

    //Bai 9
    FlowerTower(a);

    //Bai 10
    CaloriesCount();

    //Bai 11
    SalaryCount(a, b, n);

    //Bai 12
    CountDogChick();
    CountBuff();

    //Bai 13
    float A = 4400;
    float B = 5000;
    float Apercent = 40;
    float Bpercent = 20;
    TowerDefense(A, B, 40, 20);

    //Bai 14
    Fibonancii(a);

    //Bai 15
    float height;
    PrintTallestShortest(height);

    //Bai 16
    SimpleCalculator();  

    //Bai 17
    TikTakClock(a, a);

    //Bai 18
    CountOddEven(a);

    //Bai 19
    ASCIIChar();

    //Bai 20
    ReverseNum(a);
    return 0;
}