#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;
ofstream fout;
fout.open("cppstudio.txt");

struct Books
{
char *name;
char *genre;
char *author;
int lists;
int year;
double cost;
int availability;
};

void Init(Books a[], int length)
{
for(int i(0); i < length; i++)
{
cout << i+1 << ":\n";
cout << "Введите название книги: ";
a[i].name = new char[40];
cin.get();
cin.getline(a[i].name,40);

cout << "Введите Жанр: ";
a[i].genre = new char[40];
cin.get();
cin.getline(a[i].genre,40);

cout << "Введите имя автора: ";
a[i].author = new char[40];
cin.get();
cin.getline(a[i].author,40);

cout << "Введите количество листов: ";
while(!(cin >> a[i].lists) || a[i].lists <0)
{
cout << "Ошибка ввода!";
}
cout << "Введите год выпуска: ";
while(!(cin >> a[i].year) || a[i].year > 2019)
{
cout << "Ошибка ввода!";
}
cout << "Введите стоимость в Uah: ";
while(!(cin >> a[i].cost) || a[i].cost <0.0)
{
cout << "Ошибка ввода!";
}
cout << "Введите наличие:Есть(1), Нет(0)";
bool flag;
if(!(cin >> a[i].availability)  || a[i].availability == 0)
{
flag = false;
}else
{
flag = true;
}
cout <<endl;
}
}
void ShowBook(const Books a[],int length)
{
for(int i(0); i < length; i++)
{
cout << "----------------------------------------";
cout << i+1 << "Книга:\n";
cout << "Жанр: " << a[i].genre <<endl;
cout << "Автор: " << a[i].author <<endl;
cout << "Количество листов: " << a[i].lists <<endl;
cout << "Год выпуска: " << a[i].year <<endl;
cout << "Стоимость: " << a[i].cost << "грн" <<endl;
cout << "Наличие: " << a[i].availability <<endl;
cout << "----------------------------------------";
cout <<endl;
}
}
void Free(Books a[] , int length)
{
for(int i(0); i < length; i++)
{
delete [] a[i].name;
}
}
void Delete(Books a[], int length)
{
for(int i(0); i < length; i++)
{
 int k=0; //номер элемента,который нужно удалить
 length == k;
cout << i+1 << "Книга:\n";
cout<<"Введите номер книги для удаления \n";
     cin>>k;

//удалание книги
}

}
void Avail(Books a[], int length)
{
for(int i(0); i < length; i++)
{
if(!(cin >> a[i].availability)  || a[i].availability == true)
{
cout << i+1 << "Книга:\n";
}else
{
cout << "Нет ни одной книги\n\n";
}
}
}
void SearchYear (Books a[], int length)
{
int compareYear;
cout << "Введите год издания книги: \n";
cin >> compareYear;
for(int i(0); i < length; i++)
{
if(a[i].year == compareYear)
{
cout << i+1 << "Книга:\n";
}else
{
cout << "Нет ни одной книги\n\n";
}
}
}
void SearchAuthor (Books a[], int length)
{
char compareAuthor;
cout << "Введите автора книги: \n";
cin >> compareAuthor;
for(int i(0); i < length; i++)
{
if (strcmp(a[i].author, compareAuthor) == 0)
{
cout << i+1 << "Книга:\n";
}else
{
cout << "Нет ни одной книги\n\n";
}
}
}
void Edit (Books a[], int length)
{

for(int i(0); i < length; i++)
{
cout << i+1 << "Книга:\n";
}
int d;
cout << "Выберите номер изменяемой книги: ";
    cin >> d;

   //изменение книги

cout << "Введите название книги: ";
a[i].name = new char[40];
cin.get();
cin.getline(a[i].name,40);

cout << "Введите Жанр: ";
a[i].genre = new char[40];
cin.get();
cin.getline(a[i].genre,40);

cout << "Введите имя автора: ";
a[i].author = new char[40];
cin.get();
cin.getline(a[i].author,40);

cout << "Введите количество листов: ";
while(!(cin >> a[i].lists) || a[i].lists <0)
{
cout << "Ошибка ввода!";
}
cout << "Введите год выпуска: ";
while(!(cin >> a[i].year) || a[i].year > 2019)
{
cout << "Ошибка ввода!";
}
cout << "Введите стоимость в Uah: ";
while(!(cin >> a[i].cost) || a[i].cost <0.0)
{
cout << "Ошибка ввода!";
}
cout << "Введите наличие:Есть(1), Нет(0)";
bool flag;
if(!(cin >> a[i].availability)  || a[i].availability == 0)
{
flag = false;
}else
{
flag = true;
}
cout <<endl;
}

void menu()
{
cout << "1.Добавить книгу\n";
cout << "2.Вывести книги\n";
cout << "3.Удалить книгу\n";
cout << "4.Книги в наличии\n";
cout << "5.Поиск по году издания\n";
cout << "6.Поиск по имени автора\n";
cout << "7.Редактирование книги\n";
cout << "8. Выйти\n";
}
int main()
{
setlocale(LC_ALL , "Russian");
cout << "***Книга***\n\n";

Books *book = new Books;
char c;
do
{
menu();
cin >> c;

switch(c)
{
case '1': system("cls"); Init(book);break;
case '2': system("cls"); ShowBook(book);break;
case '3': system("cls"); Delete(book);break;
case '4': system("cls"); Avail(book);break;
case '5': system("cls"); SearchYear(book);break;
case '6': system("cls"); SearchAuthor(book);break;
case '7': system("cls"); Edit(book);break;
case '8': break;
default: cout << "Неверный пункт меню!\n\n";
}
}
ofstream outfile;
    outfile.open("Out.txt");
       for (int i=0;i< length;i++)
            outfile << a[i].name << " " << a[i].genre << " " << a[i].author << a[i].lists << " " << a[i].year << " " << a[i].cost<< " " << a[i].availbility << " " << endl;
return 0;

}
