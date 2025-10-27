#include <iostream>
#include <chrono>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <fstream>
using namespace std;
using namespace std::chrono;

int main() {
    
    ifstream fin("codes.txt");
    if (!fin.is_open()){
        cout << "Could not open the file :'(" << endl;
    }

    vector<string>data;
    string code;
    while(fin>>code){
        data.push_back(code);
    }
    fin.close();

    //ONE
    vector<string> numbers;
    auto start = high_resolution_clock::now();
    for (const auto &c : data){
        numbers.push_back(c);
    }
    auto end = high_resolution_clock::now();
    auto durationVECTOR = duration_cast<microseconds>(end - start);
    long long vectorT = durationVECTOR.count();
    //TWO
    list<string> lists;
    start = high_resolution_clock::now();
    for (const auto &c : data){
        lists.push_back(c);
    }
    end = high_resolution_clock::now();
    auto durationLIST = duration_cast<microseconds>(end - start);
    long long listT = durationLIST.count();
    //THREE
    set<string> SET;
    start = high_resolution_clock::now();
    for (const auto &c : data){
        SET.insert(c);
    }
    end = high_resolution_clock::now();
    auto durationSET = duration_cast<microseconds>(end - start);
    long long setT = durationSET.count();

    cout << "Read" << "      " << vectorT << "      " << listT << "      " << setT << endl;

    //ONE
     start = high_resolution_clock::now();
    vector.sort(vector.being(), vector.end())
     end = high_resolution_clock::now();
    auto durationSORT = duration_cast<microseconds>(end - start);
    long long vectorS = durationSORT.count();
    //TWO
    start = high_resolution_clock::now();
    list.sort();
    end = high_resolution_clock::now();
    auto durationSORT = duration_cast<microseconds>(end - start);
    long long listS= durationSORT.count();
    //THREE
    long long setSORT = -1;

    cout << "Set" << "      " << vectorS << "      " << listS << "      " << setSORT << endl;

    string setValue ="TESTCODE";
    //ONE
    vector<string> vectorIns=vectorI;
    start = high_resolution_clock::now();
    vectorIns.insert(vectorIns.begin()+vectroIns.size()/2, setValue);
    start = high_resolution_clock::now();
    auto durationVECTOR = duration_cast<microseconds>(end - start);
    long long vectorI = durationVECTOR.count();
    //TWO
    list<string> listIns = listI;
    auto listMiddle = listIns.begin();
    advance(listMiddle, listIns.size() / 2);
    start = high_resolution_clock::now();
    listIns.insert(listMiddle,setValue);
    end = high_resolution_clock::now();
    auto durationLIST = duration_cast<microseconds>(end - start);
    long long listI = durationLIST.count();
    //THREE
    set<string> setIns= setI;
    start = high_resolution_clock::now();
    setIns.insert(newValue);
    end = high_resolution_clock::now();
    auto durationSET = duration_cast<microseconds>(end - start);
    long long setI = durationSET.count();
    cout << "" << "      " << vectorI << "      " << listI << "      " << setI << endl;

    //ONE
    vector<string> vectorDel=vectorI;
    start = high_resolution_clock::now();
    vectorIns.erase(vectorIns.begin()+vectroIns.size()/2, setValue);
    start = high_resolution_clock::now();
    auto durationVECTOR = duration_cast<microseconds>(end - start);
    long long vectorE = durationVECTOR.count();
    //TWO
    list<string> listDel = listI;
    auto listDelMid = listDel.begin();
    advance(listDelMid, listDel.size() / 2);
    start = high_resolution_clock::now();
    listDel.erase(listMiddle,setValue);
    end = high_resolution_clock::now();
    auto durationLIST = duration_cast<microseconds>(end - start);
    long long listE = durationLIST.count();
    //THREE
    set<string> setDel= setI;
    auto setMiddle = setDel.begin();
    advance(setMiddle, setDel.size() / 2);
    start = high_resolution_clock::now();
    setDel.erase(newValue);
    end = high_resolution_clock::now();
    auto durationSET = duration_cast<microseconds>(end - start);
    long long setE = durationSET.count();
    cout << "" << "      " << vectorE << "      " << listE << "      " << setE << endl;
    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/