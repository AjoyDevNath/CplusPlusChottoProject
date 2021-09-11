#include<bits/stdc++.h>
#define pb push_back
#include<conio.h>

using namespace std;

class library
{
    int x;
    char menu;
    int isbn=0, cnt=0;
    string id,password;
    bool b3;

public:

    vector<int> v;

    void main_menu();
    void get_info();//
    bool check_info();
    void set_value();
    void check_book(int );

    void help();

    void view_stocks();

    void department();

    void back_key();

    void book_list();

    void borrow_book();

    void member_account(int, int );

    void search_books();

    int exit();

    //~libary() {};
};


inline void library :: get_info()
{
    cout<<"Enter your ID : ";
    cin>>id;
    cout<<"Enter your password : ";
    cin>>password;
}

inline bool library :: check_info()
{
    if (id == "C191038" && password == "C191038" || id == "C191040" && password == "C191040" || id == "C181093" && password == "C181093" )
    {
        b3 = true;
    }
    else
    {
        cout<<"\nOOps!!!Password Doesn't Matched! \n\nTry Again...."<<endl;
        b3 = false;
    }

    return b3;
}

void library :: set_value()
{
    cout<<"\nPress 1  . Borrow a new Book"<<endl;
    cout<<"Press 2  . View member account"<<endl;
    cout<<"Press 3  . Search Book"<<endl;
    cout<<"Press 4  . View stock"<<endl;
    cout<<"Press 5  . Quit"<<endl<<endl<<endl;

    cout<<"Enter Transaction : ";

    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        borrow_book();
        break;

    case 2:
        member_account(isbn,cnt);
        break;

    case 3:
        search_books();
        break;

    case 4:
        view_stocks();
        break;


    case 5:
        exit();
        break;

    default:
        cout<<"Choose a number from the index ." <<endl;
        set_value();

    }
}

void library::check_book(int a)
{

    if( a == 8800 || a == 8900 || a == 8801 || a == 8802 || a == 9001 || a == 9002 || a == 9000 || a == 9100 || a == 9001 || a == 9200 || a == 9201 || a == 9202 || a == 9300 || a == 9301 || a == 9400 || a == 9401 || a == 9500 || a == 9501 || a == 9600|| a == 9601|| a == 9700|| a == 9701 || a == 9800 || a == 9801 || a == 9802 || a == 9803 || a == 9804 || a == 9900 || a == 9901 || a == 9902 || a == 9903 || a == 9904 || a == 9905 || a == 9906   )
    {
        cout<<"\n\nThe book is found.\n\nDo you want us to reserved the book for you? \n\nIf yes then press 1.\n\nElse press 2\n\n "<<endl;
jump:

        int x;
        cin>>x;

        if(x==1)
        {
            cout<<"\n\nYour reservation is successful. The Book is reserved for you.Take the book from the university central library with in three academic days.\n\n\n\n      Thank you.\n\n\n";
            //int counter = 0;
            cnt++;

            isbn = a;
            //cnt = counter;
            main_menu();
        }
        else if(x==2)
        {
            cout<<"\n\nReservation canceled\n\n";
            borrow_book();
        }
        else
        {
            cout<<"\n\nplease enter a valid number.....\n\n";
            goto jump;
        }



    }

    else
    {
        cout<<"\n\nSorry Book isn't found!" <<endl<<endl;
        help();
    }

}

inline void library :: help()
{
    cout<<"\nIf you don't know the ISBN number PRESS ' h ' to see the book list\n\n";
    char h;
    cin>>h;//problem line

    if(h == 'h'||h == 'H')
    {
        book_list();
    }

}

void library::department()
{
    cout<<"\n\nChoose your department :\n\n";
    cout<<"\n\n1. CSE\n";
    cout<<"2. EEE\n";
    cout<<"3. ME\n";
    cout<<"4. Pharmacy\n";
    cout<<"5. Civil\n";
    cout<<"6. CCE\n";
    cout<<"7. ETE\n";
    cout<<"8. BBA\n";
    cout<<"9. LAW\n";
    cout<<"10.Shariah & Islamic studies\n";
    cout<<"11.Arts & Humanities\n";
    cout<<"12.Social Science\n";

    cout<<"\nEnter a number from the index ....\n";
    int x;
    cin>>x;

    switch(x)
    {
    case 1:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9900"<<"  "<<"\t\t"<<"CPP                 "<<"\t\t\t"<<"Tamim Sharier Subeen       "<<"\t\t\t"<<"45 "<<endl;
        cout<<"IS-9901"<<"  "<<"\t\t"<<"L.A                 "<<"\t\t\t"<<"Sheldon Axler              "<<"\t\t\t"<<"123"<<endl;
        cout<<"IS-9902"<<"  "<<"\t\t"<<"DP                  "<<"\t\t\t"<<"Richard E. Bellman         "<<"\t\t\t"<<"65 "<<endl;
        cout<<"IS-9903"<<"  "<<"\t\t"<<"AlgoDS              "<<"\t\t\t"<<"Thomas H Corman            "<<"\t\t\t"<<"90 "<<endl;
        cout<<"IS-9904"<<"  "<<"\t\t"<<"LP                  "<<"\t\t\t"<<"Robert J. Vanderbei        "<<"\t\t\t"<<"45 "<<endl;
        cout<<"IS-9905"<<"  "<<"\t\t"<<"DS                  "<<"\t\t\t"<<"Corman                     "<<"\t\t\t"<<"33  "<<endl;
        cout<<"IS-9906"<<"  "<<"\t\t"<<"DBMS                "<<"\t\t\t"<<"Peter Rob                  "<<"\t\t\t"<<"89 "<<endl;
        back_key();
        break;

    case 2:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9800"<<"  "<<"\t\t"<<"EMF                 "<<"\t\t\t"<<" Stephen J. Chapman        "<<"\t\t\t"<<"90 "<<endl;
        cout<<"IS-9801"<<"  "<<"\t\t"<<"PPS                 "<<"\t\t\t"<<"Rohit Mehtha               "<<"\t\t\t"<<"32 "<<endl;
        cout<<"IS-9802"<<"  "<<"\t\t"<<"OET                 "<<"\t\t\t"<<"VK Mehtha                  "<<"\t\t\t"<<"12 "<<endl;
        cout<<"IS-9803"<<"  "<<"\t\t"<<"PEM                 "<<"\t\t\t"<<"VK Mehtha                  "<<"\t\t\t"<<"78 "<<endl;
        cout<<"IS-9804"<<"  "<<"\t\t"<<"CS                  "<<"\t\t\t"<<"Symon C. Json              "<<"\t\t\t"<<"45 "<<endl;
        back_key();
        break;

    case 3:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9700"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"190"<<endl;
        cout<<"IS-9701"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"22 "<<endl;
        back_key();
        break;



    case 4:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9600"<<"  "<<"\t\t"<<"ABB                 "<<"\t\t\t"<<"Leon Shargel               "<<"\t\t\t"<<"30 "<<endl;
        cout<<"IS-9601"<<"  "<<"\t\t"<<"B&CP                "<<"\t\t\t"<<"Bartram G. Katzung         "<<"\t\t\t"<<"152"<<endl;
        back_key();
        break;

    case 5:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9500"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"58 "<<endl;
        cout<<"IS-9501"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"72 "<<endl;
        back_key();
        break;

    case 6:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9400"<<"  "<<"\t\t"<<"CPP                 "<<"\t\t\t"<<"Tamim Sharier Subeen       "<<"\t\t\t"<<"78 "<<endl;
        cout<<"IS-9401"<<"  "<<"\t\t"<<"CP                  "<<"\t\t\t"<<"H.C.Verma                  "<<"\t\t\t"<<"46 "<<endl;
        back_key();

        break;

    case 7:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9300"<<"  "<<"\t\t"<<"E&CET               "<<"\t\t\t"<<"Stephen Frempong           "<<"\t\t\t"<<"190"<<endl;
        cout<<"IS-9301"<<"  "<<"\t\t"<<"N&C                 "<<"\t\t\t"<<"Comm Tech Grp Corp         "<<"\t\t\t"<<"22 "<<endl;
        back_key();
        break;

    case 8:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9200"<<"  "<<"\t\t"<<"F.B. Accounting     "<<"\t\t\t"<<"Rajesh Goel                "<<"\t\t\t"<<"190"<<endl;
        cout<<"IS-9201"<<"  "<<"\t\t"<<"Financial Accounting"<<"\t\t\t"<<"Soumya Mukherjee           "<<"\t\t\t"<<"22 "<<endl;
        cout<<"IS-9202"<<"  "<<"\t\t"<<"Business Statistics "<<"\t\t\t"<<"T R Jain                   "<<"\t\t\t"<<"22 "<<endl;
        back_key();
        break;

    case 9:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-9100"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"190"<<endl;
        cout<<"IS-9101"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"22 "<<endl;
        back_key();
        break;


    case 10:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;
        cout<<"IS-8900"<<"  "<<"\t\t"<<"P&S                 "<<"\t\t\t"<<"Alexander Rosender         "<<"\t\t\t"<<"190"<<endl;
        cout<<"IS-9000"<<"  "<<"\t\t"<<"Shari'ah Law        "<<"\t\t\t"<<"Mohammad Hashim            "<<"\t\t\t"<<"90 "<<endl;
        cout<<"IS-9001"<<"  "<<"\t\t"<<"Slavery and Islam   "<<"\t\t\t"<<"A.C. Brown                 "<<"\t\t\t"<<"202"<<endl;
        cout<<"IS-9002"<<"  "<<"\t\t"<<"Islamic Law         "<<"\t\t\t"<<"Mawil Izzi Dien            "<<"\t\t\t"<<"56 "<<endl;
        back_key();
        break;

    case 11:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;

        cout<<"IS-8800"<<"  "<<"\t\t"<<"Gatsby              "<<"\t\t\t"<<"F. Scott Fitzgerald.       "<<"\t\t\t"<<"190"<<endl;
        cout<<"IS-8801"<<"  "<<"\t\t"<<"P&P                 "<<"\t\t\t"<<"Jane Austen                "<<"\t\t\t"<<"22 "<<endl;
        cout<<"IS-8802"<<"  "<<"\t\t"<<"DSTP                "<<"\t\t\t"<<"Finn                       "<<"\t\t\t"<<"22 "<<endl;
        back_key();
        break;
    case 12:
        cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;

        cout<<"IS-8900"<<"  "<<"\t\t"<<"P&S                 "<<"\t\t\t"<<"Alexander Rosender         "<<"\t\t\t"<<"190"<<endl;
        back_key();
        break;

    default:
        cout<<"Invalid Number!!!!! Try one from index";
        department();
    }
}

inline void library :: back_key()
{
    cout<<"\nPRESS 'b' for previous option.... \n\nPRESS 'm' for main menu\n\n";
    char ch;
    cin>>ch;
    if(ch == 'b' || ch == 'b')
    {
        department();
    }
    else if(ch == 'm' || ch == 'M')
    {
        set_value();
    }
}

inline void library::book_list()
{
    cout<<"\n\nISBN "<<"  "<<"\t\t\t"<<"title           "<<"\t\t\t"<<"author                 "<<"\t\t\t"<<"       quantity       "<<endl<<endl;

    cout<<"IS-8800"<<"  "<<"\t\t"<<"Gatsby              "<<"\t\t\t"<<"F. Scott Fitzgerald.       "<<"\t\t\t"<<"190"<<endl;
    cout<<"IS-8801"<<"  "<<"\t\t"<<"P&P                 "<<"\t\t\t"<<"Jane Austen                "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-8802"<<"  "<<"\t\t"<<"DSTP                "<<"\t\t\t"<<"Finn                       "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-8900"<<"  "<<"\t\t"<<"P&S                 "<<"\t\t\t"<<"Alexander Rosender         "<<"\t\t\t"<<"190"<<endl;
    cout<<"IS-9000"<<"  "<<"\t\t"<<"Shari'ah Law        "<<"\t\t\t"<<"Mohammad Hashim            "<<"\t\t\t"<<"90 "<<endl;
    cout<<"IS-9001"<<"  "<<"\t\t"<<"Slavery and Islam   "<<"\t\t\t"<<"A.C. Brown                 "<<"\t\t\t"<<"202"<<endl;
    cout<<"IS-9002"<<"  "<<"\t\t"<<"Islamic Law         "<<"\t\t\t"<<"Mawil Izzi Dien            "<<"\t\t\t"<<"56 "<<endl;
    cout<<"IS-9100"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"190"<<endl;
    cout<<"IS-9101"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-9200"<<"  "<<"\t\t"<<"F.B. Accounting     "<<"\t\t\t"<<"Rajesh Goel                "<<"\t\t\t"<<"190"<<endl;
    cout<<"IS-9201"<<"  "<<"\t\t"<<"Financial Accounting"<<"\t\t\t"<<"Soumya Mukherjee           "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-9202"<<"  "<<"\t\t"<<"Business Statistics "<<"\t\t\t"<<"T R Jain                   "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-9300"<<"  "<<"\t\t"<<"E&CET               "<<"\t\t\t"<<"Stephen Frempong           "<<"\t\t\t"<<"190"<<endl;
    cout<<"IS-9301"<<"  "<<"\t\t"<<"N&C                 "<<"\t\t\t"<<"Comm Tech Grp Corp         "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-9400"<<"  "<<"\t\t"<<"CPP                 "<<"\t\t\t"<<"Tamim Sharier Subeen       "<<"\t\t\t"<<"78 "<<endl;
    cout<<"IS-9401"<<"  "<<"\t\t"<<"CP                  "<<"\t\t\t"<<"H.C.Verma                  "<<"\t\t\t"<<"46 "<<endl;
    cout<<"IS-9500"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"58 "<<endl;
    cout<<"IS-9501"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"72 "<<endl;
    cout<<"IS-9600"<<"  "<<"\t\t"<<"ABB                 "<<"\t\t\t"<<"Leon Shargel               "<<"\t\t\t"<<"30 "<<endl;
    cout<<"IS-9601"<<"  "<<"\t\t"<<"B&CP                "<<"\t\t\t"<<"Bartram G. Katzung         "<<"\t\t\t"<<"152"<<endl;
    cout<<"IS-9700"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"190"<<endl;
    cout<<"IS-9701"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"22 "<<endl;
    cout<<"IS-9800"<<"  "<<"\t\t"<<"EMF                 "<<"\t\t\t"<<" Stephen J. Chapman        "<<"\t\t\t"<<"90 "<<endl;
    cout<<"IS-9801"<<"  "<<"\t\t"<<"PPS                 "<<"\t\t\t"<<"Rohit Mehtha               "<<"\t\t\t"<<"32 "<<endl;
    cout<<"IS-9802"<<"  "<<"\t\t"<<"OET                 "<<"\t\t\t"<<"VK Mehtha                  "<<"\t\t\t"<<"12 "<<endl;
    cout<<"IS-9803"<<"  "<<"\t\t"<<"PEM                 "<<"\t\t\t"<<"VK Mehtha                  "<<"\t\t\t"<<"78 "<<endl;
    cout<<"IS-9804"<<"  "<<"\t\t"<<"CS                  "<<"\t\t\t"<<"Symon C. Json              "<<"\t\t\t"<<"45 "<<endl;
    cout<<"IS-9900"<<"  "<<"\t\t"<<"CPP                 "<<"\t\t\t"<<"Tamim Sharier Subeen       "<<"\t\t\t"<<"45 "<<endl;
    cout<<"IS-9901"<<"  "<<"\t\t"<<"L.A                 "<<"\t\t\t"<<"Sheldon Axler              "<<"\t\t\t"<<"123"<<endl;
    cout<<"IS-9902"<<"  "<<"\t\t"<<"DP                  "<<"\t\t\t"<<"Richard E. Bellman         "<<"\t\t\t"<<"65 "<<endl;
    cout<<"IS-9903"<<"  "<<"\t\t"<<"AlgoDS              "<<"\t\t\t"<<"Thomas H Corman            "<<"\t\t\t"<<"90 "<<endl;
    cout<<"IS-9904"<<"  "<<"\t\t"<<"LP                  "<<"\t\t\t"<<"Robert J. Vanderbei        "<<"\t\t\t"<<"45 "<<endl;
    cout<<"IS-9905"<<"  "<<"\t\t"<<"DS                  "<<"\t\t\t"<<"Corman                     "<<"\t\t\t"<<"33  "<<endl;
    cout<<"IS-9906"<<"  "<<"\t\t"<<"DBMS                "<<"\t\t\t"<<"Peter Rob                  "<<"\t\t\t"<<"89 "<<endl;

    main_menu();
}

inline void library::borrow_book()
{
    int isbn_number;
    string title;


    cout<<"Enter the ISBN_number of the book : ";
    cin>>isbn_number;


    check_book(isbn_number);
}

inline void library::member_account(int isbn,int cnt)
{

    cout<<endl<<endl;

    if(id == "C191038")
        {

        cout<<"ID : "<<id<<"\t\t\t\t"<<"Name : Koushik Jamilur Rahman"<<"\t\t\t\t"<<"Contact No : 01780146036"<<"\t\t\t\t"<<"Department : CSE \n\n\n";

        if(isbn == 0 )
        {
            cout<<"\nYou did not reserved any book yet\n";
        }
        else
        {
            v.pb(isbn);

            cout<<"Latest Resereved book's ISBN No.\t\t\t\t";
            for(int i = 1; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
                cout<<endl;
            }

        }
        cout<<"\nTotal issued books:  "<<cnt<<endl;

        main_menu();
    }

    else if(id == "C191040")
    {
        cout<<"ID : "<<id<<"\t\t\t\t"<<"Name: Ajoy Nath"<<"\t\t\t\t"<<"Contact No: 01533306198"<<"\t\t\t\t"<<"Department : CSE \n\n\n";

        if(isbn == 0 )
        {
            cout<<"\nYou did not reserved any book yet\n";
        }
        else
        {
             v.pb(isbn);
            cout<<"Latest Resereved book's ISBN No.\t\t\t\t";
            for(int i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
                cout<<endl;
            }
        }
        cout<<"\nTotal issued books:  "<<cnt<<endl;
        main_menu();
    }

    else if(id == "C181093")
    {
        cout<<"ID:"<<id<<"\t\t\t\t"<<"Name: Rakibul Hasan"<<"\t\t\t\t"<<"Contact no: 01832822959"<<"\t\t\t\t"<<"Department : CSE \n\n\n";
        if(isbn == 0)
        {
            cout<<"\nYou did not reserved any book yet\n";
        }
        else
        {
            v.pb(isbn);
            cout<<"Latest Resereved book's ISBN No.\t\t\t\t";
            for(int i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
                cout<<endl;
            }
        }
        cout<<"\nTotal issued books:  "<<cnt<<endl;
        main_menu();
    }
}

void library ::search_books()
{
    cout<<"Enter the ISBN number of the book : ";
    int isbn_number;
    cin>>isbn_number;

    switch(isbn_number)
    {
    case 8800:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-8800"<<"  "<<"\t\t"<<"Gatsby              "<<"\t\t\t"<<"F. Scott Fitzgerald.       "<<"\t\t\t"<<"190"<<endl;
        break;

    case 8801:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-8801"<<"  "<<"\t\t"<<"P&P                 "<<"\t\t\t"<<"Jane Austen                "<<"\t\t\t"<<"22 "<<endl;
        break;

    case 8802:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-8802"<<"  "<<"\t\t"<<"DSTP                "<<"\t\t\t"<<"Finn                       "<<"\t\t\t"<<"22 "<<endl;
        break;

    case 8900:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-8900"<<"  "<<"\t\t"<<"P&S                 "<<"\t\t\t"<<"Alexander Rosender         "<<"\t\t\t"<<"190"<<endl;
        break;

    case 9000:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9000"<<"  "<<"\t\t"<<"Shari'ah Law        "<<"\t\t\t"<<"Mohammad Hashim            "<<"\t\t\t"<<"90 "<<endl;
        break;

    case 9001:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9001"<<"  "<<"\t\t"<<"Slavery and Islam   "<<"\t\t\t"<<"A.C. Brown                 "<<"\t\t\t"<<"202"<<endl;
        break;

    case 9002:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"  author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9002"<<"  "<<"\t\t"<<"Islamic Law         "<<"\t\t\t"<<"Mawil Izzi Dien            "<<"\t\t\t"<<"56 "<<endl;
        break;

    case 9100:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9100"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"190"<<endl;
        break;

    case 9101:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9101"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"22 "<<endl;
        break;

    case 9200:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9200"<<"  "<<"\t\t"<<"F.B. Accounting     "<<"\t\t\t"<<"Rajesh Goel                "<<"\t\t\t"<<"190"<<endl;
        break;

    case 9201:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9201"<<"  "<<"\t\t"<<"Financial Accounting"<<"\t\t\t"<<"Soumya Mukherjee           "<<"\t\t\t"<<"22 "<<endl;
        break;

    case 9202:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9202"<<"  "<<"\t\t"<<"Business Statistics "<<"\t\t\t"<<"T R Jain                   "<<"\t\t\t"<<"22 "<<endl;
        break;
    case 9300:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9300"<<"  "<<"\t\t"<<"E&CET               "<<"\t\t\t"<<"Stephen Frempong           "<<"\t\t\t"<<"190"<<endl;
        break;

    case 9301:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9301"<<"  "<<"\t\t"<<"N&C                 "<<"\t\t\t"<<"Comm Tech Grp Corp         "<<"\t\t\t"<<"22 "<<endl;
        break;

    case 9400:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9400"<<"  "<<"\t\t"<<"CPP                 "<<"\t\t\t"<<"Tamim Sharier Subeen       "<<"\t\t\t"<<"78 "<<endl;
        break;

    case 9401:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9401"<<"  "<<"\t\t"<<"CP                  "<<"\t\t\t"<<"H.C.Verma                  "<<"\t\t\t"<<"46 "<<endl;
        break;

    case 9500:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9500"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"58 "<<endl;
        break;

    case 9501:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9501"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"72 "<<endl;
        break;

    case 9600:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9600"<<"  "<<"\t\t"<<"ABB                 "<<"\t\t\t"<<"Leon Shargel               "<<"\t\t\t"<<"30 "<<endl;
        break;

    case 9601:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9601"<<"  "<<"\t\t"<<"B&CP                "<<"\t\t\t"<<"Bartram G. Katzung         "<<"\t\t\t"<<"152"<<endl;
        break;

    case 9700:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9700"<<"  "<<"\t\t"<<"ME                  "<<"\t\t\t"<<"R.S Khurmi                 "<<"\t\t\t"<<"190"<<endl;

        break;
    case 9701:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9701"<<"  "<<"\t\t"<<"FOT                 "<<"\t\t\t"<<"Richard Thomas             "<<"\t\t\t"<<"22 "<<endl;
        break;

    case 9800:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9800"<<"  "<<"\t\t"<<"EMF                 "<<"\t\t\t"<<" Stephen J. Chapman        "<<"\t\t\t"<<"90 "<<endl;
        break;

    case 9801:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9801"<<"  "<<"\t\t"<<"PPS                 "<<"\t\t\t"<<"Rohit Mehtha               "<<"\t\t\t"<<"32 "<<endl;
        break;

    case 9802:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9802"<<"  "<<"\t\t"<<"OET                 "<<"\t\t\t"<<"VK Mehtha                  "<<"\t\t\t"<<"12 "<<endl;
        break;

    case 9803:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9803"<<"  "<<"\t\t"<<"PEM                 "<<"\t\t\t"<<"VK Mehtha                  "<<"\t\t\t"<<"78 "<<endl;
        break;

    case 9804:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9804"<<"  "<<"\t\t"<<"CS                  "<<"\t\t\t"<<"Symon C. Json              "<<"\t\t\t"<<"45 "<<endl;
        break;

    case 9900:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9900"<<"  "<<"\t\t"<<"CPP                 "<<"\t\t\t"<<"Tamim Sharier Subeen       "<<"\t\t\t"<<"45 "<<endl;
        break;

    case 9901:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9901"<<"  "<<"\t\t"<<"L.A                 "<<"\t\t\t"<<"Sheldon Axler              "<<"\t\t\t"<<"123"<<endl;
        break;

    case 9902:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9902"<<"  "<<"\t\t"<<"DP                  "<<"\t\t\t"<<"Richard E. Bellman         "<<"\t\t\t"<<"65 "<<endl;
        break;

    case 9903:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9903"<<"  "<<"\t\t"<<"AlgoDS              "<<"\t\t\t"<<"Thomas H Corman            "<<"\t\t\t"<<"90 "<<endl;
        break;

    case 9904:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9904"<<"  "<<"\t\t"<<"LP                  "<<"\t\t\t"<<"Robert J. Vanderbei        "<<"\t\t\t"<<"45 "<<endl;
        break;

    case 9905:
        cout<<"ISBN   "<<"  "<<"\t\t\t"<<"title             "<<"\t\t\t"<<"   author                  "<<"\t\t\t"<<"quantity       "<<endl<<endl;
        cout<<"IS-9905"<<"  "<<"\t\t"<<"DS                  "<<"\t\t\t"<<"Corman                     "<<"\t\t\t"<<"33  "<<endl;
        break;

    case 9906:
        cout<<"IS-9906"<<"  "<<"\t\t"<<"DBMS                "<<"\t\t\t"<<"Peter Rob                  "<<"\t\t\t"<<"89 "<<endl;
        break;

    default:
        cout<<"\n\nThis Book is not available in library.\n\n";
        help();
    }
    main_menu();
}

inline int library :: exit()
{
    cout<<"\n\n          Signing Out!!!";
    return 0;
}



inline void library::view_stocks()
{
    cout<<"1 . All Books"<<endl;
    cout<<"2 . Department wise book"<<endl;
    cout<<"Enter your choice : ";
    int x;
    cin>>x;

    if(x == 1)
    {
        book_list();
    }
    if(x == 2)
    {
        department();
    }

    main_menu();
}



inline void library :: main_menu()
{
    cout<<"\n\nFOR MAIN MENU PREES : P \n\n";
    cin>>menu;
    if(menu=='p'||menu=='P')
    {
        set_value();
    }
}




void recurse()
{
    library ob1;
    ob1.get_info();
    ob1.check_info();

    if( ob1.check_info() == true )
    {
        cout<<"\n\nCongratulation Successfully Login!\n\n"<<endl;
        ob1.set_value();
    }
}


int main()
{
    cout<<"\n\n";
    cout<<"Welcome to Libary Management System of IIUC"<<endl<<endl<<endl<<endl;
    library ob1;
    ob1.get_info();//line no : 26
    ob1.check_info();//line no : 27

    if ( ob1.check_info() == true )
    {
        cout<<"\n\nCongratulation Successfully Login!\n\n"<<endl;
        cout<<"                   See the Unseen\n\n\n\n";
        ob1.set_value();//line no : 28
    }
    else
    {
        while(1)
        {
            recurse();
        }
    }
    getch();
}
