//Bai 1
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Car {
char carMake[16];
char carModel[16];
int yearModel, quantity;
double cost;
};

void ReadData(const char *FileName, vector <Car> &inventory){
    fstream fout("data 1-1.txt", ios::in);
    if(!fout.is_open()){
        cout << "Cannot open file";
    }

    string ignore_line;
    getline(fout, ignore_line);
    Car tmp;
    while(fout >> tmp.carMake >> tmp.carModel >> tmp.yearModel >> tmp.cost >> tmp.quantity) inventory.push_back(tmp);
    fout.close();
}

void DisplayInv(vector <Car> &inventory){
    for(int i = 0; i < inventory.size(); ++i){
        cout << inventory[i].carMake << " " << inventory[i].carModel << " "
             << inventory[i].yearModel << " " << inventory[i].cost << " "
             << inventory[i].quantity << endl;
    }
}

void AddCar(vector <Car> &inventory, const Car &newcar){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].carMake, newcar.carMake) == 0 && strcmp(inventory[i].carModel, newcar.carModel) == 0 && inventory[i].yearModel == newcar.yearModel && inventory[i].cost == newcar.cost){
            inventory[i].quantity += newcar.quantity;
            cout << "Add successfully" << endl;
            return;
        }
        else{
            inventory.push_back(newcar);
            return;
        }
    }
}

void UpdateData(const char *FileName, vector <Car> &inventory){
    fstream fout(FileName, ios::out);
    fout << "Make " << "Model " << "Year " << "Cost " << "Quantity " << endl;
    for(int i = 0; i < inventory.size(); ++i){
        fout << inventory[i].carMake << " " << inventory[i].carModel << " "
             << inventory[i].yearModel << " " << inventory[i].cost << " "
             << inventory[i].quantity << endl;
    }
}

void SellCar(vector <Car> &inventory, char *Model, int quantity, int month, int year){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].carModel, Model) == 0){
            if(quantity < inventory[i].quantity){
                inventory[i].quantity -= quantity;
            }

            ofstream fout("Sale.txt", ios::app);
            if(!fout.is_open()){
                cout << "Cannot open file";
                return;
            }

            fout << inventory[i].carMake << " " << inventory[i].carModel << " "
                 << inventory[i].yearModel << " " << inventory[i].cost << " "
                 << inventory[i].quantity << " " << inventory[i].cost * quantity << " "
                 << month << " " << year << endl;
        }
    }
}

void RemoveCar(vector <Car> &inventory, Car &dltcar){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].carModel, dltcar.carModel) == 0 && strcmp(inventory[i].carMake, dltcar.carMake) == 0 && inventory[i].yearModel == dltcar.yearModel && inventory[i].cost == dltcar.cost){
            inventory.erase(inventory.begin() + i);
            i--;
        }
    }
}

double CalculateSale(const char *FileName, vector <Car> inventory, int month, int year){
    fstream fout(FileName);
    if(!fout.is_open()){
        cout << "Cannot open file";
    }

    string Make, Model;
    int CarYear, quantity, SaleYear, SaleMonth;
    double cost, TotalSale, SaleAmount;
    while(fout >> Make >> Model >> CarYear >> cost >> quantity >> SaleAmount >> SaleMonth >> SaleYear){
        if(SaleMonth == month && SaleYear == year) TotalSale += SaleAmount;
    }
    fout.close();
    return TotalSale;
}

void searchCar(vector <Car> &inventory, char *CarManu){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].carMake, CarManu) == 0){
            cout << inventory[i].carMake << " " << inventory[i].carModel << " "
                 << inventory[i].yearModel << " " << inventory[i].cost << " "
                 << inventory[i].quantity << endl;
        }
    }
}

void sortInv(vector <Car> &inventory){
    cout <<  "\t1. Sort cost in descending mode" << endl << "\t2. Sort code in ascending mode" << endl;

    int n;
    cout << "Please choose your option: "; cin >> n;
    Car temp;
    if(n == 1){
        for(int i = 0; i < inventory.size() - 1; ++i){
            for(int j = i + 1; j < inventory.size(); ++j){
                if(inventory[i].cost > inventory[j].cost){
                    temp = inventory[i];
                    inventory[i] = inventory[j];
                    inventory[j] = temp;
                }
            }
        }
        DisplayInv(inventory);
    }
    if(n == 2){
        for(int i = 0; i < inventory.size() - 1; ++i){
            for(int j = i + 1; j < inventory.size(); ++j){
                if(inventory[i].cost < inventory[j].cost){
                    temp = inventory[i];
                    inventory[i] = inventory[j];
                    inventory[j] = temp;
                }
            }
        }
        DisplayInv(inventory);
    }
}
int main(){
    vector <Car> inventory;
    ReadData("data 1-1.txt", inventory);
    DisplayInv(inventory);
    
    cout << endl;
    Car car1 = {"Ford", "Taurus", 2023, 7, 32000};
    Car car2 = {"Jojo", "Madara", 2024, 10, 29560};
    AddCar(inventory, car1);
    AddCar(inventory, car2);
    DisplayInv(inventory);
    
    cout << endl;
    RemoveCar(inventory, car2);
    SellCar(inventory, "Taurus", 3, 3, 2024);
    DisplayInv(inventory);
    double TotalSale = CalculateSale("Sale.txt", inventory, 3, 2024);
    cout << "TotalSale in this month and year is: " << "$" << TotalSale << endl;
    UpdateData("data 1-1.txt", inventory);
    searchCar(inventory, "Honda");
    sortInv(inventory);
    return 0;
}

//Bai 2
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

struct Player {
char name[16];
int numAssists, numGoals;
};

void ReadData(vector <Player> &inventory, const char* FileName){
    ifstream fin(FileName);
    if(!fin.is_open()){
        cout << "Cannot open file";
        return;
    }
    
    string ignore_line;
    getline(fin, ignore_line);
    string Token;
    Player tmp;
    while(getline(fin, Token, ',')){
        strcpy(tmp.name, Token.c_str());
        getline(fin, Token, ',');
        tmp.numAssists = stoi(Token);
        getline(fin, Token, '\n');
        tmp.numGoals = stoi(Token);
        inventory.push_back(tmp);
    }
    fin.close();
}

void Display(vector <Player> &inventory){
    cout << "Name " << "Assist" << " Goal " << endl;
    for(int i = 0; i < inventory.size(); ++i){
        cout << inventory[i].name << "," << inventory[i].numAssists << "," << inventory[i].numGoals << endl;
    }
}

void AddPlayer(vector <Player> &inventory, Player &players){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(players.name, inventory[i].name) == 0){
            inventory[i].numAssists += players.numAssists;
            inventory[i].numGoals += players.numGoals;
            return;
        }
        else{
            inventory.push_back(players);
            return;
        }
    }
}

void RemovePlayer(vector <Player> &inventory, char *Name){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].name, Name) == 0){
            inventory.erase(inventory.begin() + i);
            i--;
            return;
        }
    }
}

void UpdateData(vector <Player> &inventory, const char *FileName){
    ofstream fout(FileName);
    fout << "Name," << "NumberofAssists," << "NumberofGoals " << endl;
    for(int i = 0; i < inventory.size(); ++i){
        fout << inventory[i].name << "," << inventory[i].numAssists << "," << inventory[i].numGoals << endl;
    }
}

void UpdatePlayer(vector <Player> &inventory, Player &update){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].name, update.name) == 0){
            inventory[i].numAssists += update.numAssists;
            inventory[i].numGoals += update.numGoals;
        }
    }
}

void FindBestPlayer(vector <Player> &inventory){
    int max = 0;
    int j = -1;
    for(int i = 0; i < inventory.size(); ++i){
        if(inventory[i].numAssists * 0.4 + inventory[i].numGoals * 0.6 > max){
            j = i;
            max = inventory[i].numAssists * 0.4 + inventory[i].numGoals * 0.6;
        }
    }
    for(int i = j; i <= j; ++i){
        cout << "Best Player is: " << inventory[i].name << endl;
    }
}

void SearchPlayer(vector <Player> &inventory, char *Name){
    for(int i = 0; i < inventory.size(); ++i){
        if(strcmp(inventory[i].name, Name) == 0){
            cout << inventory[i].name << " " << inventory[i].numAssists << " " << inventory[i].numGoals << endl;
        }
    }
}

int main(){
    vector <Player> inventory;
    ReadData(inventory, "data 1-2.txt");
    Display(inventory);

    cout << endl;
    Player player1 = {"Dou Messi", 2, 3};
    // AddPlayer(inventory, player1);
    // UpdateData(inventory, "data 1-2.txt");
    Player player2 = {"Zukanopro", 100, 200};
    AddPlayer(inventory, player2);
    Display(inventory);
    cout << endl;
    FindBestPlayer(inventory);

    cout << endl;
    RemovePlayer(inventory, "Dou Messi");
    UpdateData(inventory, "data 1-2.txt");
    Display(inventory);
    SearchPlayer(inventory, "Phil Foden");
    return 0;
}

