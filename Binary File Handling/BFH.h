#include<iostream>
#include<fstream>
#include<string>


using namespace std;

class Student {

	int id;
	char Name[100], Father_Name[200],Address[200], CNIC[200];

public:

	Student(int id = 0, char N[] = NULL, char fatherN[]=NULL, char Add[]=NULL, char cnic[] = NULL) : id(id)
	{
		int i = 0, size1=0, size2=0, size3=0, size4=0;

		while (N[i] != '\0') 
		{
			if (N[i] == '\0')
				break;
			i++;
		}
		size1 = i;
		
		i = 0;
		while (fatherN[i] != '\0')
		{
			i++;
		}
		size2 = i;

		i = 0;
		while (Add[i] != '\0')
		{
			i++;
		}
		size3 = i;

		i = 0;
		while (cnic[i] != '\0')
		{
			i++;
		}
		size4 = i;

		for (int i = 0; i < size1; i++)
		{
			Name[i] = N[i];
		}

		for (int i = 0; i < size2; i++)
		{
			Father_Name[i] = fatherN[i];
		}

		for (int i = 0; i < size3; i++)
		{
			Address[i] = Add[i];
		}

		for (int i = 0; i < size4; i++)
		{
			CNIC[i] = cnic[i];
		}
	}

	Student setID(int id)
	{
		this->id = id;
		return *this;
	}

	int getID()const
	{
		return id;
	}

	Student setName(char N[])
	{
		int i = 0;
		while (N[i] != '\0')
		{
			this->Name[i] = N[i];
			i++;
		}

		return *this;
	}


	const char* getName()const
	{
		return Name;
	}

	Student setFather_Name(char fatherN[])
	{
		int i = 0;
		while (fatherN[i] != '\0')
		{
			this->Father_Name[i] = fatherN[i];
			i++;
		}

		return *this;
	}

	const char* getFatherName()const
	{
		return Father_Name;
	}

	Student setAddress(char Add[])
	{
		int i = 0;
		while (Add[i] != '\0')
		{
			this->Address[i] = Add[i];
			i++;
		}

		return *this;
	}

	const char* getAddress()const
	{
		return Address;
	}

	Student setCNIC(char cnic[])
	{
		int i = 0;
		while (cnic[i] != '\0')
		{
			this->CNIC[i] = cnic[i];
			i++;
		}

		return *this;
	}

	const char* getCNIC()const
	{
		return CNIC;
	}

	//Display Function

	void display()
	{
		cout << "Student ID is: " << id << endl;
		cout << "Student Name is: " << Name << endl;
		cout << "Father Name is: " << Father_Name << endl;
		cout << "Address is: " << Address << endl;
		cout << "CNIC Number is: " << CNIC << endl;
	}
	
	//Member Function for Write, Read, Update and delete

	void Write(Student obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::out);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}


	void Read(string fileName)
	{
		Student obj;
		ifstream myFile(fileName, ios::binary | ios::in);
		myFile.read((char*)&obj, sizeof(obj));
		obj.display();
		myFile.close();
	}

	
};


int main()
{
	char Name[] = "Ali";
	char Father_Name[] = "Saleem";
	char Address[] = "342-C";
	char CNIC[] = "35202";

	Student king(0606, Name, Father_Name, Address, CNIC);

	Student Ali;
	Ali.Write(king, "text.bin");
	Ali.Read("text.bin");

}