//#include <iostream>
//#include<string>
//using namespace std;
//
////namespace sdds {
////
////	struct Container{
////
////	public:
////
////		Container()
////		{
////			m_amount = 0;
////			m_volume = 0;
////			m_content = nullptr;
////		}
////
////		~Container()
////		{
////			delete[] m_content;
////			m_content = nullptr;
////		}
////
////		void Read() {
////			char content[256];
////			int amount{};
////			int volume{};
////			do
////			{
////				cout << "Content: ";
////				cin.getline(content, 256);
////
////				if (cin) cout << "Container Volume: ";
////				cin >> volume;
////				if (cin) cout << content << " amount: ";
////				cin >> amount;
////				if (cin.fail())
////				{
////					cout << "Bad Data" << endl;
////				}
////				else
////				{
////					delete[] content;
////
////				}
////
////
////
////			} while (true);
////		}
////
////	private:
////		int m_amount;
////		int m_volume;
////		char* m_content;
////		void Set(const char* content, int amount, int volume);
////
////		void Strcpy(char*& target, const char* content);
////
////	};
////
////	void Container::Set(const char* content, int amount, int volume)
////	{
////		delete[] content;
////		int size = sizeof(content) / sizeof(char) + 1;
////		m_content = new char[size];
////		Strcpy(m_content, content);
////		m_amount=amount;
////		m_volume = volume;
////	}
////
////	void Container::Strcpy(char*& target, const char* content)
////	{
////		int size = sizeof(content) / sizeof(char) + 1;
////		for (int i = 0; i< size; i++)
////		{
////			m_content[i] = content[i];
////		}
////	}
////}
////using namespace sdds;
//int main()
//{
//	//cout << "Hello";
//	//Container C;
//
//	//cout << "Enter Your Name: ";
//	//string name;
//	//getline(cin, name);
//	//cout << name;
//
//	//double x = 3.2;
//	//double y = 5.3;
//
//	//int z =static_cast<int>(y);
//	//int p = (int)y;
//
//	//bool condition = y > x;
//	//cout << z<<endl;
//	//cout <<boolalpha <<condition<<endl;
//
//	int numbers[] = { 1,2,3,4 };
//
//	for (int number : numbers)
//	{
//		cout << number<<endl;
//	}
//
//	//for (each int var in numbers)
//	//{
//	//	cout << var;
//	//}
//
//
//	return 0;
//}