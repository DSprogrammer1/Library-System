#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
class LibraryRegister{
	public:
		void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	}
	void vaxt(){
	system("chcp 65001 > nul");
	SetConsoleOutputCP(65001);
	time_t now = time(NULL);
	struct tm localTime;
	localtime_s(&localTime, &now);  // Sistemə girişin iş saatlarında olub olmadığını yoxlamaq üçün tərtib edilmiş hissədir.
	/*if (localTime.tm_hour < 8 || localTime.tm_hour>18) {
    setColor(1);
	cout << "Sistem Ishlemir Zehmet Olmasa Is Saatlarinda Yeniden Muraciet Edin\n";
	cout << "Is Saatlarimiz -- 09:00-18:00\n";
	exit(0);
		}*/
	}   time_t now = time(0);
        tm *localTime = localtime(&now);
		string username = "admin";
	    string password = "admin";
		string username1, password1;
		void library(){
		cout << "Sisteme Giris Uchun Zehmet Olmasa Istifadeci Adinizi ve Parolunuzu Yazin\n--->>";
		cin >> username1 >> password1;
		if (username1 == "admin" && password1 == "admin") {
		cout<<"Girish Ugurludur";
		ofstream Access("C:\\Users\\user\\Desktop\\Library\ System\\Succed\ Access.txt");
		Access<<"Ugurlu Girish: ";
		Access<<localTime->tm_hour << ":" << localTime->tm_min << "\n";
		}
		else {
		setColor(12);
		cout << "Parol ve Ya Istifadeci Adiniz Yanlishdir\n";
		ofstream Access("C:\\Users\\user\\Desktop\\Library\ System\\Failed\ Access.txt");
		Access<<"Ugursuz Giris: ";
		Access<<localTime->tm_hour << ":" << localTime->tm_min << "\n";
		Access.close();
		exit(0);
		}
	}
};
