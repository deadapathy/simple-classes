#include <istream>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

/*
class Student
{
	string surname, name, lastname, adres, faculty;
	int telephone = 0;
	int year = 0;
	int course = 0;
public:
	
	Student(){}

	void setStudents()
	{
		cout << "Surname: ";
		cin >> surname;
		cout << "Name: ";
		cin >> name;
		cout << "Lastname: ";
		cin >> lastname;
		cout << "Date: ";
		cin >> year;
		cout << "Adres: ";
		cin >> adres;
		cout << "Telephone: ";
		cin >> telephone;
		cout << "Faculty: ";
		cin >> faculty;
		cout << "Course: ";
		cin >> course;
		
	}

	string GetStudnts()
	{
		return surname;
		return name;
		return lastname;
		return adres;
		return faculty;
		
	}

	int GetStudents() 
	{
		return year;
		return telephone;
		return course;

	}

	void show() // список студентов для всех факультетов и курсов 
	{
		cout << "\nSurname: " << " " << surname << endl;
		
		cout << "Name: " << " " << name << endl;
		
		cout << "Lastname: " << lastname << endl;
		
		cout << "Date: " << year << endl;
		
		cout << "Adres: " << adres << endl;
		
		cout << "Telephone: " << telephone << endl;
		
		cout << "Faculty: " << faculty << endl;
		
		cout << "Course: " << course << endl;
		

	}

	void Faculty() // список студентов для заданного факультета 
	{
		
		cout << "\nprogramming faculty: " << endl;
		if(faculty == "programming")
		{
			cout << "Surname: " << " " << surname << endl;

			cout << "Name: " << " " << name << endl;

			cout << "Lastname: " << lastname << endl;

			cout << "Date: " << year << endl;

			cout << "Adres: " << adres << endl;

			cout << "Telephone: " << telephone << endl;

			cout << "Course: " << course << endl;
		}
		
		
	}

	void AfterYear()
	{
		cout << "\nAfter a year: " << endl;
		if(year > 2000)
		{

			cout << "Date: " << year << endl;

			cout << "Surname: " << " " << surname << endl;

			cout << "Name: " << " " << name << endl;

			cout << "Lastname: " << lastname << endl;

			cout << "Adres: " << adres << endl;

			cout << "Telephone: " << telephone << endl;

			cout << "Faculty: " << faculty << endl;

			cout << "Course: " << course << endl;
		}
	
	}

private:
	
};

class Worker
{
	string surname, position;
	int year, salary;
public:
	Worker(){}
	
	void setWorker()
	{
		cout << "Surname: ";
		cin >> surname;
		cout << "Position: ";
		cin >> position;
		cout << "Year: ";
		cin >> year;
		cout << "Salary: ";
		cin >> salary;
	
	}

	string getWorker()
	{
		return surname;
		return position;

	}

	int getWorkr()
	{

		return year;
		return salary;

	}

	void showWorkers()
	{
		
		cout << "\nSurname: " << surname << endl;
		
		cout << "Position: " << position << endl;;
		
		cout << "Year: " << year << endl;
		
		cout << "Salary: " << salary << endl;
	
	
	
	}



	void Expirience(int current) // стаж работника
	{
		int Year = current - year;

			cout << "Surname: " << surname << " Expirience: "  << Year << endl;
		
	}

	void Salary()
	{
		cout << "\nSalary after 50000: " << endl;
		if(salary > 50000 || salary == 50000)
		{
			cout << "Surname: " << surname << " Salary: " << salary;
		
		}
	
	}

	void Position()
	{
		
		if(position == "programming")
		{
			cout << "\n\nPosition programming: " << endl;
			cout << "Surname: " << surname << " Position: " << position << endl;
		
		}
	}


private:

};



class Person
{
	string surname, name, lastname, adres, pol, education;
	int date;


public:
	Person(){}
	
	void setPerson()
	{
		cout << "Surname: ";
		cin >> surname;
		cout << "Name: ";
		cin >> name;
		cout << "Lastname: ";
		cin >> lastname;
		cout << "Adres: ";
		cin >> adres;
		cout << "Pol: ";
		cin >> pol;
		cout << "Education: ";
		cin >> education;
		cout << "Date: ";
		cin >> date;
	
	}


	string getPerson()
	{
		return surname;
		return name;
		return lastname;
		return adres;
		return pol;
		return education;
		
	
	}

	void showPerson()
	{
		cout << "\nSurname: " << surname << endl;
		cout << "Name: " << name << endl;
		cout << "Lastname: " << lastname << endl;
		cout << "Adres: " << adres << endl;
		cout << "Pol: " << pol << endl;
		cout << "Education: " << education << endl;
		cout << "Date: " << date << endl;
	
	}

	void Age(int current)
	{
		int year = current - date;

		cout << "Surname: " << surname << " Age: " << year << endl;

		if(year>15)
		{
			cout << "Age more than 15: " << surname;
		}
	
	}

	void Education()
	{
		if(education == "higher")
		{
			cout << "\nHigher education: " << surname;
		}
	
	}

	void Pol()
	{
		if(pol == "m")
		{
			cout << "\nPol m: " << surname;
		}
		
	}
private:

};
*/




class House
{
	string adres;
	int floar, rooms, area;
public:
	House(){}

	void setHouse()
	{
		cout << "Adres: ";
		cin >> adres;
		cout << "Floar: ";
		cin >> floar;
		cout << "Rooms: ";
		cin >> rooms;
		cout << "Area: ";
		cin >> area;

	}

	string getAdres()
	{
		return adres;
	}
	int getHouse()
	{
		return floar;
		return rooms;
		return area;
	}

	void showHouse()
	{
		cout << "\nAdres: " << adres << endl;

		cout << "Floar: " << floar << endl;

		cout << "Rooms: " << rooms << endl;

		cout << "Area: " << area << endl;
	}

	void Rooms()
	{
		if(rooms > 2)
		{
			cout << "\nHouse where rooms more than 2: " << endl;

			cout << "Rooms: " << rooms << endl;

			cout << "Adres: " << adres << endl;

			cout << "Floar: " << floar << endl;

			cout << "Area: " << area << endl;

		}

	}

	void Floar()
	{
		if(rooms > 2 && floar > 2)
		{
			cout << "\nHouse where rooms and floar more than 2: " << endl;

			cout << "Floar: " << floar << endl;

			cout << "Rooms: " << rooms << endl;

			cout << "Adres: " << adres << endl;

			cout << "Area: " << area << endl;

		}
	}

	void Area()
	{
		if(area > 25)
		{
			cout << "\nHouse where area more than 25: " << endl;

			cout << "Area: " << area << endl;

			cout << "Adres: " << adres << endl;

			cout << "Floar: " << floar << endl;

			cout << "Rooms: " << rooms << endl;

		}
	}


private:

};




int main()
{
	int h;
	cout << "Enter col-vo house: ";
	cin >> h;

	House* house = new House[h];

	for (int i = 0; i < h; i++)
	{
		house[i].setHouse();
	}

	for (int i = 0; i < h; i++)
	{
		house[i].showHouse();
	}

	for (int i = 0; i < h; i++)
	{
		house[i].Rooms();
	}

	for (int i = 0; i < h; i++)
	{
		house[i].Floar();
	}

	for (int i = 0; i < h; i++)
	{
		house[i].Area();
	}

	delete[] house;

	/*
	int n;
	cout << "Enter col-vo stduents: ";
	cin >> n;

	Student* students = new Student[n];

	for (int i = 0; i < n; i++) // значения для студентов
	{
		students[i].setStudents();

	}

	for (int i = 0; i < n; i++) // список студентов
	{
		students[i].show();
	}

	for (int i = 0; i < n; i++) // студенты на заданном факультете
	{
		students[i].Faculty();
	}

	for (int i = 0; i < n; i++) // студенты после 2000
	{
		students[i].AfterYear();
	}

	delete[] students;
	
	int w;
	cout << "\nEnter col-vo workers: " << endl;
	cin >> w;

	Worker* workers = new Worker[w];

	for(int i = 0; i < w; i++)
	{
		workers[i].setWorker();
	}

	for (int i = 0; i < w; i++)
	{
		workers[i].showWorkers();
	}

	int current;
	cout << "\nEnter current year: ";
	cin >> current;
	for(int i = 0; i < w; i++) // стаж работника
	{
		workers[i].Expirience(current);
	}

	for(int i = 0; i < w; i++)
	{
		workers[i].Salary();
	}

	for(int i = 0; i < w; i++)
	{
		workers[i].Position();
	}

	delete[] workers;
	

	
	

	int p;
	cout << "\nEnter col-vo persons: ";
	cin >> p;

	Person* persons = new Person[p];

	for(int i = 0; i < p; i++)
	{
		persons[i].setPerson();
	}
	for(int i = 0; i < p; i++)
	{
		persons[i].showPerson();
	}

	int curr;
	cout << "\nEnter current year: ";
	cin >> curr;

	for (int i = 0; i < p; i++) // стаж работника
	{
		persons[i].Age(curr);
	}

	for(int i = 0; i < p; i++)
	{
		persons[i].Education();
	}
	for(int i = 0; i < p; i++)
	{
		persons[i].Pol();
	}

	delete[] persons;
	*/
	return 0;
	
}