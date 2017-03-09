//Jessie's file from scratch

#include <iostream> 
using namespace std; 
#include <vector>


void printVector(vector<int>&v){
    int size = v.size(); 
    // cout << "size is: " << size <<endl; 
    for (int i=0; i< size-1; i++){
        cout << v[i] << ",";
    }
    cout << v.back() << endl; 
}

int main(){
    
    string big; 
    string little; 
    int flag = 0; 
    size_t findLittle; 
    
    cout << "Input BIG string: " ; 
    getline(cin, big); // getline = non-member overload
    cout << "BIG string input was: " << big << endl;
    
    cout << "\nInput LITTLE string: " ; 
    getline(cin, little); // getline = non-member overload
    cout << "LITTLE string input was: " << big << endl;
    const char * littleChar = little.c_str();
    
    findLittle = big.find (littleChar);
    cout << "\nBIG string contains LITTLE string @ index: " ;
    vector<int> vec; 
    
    while(findLittle!=std::string::npos){
        vec.push_back(findLittle); 
        findLittle = big.find (littleChar, findLittle+1, little.length());
    }
    
    printVector(vec); 
    return 0;
}
