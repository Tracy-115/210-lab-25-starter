#include <iostream>
#include <chrono>
#include <vector>
#include <string>
#include <list>
#include <set>
using namespace std;
using namespace std::chrono;

int main() {
    
    ifstream fin("code.txt");
    if (!fin.is_open()){
        cout << "Could not open the file :'(" << endl;
    }

    vector<int>data;
    string code;
    while(fin>>code){
        data.push_back(code);
    }
    fin.close();

    //ONE
    vector<int> numbers;
    auto start = high_resolution_clock::now();
    for (const auto &c : data){
        numbers.push_back(c);
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    long long vectorT = duration.count();
    
    //TWO
    list<string> lists;
    auto start = high_resolution_clock::now();
    for (const auto &c : data){
        lists.push_back(c);
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    long long listT = duration.count();
    return 0;

    //THREE
    set<string> SET;
    auto start = high_resolution_clock::now();
    for (const auto &c : data){
        SET.insert(c);
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    long long setT = duration.count();
    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/