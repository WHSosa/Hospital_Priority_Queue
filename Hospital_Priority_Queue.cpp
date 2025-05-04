#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Patient {
    string name;
    int priority;
};
struct compare {
    bool operator()(Patient a, Patient b){
        return a.priority< b.priority;
    }
};

int main(){
    priority_queue<Patient, vector<Patient>, compare> patientQueue;

    cout << "Enter 5 patients (name and priority in same line)\n";

    for(int i = 1; i <= 5; i++){
        Patient p;
        cout << "Patient #" << i << ": ";
        cin >> p.name >> p.priority;
        patientQueue.push(p);
    }

    cout << "Order of Treatment\n";
    while (!patientQueue.empty()){
        Patient next = patientQueue.top();
        cout << next.name << " (Priority: " << next.priority << ")\n";
        patientQueue.pop();
    }
   
    return 0;
};