
#include <string>
#include "PermanentEmployee.h"
#include "PermanentEmployee.cpp"
#include "TemporaryEmployee.h"
#include "TemporaryEmployee.cpp"
#include "Date.cpp"
#include <vector>
#include "EmployeeClass.h"
#include "EmployeeClass.cpp"
#include <iostream>
#include <algorithm>
#define MAXNUM 20
using namespace std;
TemporaryEmployee tempEmp(0,0,"","","",0.0,Date(0,0,0),Date(0,0,0),0);
TemporaryEmployee LinkedList[MAXNUM] ;  // array declaration
vector<EmployeeClass> Addedlist;
void fill(){
    for(auto & i : LinkedList){
        i=tempEmp;}}
void displayTemp(int number){
    for(auto & i : LinkedList){
        if(i.getEmployeeNumber()==number){
            cout << "Number: " << i.getEmployeeNumber() << "\nType:Temporary Employee" << "\nName:"
                 << i.getName() << "\nSurname:" << i.getSurname() << "\nTitle:"
                 << i.getTitle() << "\nSalary Coefficient:" << i.getSalaryCoefficient()
                 << "\nDateofBirth:" << i.getDateofBirth().getDay() <<
                 "-" << i.getDateofBirth().getMonth() << "-" << i.getDateofBirth().getYear()
                 << "\nDate of Appointment:" << i.getDateofAppointment().getDay() << "-"
                 << i.getDateofAppointment().getMonth() << "-" << i.getDateofAppointment().getYear()
                 << "\nLength Of Service:" << i.getLengthofService();}}}
int front=-1;
int rear=-1;
int circ = 20;
// function to insert an element
void add(const TemporaryEmployee& element)
{
    if(front==-1 && rear==-1)   // condition to check empty
    {
        front=0;
        rear=0;
        LinkedList[rear]=element;
        Addedlist.push_back(element);}
    else if((rear+1)%MAXNUM==front)  // condition to check full
        {
        for(; circ>0; circ--){
            if(LinkedList[circ].getEmployeeNumber()==0){
                LinkedList[circ]=element;
                if(circ==0)
                    circ=20;
                break;}}}
    else{
        rear=(rear+1)%MAXNUM;       // rear is incremented
        LinkedList[rear]=element;// assigning a value at the rear position.
        Addedlist.push_back(element);}}
bool CheckTempExist(TemporaryEmployee LinkedList2[],int number){
    for(int i=0; i<MAXNUM; i++){
        if(LinkedList2[i].getEmployeeNumber()==number){
            return true;}}return false;}
void ChangeTS(TemporaryEmployee LinkedList3[],const string& title, float salary, int number ){
    for(int i=0; i<MAXNUM; i++){
        if(LinkedList3[i].getEmployeeNumber()==number){
            LinkedList3[i].setSalaryCoefficient(salary);
            LinkedList3[i].setTitle(title);
            cout<<"Number: "<<LinkedList[i].getEmployeeNumber()<<"\nNew Salary Coefficient: "<<LinkedList[i].getSalaryCoefficient()<<"\nNew Title: "<<LinkedList[i].getTitle()<<"\n";}}}
void deleteNode(TemporaryEmployee LinkedList4[],int number){
    for(int i=0; i<MAXNUM; i++){
        if(LinkedList4[i].getEmployeeNumber()==number){
            LinkedList4[i]=tempEmp;}}}
class DoubleDynamicLinkedList{
public:
    PermanentEmployee data;
    DoubleDynamicLinkedList* next;
    DoubleDynamicLinkedList* prev;
    explicit DoubleDynamicLinkedList(PermanentEmployee newEmp):data(std::move(newEmp)){
        next = nullptr;
        prev = nullptr;}};
DoubleDynamicLinkedList* head = nullptr;
void insertAtHead(DoubleDynamicLinkedList* &head2, const PermanentEmployee& newEmp){
    auto* n = new DoubleDynamicLinkedList(newEmp);
    n->next = head2;
    if(head2 != nullptr){
        head2->prev =n;}
    head2 =  n;
    Addedlist.push_back(newEmp);}
void DisplayPerson(DoubleDynamicLinkedList* &head3, int number){
    DoubleDynamicLinkedList* temp = head3;
    while (temp!=nullptr ){
        if(temp->data.getEmployeeNumber()==number) {
            cout << "Number: " << temp->data.getEmployeeNumber() << "\nType:Permanent Employee" << "\nName:"
                 << temp->data.getName() << "\nSurname:" << temp->data.getSurname() << "\nTitle:"
                 << temp->data.getTitle() << "\nSalary Coefficient:" << temp->data.getSalaryCoefficient()
                 << "\nDateofBirth:" << temp->data.getDateofBirth().getDay() <<
                 "-" << temp->data.getDateofBirth().getMonth() << "-" << temp->data.getDateofBirth().getYear()
                 << "\nDate of Appointment:" << temp->data.getDateofAppointment().getDay() << "-"
                 << temp->data.getDateofAppointment().getMonth() << "-" << temp->data.getDateofAppointment().getYear()
                 << "\nLength Of Service:" << temp->data.getLengthofService();
            break;}
        temp = temp->next;}}
void changetitlesalary(DoubleDynamicLinkedList* head4, const string& title, float salary, int number ){
    DoubleDynamicLinkedList* temp = head4;
    while (head4 != nullptr){
        if(temp->data.getEmployeeNumber()==number){
            temp->data.setTitle(title);
            temp->data.setSalaryCoefficient(salary);}
        head4 = head4->next;}
        cout<<"Number: "<<temp->data.getEmployeeNumber()<<"Name: "<<temp->data.getName()<<"Surname: "<<temp->data.getSurname()<<"\nNew Salary Coefficient: "<<temp->data.getSalaryCoefficient()<<"\nNew Title: "<<temp->data.getTitle()<<"\n";}
bool CheckDoubleExist(DoubleDynamicLinkedList* &head6, int number){
 DoubleDynamicLinkedList* temp = head6;
    while(temp != nullptr ){
        if(temp->data.getEmployeeNumber()==number){
            return true;}
        temp = temp->next;}
    return false;}
void deleteEmployeeNode(DoubleDynamicLinkedList* head5, int number){
    DoubleDynamicLinkedList* temp = head5;
    // If linked list is empty
    if (head5 == nullptr){
        return;}
    // If the list contains only a single node
    if((head5)->data.getEmployeeNumber() == number && (head5)->next == nullptr ){
        free(head5);
        cout<<"Employee Number with "<<number<< " Deleted...";
        return;}
    while(temp != nullptr&& temp ->data.getEmployeeNumber()!=number){
        temp=temp->next;}
    if(temp->prev != nullptr){
        temp->prev->next=temp->next;}
    if(temp->next!= nullptr){
        temp->next->prev=temp->prev;}
    delete temp;}
void CreatePerm(int number,int type, const string& name,const string& surname, const string& title,float sc,const Date &BDate,const Date &ADate,int len){
    PermanentEmployee newEmp(number,type,name,surname,title,sc,BDate,ADate,len);
    insertAtHead(head, newEmp);
    cout<<"Number: "<<number<<"\nType:Permanent Employee"<<"\nName:"<<name<<"\nSurname:"<<surname<<"\nTitle:"<<title<<"\nSalary Coefficient:"<<sc<<"\nDateofBirth:"<<BDate.getDay()<<
    "-"<<BDate.getMonth()<<"-"<<BDate.getYear()<<"\nDate of Appointment"<<ADate.getDay()<<"-"<<ADate.getMonth()<<"-"<<ADate.getYear()<<"\nLength Of Service:"<<len;}
void CreateTemp(int number,int type,const string& name,const string& surname, const string& title,float sc,const Date &BDate,const Date &ADate,int len){
    TemporaryEmployee newEmp2(number,type,name,surname,title,sc,BDate,ADate,len);
    add(newEmp2);
    cout<<"Number: "<<number<<"\nType:Temporary Employee"<<"\nName:"<<name<<"\nSurname:"<<surname<<"\nTitle:"<<title<<"\nSalary Coefficient:"<<sc<<"\nDateofBirth:"<<BDate.getDay()<<
        "-"<<BDate.getMonth()<<"-"<<BDate.getYear()<<"\nDate of Appointment:"<<ADate.getDay()<<"-"<<ADate.getMonth()<<"-"<<ADate.getYear()<<"\nLength Of Service:"<<len;}
void CreateEmployee(int number ,int newmi) {
    int type;
    cout << "Type The Employee Type\n";
    cin >> type;
    cout << "Type The Name\n";
    string name;
    cin >> name;
    cout << "Type Surname\n";
    string surname;
    cin >> surname;
    cout << "Type Title\n";
    string title;
    cin >> title;
    cout << "Type Salary Coefficient\n";
    string sc2;
    cin.ignore();
    getline(cin, sc2);
    float sc = stof(sc2);
    cout << "Type Birth Date\n";
    string bdate;
    cin >> bdate;
    cout << "Type Appointment Date\n";
    string adate;
    cin >> adate;
    int len;
    if (newmi == 1) {
        cout << "Type Length of Service Days\n";
        cin >> len;}
    else
        len = 0;
    string delimiter = "-";
    int bday = stoi(bdate.substr(0, bdate.find(delimiter)));
    int bmonth = stoi(bdate.substr(3, bdate.find(delimiter)));
    int byear = stoi(bdate.substr(6, bdate.find('\n')));
    Date BDate(bday, bmonth, byear);
    int aday = stoi(adate.substr(0, adate.find(delimiter)));
    int amonth = stoi(adate.substr(3, adate.find(delimiter)));
    int ayear = stoi(adate.substr(6, adate.find('\n')));
    Date ADate(aday, amonth, ayear);
    if(type==1){
        CreatePerm(number,type,name,surname,title,sc,BDate,ADate,len);}
    else {
        CreateTemp(number,type,name,surname,title,sc,BDate,ADate,len);
        }}
int main() {
    fill();
    int x = 100;
while(x>0) {
    cout << "\n____Employee Recording System__\n"
            "Please select for the following Menu Operation:\n"
            "1) Appointment of a new employee\n"
            "2) Appointment of a transferred employee\n"
            "3) Updating the title and salary coefficient of an employee\n"
            "4) Deletion of an employee\n"
            "5) Listing the information of an employee\n"
            "6) Listing employees ordered by employee number\n"
            "7) Listing employees ordered by appointment date\n"
            "8) Listing employees appointed after a certain date\n"
            "9) Listing employees assigned in a given year\n"
            "10) Listing employees born before a certain date\n"
            "11) Listing employees born in a particular month\n"
            "12) Listing the information of the last assigned employee with given title\n"
            "Please type 0 to finish the process\n"
         << endl;
        cin>>x;
        switch (x) {
                case 1: {
                  int number;
                  cout << "Please type the employee number\n";
                  cin >> number;
                  if(CheckDoubleExist(head,number)|| CheckTempExist(LinkedList, number))
                      cout<<"That employee already exist."<<endl;
                  else {
                      CreateEmployee(number,0);
                      cout<<"  \nEMPLOYEE CREATED\n";}
                  break;}
                case 2: {
                       int number;
                       cout << "Please type the employee number\n";
                       cin >> number;
                       if(CheckDoubleExist(head,number) || (CheckTempExist(LinkedList, number))){
                           break;}
                       else {
                           CreateEmployee(number,1);
                           cout<<"  \nEMPLOYEE TRANSFERRED\n";}
                           break;}
                case 3: {
                            int number;
                            cout << "Please Type The Employee Number\n";
                            cin >> number;
                            if(CheckDoubleExist(head,number)){
                                cout << "Type Title\n";
                                string title;
                                cin >> title;
                                cout << "Type Salary Coefficient\n";
                                string sc2;
                                cin.ignore();
                                getline(cin, sc2);
                                float sc = stof(sc2);
                                changetitlesalary(head,title,sc,number);
                                for (auto & i : Addedlist) {
                                    if(i.getEmployeeNumber()==number){
                                        i.setTitle(title);
                                    i.setSalaryCoefficient(sc);
                                    cout<<"\n EMPLOYEE UPDATED \n";
                                    }}}
                            else if((CheckTempExist(LinkedList, number))){
                                cout << "Type Title\n";
                                string title;
                                cin >> title;
                                cout << "Type Salary Coefficient\n";
                                string sc2;
                                cin.ignore();
                                getline(cin, sc2);
                                float sc = stof(sc2);
                                ChangeTS(LinkedList,title,sc,number);
                                for (auto & i : Addedlist) {
                                    if(i.getEmployeeNumber()==number){
                                        i.setTitle(title);
                                    i.setSalaryCoefficient(sc);}}
                                cout<<"\n EMPLOYEE UPDATED \n";}
                            else{
                                cout<<"There is no employee with the given number\n";}
                            break;}
                case 4: {
                            int number;
                            cout << "Please Type The Employee Number Which You Want to Delete\n";
                            cin >> number;
                            if(CheckDoubleExist(head,number)){
                                deleteEmployeeNode(head, number);
                                for (auto & i : Addedlist) {
                                    if(i.getEmployeeNumber()==number){
                                        i=tempEmp;}}
                                cout<<"\n EMPLOYEE DELETED \n";}
                            else if((CheckTempExist(LinkedList, number))){
                                deleteNode(LinkedList,number);
                                for (auto & i : Addedlist) {
                                        if(i.getEmployeeNumber()==number){
                                            i=tempEmp;}}
                                cout<<"\n EMPLOYEE DELETED \n";}
                            else{
                                cout<<"There is no employee with the given number\n";}
                            break;}
                case 5: {
                    int number;
                    cout << "Please Type The Employee Number Which You Want to Display\n";
                    cin >> number;
                    if(CheckDoubleExist(head,number)){
                        DisplayPerson(head,number);}
                    else if((CheckTempExist(LinkedList, number))){
                        displayTemp(number);}
                    else{
                        cout<<"There is no employee with the given number\n";}
                    break;}
                case 6:{
                    vector<EmployeeClass> list;
                    DoubleDynamicLinkedList* temp = head;
                    while (temp!=nullptr ){
                        list.push_back(temp->data);
                        temp = temp->next;}
                    for (auto & i : LinkedList){
                        if(i.getEmployeeNumber()!=0)
                            list.push_back(i);}

                    sort( list.begin( ), list.end( ), [](EmployeeClass& lhs, EmployeeClass& rhs ){
                    return lhs.getEmployeeNumber() < rhs.getEmployeeNumber();});
                        for (const auto& xz :list){
                        cout<<"\n"<<xz.getEmployeeNumber()<<" "<<xz.getName()<<" "<<xz.getSurname()<<endl;}
                break;}
                case 7:{
                    vector<EmployeeClass> list;
                    DoubleDynamicLinkedList* temp = head;
                    while (temp!=nullptr ){
                        list.push_back(temp->data);
                        temp = temp->next;}
                    for (auto & i : LinkedList){
                        if(i.getEmployeeNumber()!=0)
                            list.push_back(i);}
                    sort( list.begin( ), list.end( ), [](EmployeeClass& lhs, EmployeeClass& rhs ){
                        return (lhs.getDateofAppointment().getYear()*365+lhs.getDateofAppointment().getMonth()*30+lhs.getDateofAppointment().getDay()) < (rhs.getDateofAppointment().getYear()*365+rhs.getDateofAppointment().getMonth()*30+rhs.getDateofAppointment().getDay());});
                    for (const auto& xy :list){
                        cout<<"\n"<<xy.getDateofAppointment().getDay()<<"-"<<xy.getDateofAppointment().getMonth()<<"-"<<xy.getDateofAppointment().getYear()<<" "<<xy.getName()<<" "<<xy.getSurname()<<endl;}
                break;}
                case 8:{
                    cout << "Type The Date\n";
                    string Ddate;
                    cin >> Ddate;
                    int Dday = stoi(Ddate.substr(0, Ddate.find('-')));
                    int Dmonth = stoi(Ddate.substr(3, Ddate.find('-')));
                    int Dyear = stoi(Ddate.substr(6, Ddate.find('\n')));
                    int num= Dyear*365+Dmonth*30+Dday;
                    vector<EmployeeClass> list;
                    DoubleDynamicLinkedList* temp = head;
                    while (temp!=nullptr ){
                        list.push_back(temp->data);
                        temp = temp->next;}
                    for (auto & i : LinkedList){
                        if(i.getEmployeeNumber()!=0)
                            list.push_back(i);}
                    sort( list.begin( ), list.end( ), [](EmployeeClass& lhs, EmployeeClass& rhs ){
                        return (lhs.getDateofAppointment().getYear()*365+lhs.getDateofAppointment().getMonth()*30+lhs.getDateofAppointment().getDay()) > (rhs.getDateofAppointment().getYear()*365+rhs.getDateofAppointment().getMonth()*30+rhs.getDateofAppointment().getDay());});
                    for (const auto& xt :list){
                        if((xt.getDateofAppointment().getDay()+xt.getDateofAppointment().getMonth()*30+xt.getDateofAppointment().getYear()*365)>num)
                            cout<<"\n"<<xt.getDateofAppointment().getDay()<<"-"<<xt.getDateofAppointment().getMonth()<<"-"<<xt.getDateofAppointment().getYear()<<" "<<xt.getName()<<" "<<xt.getSurname()<<endl;}
                   break;}
                case 9:{
                cout << "Type The Year\n";
                string year;
                cin >> year;
                int Dyear = stoi(year);
                vector<EmployeeClass> list;
                DoubleDynamicLinkedList* temp = head;
                while (temp!=nullptr ){
                    list.push_back(temp->data);
                    temp = temp->next;}
                for (auto & i : LinkedList){
                    if(i.getEmployeeNumber()!=0)
                        list.push_back(i);}
                sort( list.begin( ), list.end( ), [](EmployeeClass& lhs, EmployeeClass& rhs ){
                    return (lhs.getDateofAppointment().getYear()*365+lhs.getDateofAppointment().getMonth()*30+lhs.getDateofAppointment().getDay()) < (rhs.getDateofAppointment().getYear()*365+rhs.getDateofAppointment().getMonth()*30+rhs.getDateofAppointment().getDay());});
                for (const auto& xl :list){
                    if((xl.getDateofAppointment().getYear()*365)==Dyear)
                        cout<<"\n"<<xl.getDateofAppointment().getDay()<<"-"<<xl.getDateofAppointment().getMonth()<<"-"<<xl.getDateofAppointment().getYear()<<" "<<xl.getName()<<" "<<xl.getSurname()<<endl;}
                  break;}
                case 10:{
                    cout << "Type The Date\n";
                    string BBdate;
                    cin >> BBdate;
                    int Dday = stoi(BBdate.substr(0, BBdate.find('-')));
                    int Dmonth = stoi(BBdate.substr(3, BBdate.find('-')));
                    int Dyear = stoi(BBdate.substr(6, BBdate.find('\n')));
                    int num= Dyear*365+Dmonth*30+Dday;
                    vector<EmployeeClass> list;
                    DoubleDynamicLinkedList* temp = head;
                    while (temp!=nullptr ){
                        list.push_back(temp->data);
                        temp = temp->next;}
                    for (auto & i : LinkedList){
                        if(i.getEmployeeNumber()!=0)
                            list.push_back(i);}
                    sort( list.begin( ), list.end( ), [](EmployeeClass& lhs, EmployeeClass& rhs ){
                        return (lhs.getDateofBirth().getYear()*365+lhs.getDateofBirth().getMonth()*30+lhs.getDateofBirth().getDay()) < (rhs.getDateofBirth().getYear()*365+rhs.getDateofBirth().getMonth()*30+rhs.getDateofBirth().getDay());});
                    for (const auto& xh :list){
                        if((xh.getDateofBirth().getDay()+xh.getDateofBirth().getMonth()*30+xh.getDateofBirth().getYear()*365)<num)
                            cout<<"\n"<<xh.getDateofBirth().getDay()<<"-"<<xh.getDateofBirth().getMonth()<<"-"<<xh.getDateofBirth().getYear()<<" "<<xh.getName()<<" "<<xh.getSurname()<<endl;}
                    break;}
                case 11:{
                cout << "Type The Month\n";
                string month;
                cin >> month;
                int month2 = stoi(month);
                vector<EmployeeClass> list;
                DoubleDynamicLinkedList* temp = head;
                while (temp!=nullptr ){
                    list.push_back(temp->data);
                    temp = temp->next;}
                for (auto & i : LinkedList){
                    if(i.getEmployeeNumber()!=0)
                        list.push_back(i);}
                sort( list.begin( ), list.end( ), [](EmployeeClass& lhs, EmployeeClass& rhs ){
                    return (lhs.getDateofAppointment().getYear()*365+lhs.getDateofAppointment().getMonth()*30+lhs.getDateofAppointment().getDay()) < (rhs.getDateofAppointment().getYear()*365+rhs.getDateofAppointment().getMonth()*30+rhs.getDateofAppointment().getDay());});
                for (const auto& xa :list){
                    if(xa.getDateofAppointment().getMonth()==month2)
                        cout<<"\n"<<xa.getDateofAppointment().getDay()<<"-"<<xa.getDateofAppointment().getMonth()<<"-"<<xa.getDateofAppointment().getYear()<<" "<<xa.getName()<<" "<<xa.getSurname()<<endl;}
                break;}
                case 12:{
                    cout << "Type The Title\n";
                    string title2;
                    cin >> title2;
                    std::reverse(Addedlist.begin(), Addedlist.end());
                    for (auto & elem : Addedlist){
                        if (elem.getTitle() ==title2){
                            cout<<"\n"<<elem.getTitle()<<" "<<elem.getName()<<" "<<elem.getSurname()<<endl;
                            break;}}
                    break;}}}}










