#include <iostream>
#include <sstream>
#include <fstream>
#include "DZ.pb.h"
#include <functional>
#include <tuple>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class IRepository {
	virtual void Open() = 0; // бинарная десериализация в файл
	virtual void Save() = 0; // бинарная сериализация в файл
};
class IMethods {
	virtual double GetAverageScore(const fn& name) = 0;
	virtual void GetAllInfo(const fn& name) = 0;
	virtual void GetAllInfo() = 0;
};
//class DZ::FullName
//{
//private:
//	string name;
//	string sname;
//	string tname;
//public:
//	FullName()
//	{}
//	FullName(string f_name, string s_name, string t_name)
//		: name(f_name), sname(s_name), tname(t_name)
//	{}
//	friend ostream& operator<< (ostream& out, FullName& fn)
//	{
//		out << "Name: " << fn.name << endl << "Surname: " << fn.sname << endl << "Third name: " << fn.tname << endl;
//		return out;
//	}
//	void printName()
//	{
//		cout << "Name: " << name << endl << "Surname: " << sname << endl << "Third name: " << tname << endl;
//	}
//	friend bool operator== (const FullName& f1, const FullName& f2)
//	{
//		return tie(f1.name, f1.sname, f1.tname) == tie(f2.name, f2.sname, f2.tname);
//	}
//};

//class DZ::Student
//{
//private:
//	FullName studname;
//	vector <int> grades;
//	double sred;
//public:
//	Student()
//	{};
//	Student(string fname, string sname, string tname, vector<int> grade)
//		: studname(fname, sname, tname), grades(grade), sred(getsred())
//	{};
//	void printGrades()
//	{
//		cout << "Grades: " << endl;
//		for (auto i : grades)
//		{
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//	friend ostream& operator<< (ostream& out, Student& stud)
//	{
//		out << stud.studname << endl << "The sred is: " << stud.getsred() << endl;
//		return out;
//	}
//
//	void setSred(double s)
//	{
//		sred = s;
//	}
//	int getsred()
//	{
//		double num = 0;
//		double count = 0;
//		for (auto i = 0; i < grades.size(); i++)
//		{
//			num += grades[i];
//			count++;
//		}
//		double c = static_cast <double> (num / count);
//		setSred(c);
//		return sred;
//	}
//	void printfname()
//	{
//		cout << studname;
//	}
//	fn getName()
//	{
//		return studname;
//	}
//	vector<int> getGrades()
//	{
//		return grades;
//	}
//};
class Studentik : public fn
{
private:
	fn studname;
	vector<int> grades = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double sred = 0;

public:
	Studentik()
	{};

	Studentik(string fname, string sname, string tname, vector<int> grade)
		: studname(fname, sname, tname), grades(grade), sred(getsred())
	{};
	void printGrades()
	{
		cout << "Grades: " << endl;
		for (auto i : grades)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	friend ostream& operator<< (ostream& out, Studentik& stud)
	{
		out << stud.studname << endl << "The sred is: " << stud.getsred() << endl;
		return out;
	}

	void setSred(double s)
	{
		sred = s;
	}
	int getsred()
	{
		double num = 0;
		double count = 0;
		for (auto i = 0; i < grades.size(); i++)
		{
			num += grades[i];
			count++;
		}
		double c = static_cast <double> (num / count);
		setSred(c);
		return sred;
	}
	void printfname()
	{
		cout << studname;
	}
	fn getName()
	{
		return studname;
	}
	vector<int> getGrades()
	{
		return grades;
	}
};


//class DZ::StudentsGroup : public IRepository, public IMethods
//{
//protected:
//	vector<DZ::Student> students;
//public:
//	void Save(DZ::StudentsGroup& students)
//	{
//		ofstream out("C:/Users/Мансур/Desktop/Программы/7 урок (сложные моменты)/7 урок (сложные моменты)/ students.bin", ios_base::binary);
//		students.SerializeToOstream(&out);
//	}
//	void Open(DZ::StudentsGroup& students)
//	{
//		ifstream in("C:/Users/Мансур/Desktop/Программы/7 урок (сложные моменты)/7 урок (сложные моменты)/ students.bin", ios_base::binary);
//		if (students.ParseFromIstream(&in)) {
//			cout << in.;
//		}
//		else {
//			cout << "Error!" << endl;
//		}
//	}
//};

class fn
{
public:
	string name;
	string sname;
	string tname;
	string fname = name + sname + tname;
	fn()
	{};
	fn(string f_name, string s_name, string t_name)
		: name(f_name), sname(s_name), tname(t_name)
	{}
	friend ostream& operator<< (ostream& out, fn& fn)
	{
		out << "Name: " << fn.name << endl << "Surname: " << fn.sname << endl << "Third name: " << fn.tname << endl;
		return out;
	}
	void printName()
	{
		cout << "Name: " << name << endl << "Surname: " << sname << endl << "Third name: " << tname << endl;
	}
	friend bool operator== (const fn& f1, const fn& f2)
	{
		return tie(f1.name, f1.sname, f1.tname) == tie(f2.name, f2.sname, f2.tname);
	}
	fn operator= (fn& n)
	{
		fname = name + " " + sname + " " + tname;
	}
};

class Studentik : public fn
{
private:
	fn studname;
	vector<int> grades = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double sred = 0;
	
public:
	Studentik()
	{};
	
	Studentik(string fname, string sname, string tname, vector<int> grade)
		: studname(fname, sname, tname), grades(grade), sred(getsred())
	{};
	void printGrades()
	{
		cout << "Grades: " << endl;
		for (auto i : grades)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	friend ostream& operator<< (ostream & out, Studentik& stud)
	{
		out << stud.studname << endl  << "The sred is: " << stud.getsred() << endl;
		return out;
	}

	void setSred(double s)
	{
		sred = s;
	}
	int getsred()
	{
		double num = 0;
		double count = 0;
		for (auto i = 0; i < grades.size(); i++)
		{
			num += grades[i];
			count++;
		}
		double c = static_cast <double> (num / count);
		setSred(c);
		return sred;
	}
	void printfname()
	{
		cout << studname;
	}
	fn getName()
	{
		return studname;
	}
	vector<int> getGrades()
	{
		return grades;
	}
};

class StudentsList : public IMethods, public IRepository
{
private:
	vector<Studentik> s_list;
public:
	StudentsList()
	{};
	 double GetAverageScore(const fn& name)
	{
		for (auto i : s_list)
		{
			if (i.getName() == name)
			{
				return i.getsred();
			}
		}
	}
	 void GetAllInfo(const fn& name)
	{
		for (auto i : s_list)
		{
			if (i.getName() == name)
			{
				i.printfname();
				i.printGrades();
				cout << "the average score is: " << i.getsred() << endl;
			}

		}
	}
	 void GetAllInfo()
	 {
		 for (auto i : s_list)
		 {
			 GetAllInfo(i.getName());
		 }
	 }
	void push_back(Studentik& s)
	{
		s_list.push_back(s);
	}
	void Save(StudentsList & studs)
	{
		vector <string> str_vec;
		ofstream out("C:/Users/Мансур/Desktop/Программы/7 урок (сложные моменты)/7 урок (сложные моменты)/ students.bin", ios_base::binary);
		vector <Studentik> ::iterator i;
		...
		
	}
	void Open(DZ::StudentsGroup& students)
	{
		ifstream in("C:/Users/Мансур/Desktop/Программы/7 урок (сложные моменты)/7 урок (сложные моменты)/ students.bin", ios_base::binary);
		if (students.ParseFromIstream(&in)) {
			cout << in.;
		}
		else {
			cout << "Error!" << endl;
		}
	}
	
};



int main()
{
	
	Studentik stud("Mansur", "Khabibullin", "Takhirovich", { 1, 2, 3, 4, 5, 6 , 7, 8 ,9, 16 });
	Studentik stud2("Svetlana", "Semeniuk", "Alexandrovna", { 2, 3, 5 ,6 ,7 ,8 ,5, 2, 12, 42 });
	StudentsList list;
	list.push_back(stud);
	list.push_back(stud2);
	list.GetAllInfo(stud.getName());
	list.GetAllInfo();
	cout << list.GetAverageScore(stud2.getName());
	cout << endl;


	DZ::FullName funame;
	string str = "Hello";
	funame.set_name(str);
	funame.set_sname("Yagafarov");
	funame.set_tname("Rafikovich");
	cout << funame.sname() << " " << funame.name() << " " << funame.tname();

	DZ::StudentsGroup group;

	return 0;

}

