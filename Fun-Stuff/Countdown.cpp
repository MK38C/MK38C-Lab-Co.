#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(){
cout << "BOMB COUNTDOWN" << endl;
for (int bombtimer=10; bombtimer>-1; --bombtimer) {
cout << bombtimer << endl;
this_thread::sleep_for(chrono::seconds(1));
}
cout << "BOOM" << endl;
return 0;
}
