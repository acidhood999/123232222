#pragma once
#include <iostream>

using namespace std;

class Passport
{
private:
	int ser_num;
	int code;
	int dep_code;
	string date;

	string name;
	string last_name;
	string surname;
	bool sex; //true - �������, false - �������
	string birth_date;
	string birth_city;

public:
	Passport() : ser_num{ 0 }, code{ 0 }, dep_code{ 0 }, date{ "NULL" }, name{ "-" }, last_name{ "-" },
		surname{ "-" }, sex{ false }, birth_date{ "NULL" }, birth_city{ "NULL" } {}

	Passport(int ser_num, int code, int dep_code, string date, string name, string last_name,
		string surname, bool sex, string birth_date, string birth_city) : ser_num{ ser_num }, code{ code }, dep_code{ dep_code },
		date{ date }, name{ name }, last_name{ last_name }, surname{ surname }, sex{ sex }, birth_date{ birth_date }, birth_city{ birth_city } {}


	void set_ser(int ser) { ser_num = ser; }
	void set_code(int cod) { code = cod; }
	void set_dep(int dep) { dep_code = dep; }
	void set_date(string dat) { date = dat; }

	void set_name(string nam) { name = nam; }
	void set_last(string last) { last_name = last; }
	void set_sur(string sur) { surname = sur; }
	void set_sex(bool s) { sex = s; }
	void set_bd(string bd) { birth_date = bd; }
	void set_bc(string bc) { birth_city = bc; }



	void info()
	{
		cout << "�������� �����: " << ser_num << endl;
		cout << "��� ��������: " << code << endl;
		cout << "��� �������������: " << dep_code << endl;
		cout << "���� ������: " << date << endl;
		cout << endl;
		cout << "���: " << name << endl;
		cout << "�������: " << last_name << endl;
		cout << "��������: " << surname << endl;
		cout << "���: ";
		if (!sex)cout << "���" << endl;
		else cout << "���" << endl;
		cout << "���� ��������: " << birth_date << endl;
		cout << "����� ��������: " << birth_city << endl;
	}
};

class ForeignPassport : public Passport
{
private:
	string visas;
	int f_code;
public:
	ForeignPassport() : Passport(0, 0, 0, "NULL", "-", "-", "-", false, "NULL", "NULL"), f_code{ 0 }, visas{ "��� ����������" } {}
	ForeignPassport(int ser_num, int code, int dep_code, string date, string name, string last_name,
		string surname, bool sex, string birth_date, string birth_city, int f_code, string visas) : Passport(ser_num, code, dep_code,
			date, name, last_name, surname, sex, birth_date, birth_city), f_code{ f_code }, visas{ visas } {}

	void set_fcode(int fc) { f_code = fc; }
	void set_visas(int visa) { visas = visa; }

	void f_info()
	{
		info();
		cout << endl;
		cout << "���������� � ��������������:" << endl;
		cout << endl;
		cout << "����� ��������������: " << f_code << endl;
		cout << "���������� � �����: " << visas << endl;
	}

};