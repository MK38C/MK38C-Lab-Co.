#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(){
int bombtimer=10;
cout << "BOMB COUNTDOWN" << endl;
for (bombtimer>10,--bombtimer) {
cout << bombtimer << endl;
this_thread::sleep_for(chrono::seconds(1));}
cout << "BOOM" << endl;
)return 0;
}
