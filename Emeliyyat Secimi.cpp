#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
class Section{
	public:
	void setColor(int color) {//Sistem də istifadə olunan rənglər üçün yaradılmış funksiya
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	}
	//Sisteme giris vaxtini bilmek ucundur.
	void vaxt(){
	system("chcp 65001 > nul");
	SetConsoleOutputCP(65001);
	setColor(15);
	time_t now = time(NULL);
	struct tm localTime;
	localtime_s(&localTime, &now);
}//Muvafiq Emeliyyati Secmek ucun lazimdir.
void sec(){
        time_t now = time(0);
        tm *localTime = localtime(&now);
		cout << "Zehmet Olmasa Emeliyyat Novunu Sechin\n1-Kitab Axtar\n2-kitab elave et\n3-Status \n4-kitablari goster\n5-Kitabi Icareye goturmek\n6-Kitabi Silmek\n7-Kitabi Qaytarmaq\n";
		int number;
		cin >> number;
		while(number>0&&number<8){
		if (number == 1) {//Kitab Axtarisi
			setColor(1);
			cout << "Zehmet olmasa axtarmaq istediyiniz kitabin adini ve ya muellifini daxil edin.\n";
			string k_ad, ad, soyad;
			cin >> k_ad >> ad >> soyad;
			cout<<"Sizin axtardiginiz kitab bazada movcuddur :)\n";
			cout<<"Etrafli melumat uchun zehmet olmasa https://www.millikitabxana.az saytina kecid edin :)\n";
		    ofstream MyFile("C:\\Users\\user\\Desktop\\Library\ System\\Search\ book.txt");
			MyFile <<k_ad<<" "<<ad<<" "<<soyad<< " Sizin axtardiginiz kitab bazada movcuddur :)\nEtrafli melumat uchun zehmet olmasa https://www.millikitabxana.az saytina kecid edin :))\n";
			MyFile << localTime->tm_hour << ":" << localTime->tm_min << "\n";
			MyFile.close();
			cout << "Melumat fayla yazıldı.\n";
		}//Kitab Elavesi Uchun
		else if (number == 2) {
			setColor(13);
			cout << "Zehmet olmasa kitabla bagli melumatlari daxil edin\nYeni Kitabin Adi\nKitabin Muellifi\nISBN nomresi\n";
			string ad1,soyad1;
			int ISBN;
			cin >>ad1>>soyad1>> ISBN;
			cout << "Kitabiniz ugurla elave edildi!\n";
		    ofstream MyFile("C:\\Users\\user\\Desktop\\Library\ System\\Book\ adding.txt");
			MyFile <<ad1<<" "<<soyad1<<" "<<ISBN<< " Kitabiniz ugurla elave edildi!\n";
			MyFile << localTime->tm_hour << ":" << localTime->tm_min << "\n";
			MyFile.close();
			cout << "Melumat fayla yazıldı.\n";
		}
			else if (number == 3) {//Kitab Statusu Haqqinda Serti Melumat
				setColor(3);
				cout<<"Melumatlari daxil edin\n1-Muellif Adi\n2-Kitab adi\n";
				string ad2,author;
				cin>>ad2>>author;
				cout<<"Kitab Movcud deyildir\n";
				ofstream MyFile("C:\\Users\\user\\Desktop\\Library\ System\\Book\ status.txt");
				MyFile<<ad2<<" " <<author<<" Sizin axtardiginiz kitab bazada movcuddur :)\n";
				MyFile << localTime->tm_hour << ":" << localTime->tm_min << "\n";
				MyFile.close();
				cout << "Melumat fayla yazıldı.\n";
				}
			else if (number == 4) {//Kitablar haqqinda melumat.2
				setColor(36);
				cout<<"Bazada Olan Kitablari Gormek Uchun\n https://www.millikitabxana.az// Saytina Kecid Ede Bilersiniz.\n";
			    ofstream MyFile("C:\\Users\\user\\Desktop\\Library\ System\\Book\ information.txt");
				MyFile << "Bazada Olan Kitablari Gormek Uchun\n https://www.millikitabxana.az// Saytina Kecid Ede Bilersiniz.\n";
				MyFile << localTime->tm_hour << ":" << localTime->tm_min << "\n";
				MyFile.close();
				cout << "Melumat fayla yazıldı.\n";
			}
			else if(number==5){//Kitabi icareye goturmek
                setColor(7);
				cout<<"Zehmet OLmasa lazim olan kitabin adini yazin\n";
				string book_name;
				cin>>book_name;
				cout<<"Kitabiniz ugurla icareye alindi\n";
			    ofstream MyFile("C:\\Users\\user\\Desktop\\Library\ System\\Book\ rent.txt");
				MyFile<<book_name <<" "<< "Kitabiniz ugurla icareye alindi\n";
				MyFile << localTime->tm_hour << ":" << localTime->tm_min << "\n";
				MyFile.close();
				cout << "Melumat fayla yazıldı.\n";
			}
			else if(number==6){//Kitabi Silmek ucun
                cout<<"Zehmet olmasa silmek istediyiniz kitabin adini yazin\n";
                string book_name6;
				cin>>book_name6;
				cout<<"Kitabiniz ugurla silindi\n";
				ofstream MyDelete("C:\\Users\\user\\Desktop\\Library\ System\\Book\ delete.txt");
				MyDelete<<book_name6 <<" "<< "Kitabiniz ugurla silindi\n";
				MyDelete << localTime->tm_hour << ":" << localTime->tm_min << "\n";
				MyDelete.close();
				cout << "Melumat fayla yazıldı.\n";
			}

			else if(number==7){//Kitabi Qaytarmaq
                setColor(5);
				cout<<"Zehmet olmasa qaytarilacaq kitabin adini daxil edin\n";
				string book_reverse;
				cin>>book_reverse;
				cout<<"Kitab Muveffeqiyyetle Geri Qaytarildi\n";
			    ofstream MyFile("C:\\Users\\user\\Desktop\\Library\ System\\Book\ gift.txt");
				MyFile <<book_reverse<< " Adli Kitab Muveffeqiyyetle Geri Qaytarildi\n";
				MyFile << localTime->tm_hour << ":" << localTime->tm_min << "\n";
				MyFile.close();
				cout << "Melumat fayla yazıldı.\n";
			}

        }
    }
};
