#include<iostream>
#include <fstream>
#include<string>
using namespace std;
string subfile(string path,int pos) {
	ifstream in;
	in.open(path);
	if (in.is_open()) {
		string str;
		in.seekg(pos, ios::beg);
		char sym;
		while (in.get(sym)) 
			str += sym;
		in.close();
		return str;
	}
	in.close();
	return "";

}
int main() {
	setlocale(LC_ALL, "ru");
	string path = "file.txt";
	int n;
	fstream fs; //fs- ��������, �����������(����� �����)
	/*fs.open(path, ios::in | ios::out | ios::ate); //+��� �������� ��� ������ � ��������
	string file;

	if (fs.is_open()) {
		cout << "���� ������\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			file += str+"\n";
		}
			cout << file << endl;
		
	}
	else
		cout << "������ �������� �����";

	if (fs.is_open()) {
		cout << "���� ������!\n";
		string str;
		cout << "������� ������: \n";
		fs.seekg(20, ios::beg);
		getline(cin, str);
		fs << str << "\n";
		fs.seekg(0, ios::beg);//������������� � ������ ����� ��� ������ � ����
		getline(fs, str);
		cout << str << "\n";
	}
	else
		cout << "������ �������� �����";
	fs.close();
	file.insert(20, "\nnew STR  \n");
	cout << "\n\n" << file << "\n\n";
	fs.open(path, ios::out|ios::in);
	if (fs.is_open()) {
		cout << "���� ������\n";
		fs << file << "\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
	cout << "������ �������� �����\n";
	fs.close();*/
	/*
	cout << "������ 1\n";
	cout << "������� �������: \n";
	cin >> n;	
	cout << "���������� ����� � ��������� ��������: \n"<<subfile(path, n);*/
	/*cout << "������ 2\n";
	ifstream indate;
	indate.open("date.txt");
	int day=0, month=0, year=0;
	if (indate.is_open()) {
		cout << "���� ������ ��� ����������: \n";
		string date;
		indate >> date;
		cout <<"���������� �����:\n"<< date << endl;
		year = stoi(date.substr(date.rfind('.') + 1));
		//cout << year<<endl;
		month = stoi(date.substr(date.find('.') + 1));
		//cout << month << endl;
		day = stoi(date.substr(0,date.find('.')));
		//cout << day;
		
	}
	else
		cout << "������ �������� �����\n";
	indate.close();
	cout << day << "." << month << "." << year << endl;*/



	system("pause>null");
	return 0;
}