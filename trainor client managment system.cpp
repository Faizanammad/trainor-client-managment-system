// trainor client managment system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Start at 3 sep 2025
// I have used here the vector library for the use of vectors the cstdlib for  direct exit and further 
// made a class of trainor that stores my username
// password and all my details my profile and everything.
// then made a class of client that stores the client all details will add up a new one 
// dlete update view and check the total number of clients

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
class trainor {
    string username = "Faizanammad";
    string password = "noone222";
public:
    
void showprofile()// their will be a switch here in the main and if he wants to access the profile info 
                 //of mine he will enter the passsowrd and then he can acces to that
    {
    cout << "\n===== TRAINER PROFILE =====\n";
        cout << "phone number:03020579977";
       
        cout << "Name: Faizan Ammad\n";
        cout << "Age: 20\n";
        cout << "Gender: Male\n";
        cout << "Specialization: Weight Loss, Strength Training, Muscle training,Diet plan\n";
        cout << "Experience: 2 Years\n";
        cout << "Philosophy: \"Fitness is not a destination, it’s a lifestyle.\"\n";
        cout << "Available Timings: | 5 PM - 9 PM |\n";
        cout << "Location: Lahore, Pakistan\n";
        cout << "Socials: Instagram - @faizanammad | Gmail - Faizanammad356@gmail.com\ | Linkedin - faizanammad \n";
      
        cout << "===========================\n";
        
    }

    void expenses() {
        string expense;
        cout << "Enter your monthly expense details: ";
        cin.ignore(); // clears leftover newline from previous input
        getline(cin, expense);
        cout << "\nEvery month expense: " << expense << endl;
    }
    int check()
    {
        string checkingusername;
        string checkingpassword;
        bool accessGranted = false;

        for (int i = 0; i < 3; i++){

            cout << "Enter username:";
            cin >> checkingusername;
            cout << "\nEnter password:";
            cin >> checkingpassword;


            if (checkingusername == username && checkingpassword == password)
            {
                cout << "acess granted";
                accessGranted = true;
                system("cls");
                show();
                showprofile();
                break;
                
        }
            else
            {
                cout << "Access denied" << endl;
                cout << "Attempts left: " << (2 - i) << "\n\n";
            }
                
                    
            }
        if (!accessGranted) {
            cout << "Too many failed attempts. Exiting...\n";
            return EXIT_FAILURE;
        }
    }
    void show() {
        cout <<                          "\t\t\t\t########################################\n";
        cout <<                          "\t\t\t\t#                                      #\n";
        cout <<                          "\t\t\t\t#      F A I Z A N   F I T N E S S     #\n";
        cout <<                          "\t\t\t\t#                                      #\n";
        cout <<                          "\t\t\t\t########################################\n\n";
    }
};
// further I will makke a new class of client where i will put his her details and will also add some //
// captcha to check whether anyone is accessing is a robot or a human and remaining is written in the notes
// 
class client {
    int age;
    string name;// will use the cin.ignore and getline function here
    float bodyweight;// current and in progress report will change this after a month previous 
    //will be deleted and new onne will save in the report
    int phonenum;
    string gender;// will give an option that u r a male female or not specified like dont want to tell
    int id;
public:
    void addclient(int age,string name,float bodyweight,int phonenum,string gender)
    {
        static int nextID = 1;   
        this->id = nextID; 
        nextID++;
        this->age = age;
        this->name = name;
        this->bodyweight = bodyweight;
        this->phonenum = phonenum;
        this->gender = gender;

    }
    void viewclient(int phonenum)
    {
        bool find = false;// flag
        int checkingphonenum;
       
        cin >> checkingphonenum;
        if (checkingphonenum == phonenum)
        {
            find = true;
            
           
            cout << "Client verified:";
            clientdetails();

        }
        else
        {
            cout << " Client not verified";
            return;
        }


    }
    void clientdetails()
    {
        cout << "Name:" << name << endl
             << "Age:" << age << endl
             << "Gender:" << gender << endl
             << "Phone number:" << phonenum << endl
             << "Id:" << id << endl
             << "Body Weight:" << bodyweight << endl;

    }
    void deleteclient()
    {
        int phoneno;
        cout << " To delete a client Please enter the phone number:";
        cin >> phoneno;
        if (phoneno == phonenum)
            // learn the vectors first and then will fill out this function
        { 

        }
    }
    void totalclients()
    {  

    }
    void progressreport() // here i will tell about the monthly report of a client that will be saved in a text file and will add
        // up a function that will ask for a new body weight now and suggestion for myself
    {

    }
};
// further now will made a new class of pacakage and inherit with it and also have the gym plans included in it 
class package: public client{
    string packagename;
public:
    void showpackage()
    {
        cout << "========================================\n";
        cout << "        💪 Gym Package Details 💪        \n";
        cout << "========================================\n\n";

        cout << "[1] Basic Package:\n";
        cout << "  1. Access to gym facilities\n";
        cout << "  2. Workout plan\n";
        cout << "     👉 Price: 5000 Rs\n\n";

        cout << "[2] Standard Package:\n";
        cout << "  1. Access to gym facilities\n";
        cout << "  2. Workout plan\n";
        cout << "  3. Full Diet Plan\n";
        cout << "  4. Locker\n";
        cout << "  5. Weekly body checkup\n";
        cout << "     👉 Price: 8000 Rs\n\n";

        cout << "[3] Premium Package:\n";
        cout << "  1. Access to gym facilities\n";
        cout << "  2. Workout plan\n";
        cout << "  3. Full Diet Plan\n";
        cout << "  4. Locker\n";
        cout << "  5. Personal trainer\n";
        cout << "  6. Two weekly body checkups\n";
        cout << "     👉 Price: 10000 Rs\n\n";

        cout << "========================================\n";
        cout << "Choose the package that best suits your\n";
        cout << "fitness goals and budget! 🚀\n";
        cout << "========================================\n";
        // after deciding the pacakage we will set a workout plan for the client as mentioned to us
    }

    void workoutplan()
    {
        int choice;

        // Menu print
        cout << "========================================\n";
        cout << "         🏋️ WORKOUT PLANS MENU 🏋️       \n";
        cout << "========================================\n\n";
        cout << "  [1] Single Muscle Split\n";
        cout << "  [2] Double Muscle Split\n";
        cout << "  [3] Switch Workouts\n";
        cout << "  [4] Push Pull Legs (PPL)\n";
        cout << "  [5] Strength + Muscle Training\n";
        cout << "  [6] Custom Training\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear screen after choice
        system("cls");

        // Show only selected plan
        switch (choice)
        {
        case 1:
            cout << "[1] Single Muscle Split:\n";
            cout << "  MON  : Back\n";
            cout << "  TUE  : Chest\n";
            cout << "  WED  : Shoulder\n";
            cout << "  THU  : Biceps & Triceps\n";
            cout << "  FRI  : Legs\n";
            cout << "  SAT  : Cardio + Abs + Forearms\n\n";
            break;

        case 2:
            cout << "[2] Double Muscle Split:\n";
            cout << "  MON  : Back + Biceps\n";
            cout << "  TUE  : Chest + Triceps\n";
            cout << "  WED  : Shoulders + Abs\n";
            cout << "  THU  : Back + Biceps (repeat)\n";
            cout << "  FRI  : Chest + Triceps (repeat)\n";
            cout << "  SAT  : Shoulders + Legs\n\n";
            break;

        case 3:
            cout << "[3] Switch Workouts:\n";
            cout << "  MON  : Chest + Biceps\n";
            cout << "  TUE  : Back + Shoulders\n";
            cout << "  WED  : Legs + Abs\n";
            cout << "  THU  : Chest + Biceps (repeat)\n";
            cout << "  FRI  : Back + Shoulders (repeat)\n";
            cout << "  SAT  : Legs + Abs (repeat)\n\n";
            break;

        case 4:
            cout << "[4] Push Pull Legs (PPL):\n";
            cout << "  MON  : Push (Chest, Shoulders, Triceps)\n";
            cout << "  TUE  : Pull (Back, Biceps, Rear Delts)\n";
            cout << "  WED  : Legs (Quads, Hamstrings, Calves)\n";
            cout << "  THU  : Push (repeat)\n";
            cout << "  FRI  : Pull (repeat)\n";
            cout << "  SAT  : Legs (repeat)\n\n";
            break;

        case 5:
            cout << "[5] Strength + Muscle Training:\n";
            cout << "  - Strength Training: 3 days\n";
            cout << "  - Muscle Training  : 3 days\n";
            cout << "  Trainer will split & guide you properly.\n\n";
            break;

        case 6:
            cout << "[6] Custom Training:\n";
            cout << "  - If you need any special training, kindly\n";
            cout << "    consult your trainer at the start.\n";
            cout << "  - A personalized workout plan will be\n";
            cout << "    provided as per your goals.\n";
            cin >> goal;
              
            break;

        default:
            cout << "Invalid choice! Please restart.\n";
        }
    }


    
    int main()
{

    trainor me;
    me.check();
    vector<client> clients;
    int choice;
    do{
        cout << "\n=================================================\n";
        cout << "                    M E N U                         \n";
        cout << "=================================================\n";
        cout << " [1] Add New Client\n";
        cout << " [2] View All Clients\n";
        cout << " [3] Search Client by Phone\n";
        cout << " [4] Delete Client\n";
        cout << " [5] Show Total Clients\n";
        cout << " [6] Update Progress Report\n";
        cout << " [7] Show Package details \n";
        cout << " [8] Gym Plans of client \n"; // show all the gym workout plan or give an option that is written by the trainor itself
        cout << " [] Exit\n";
        cout << "=================================================\n";
        cout << " Enter your choice: ";
        cin >> choice;
    
        switch (choice)
        {

        case 1:

            int age, phonenum;
            string name, gender;
            float bodyweight;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Bodyweight: ";
            cin >> bodyweight;

            cout << "Enter Phone Number: ";
            cin >> phonenum;

            cout << "Enter Gender: ";
            cin >> gender;

            client c;
            c.addclient(age, name, bodyweight, phonenum, gender);
            clients.push_back(c);
                break;
        case 2:
            cout << " List of all clients";
            for (auto& c : clients) // this is a loop in which it checks the detail of all the clients and show it
            {
                c.clientdetails();
            }
            if (clients.empty() ) 
                cout << "No clients added yet.\n";
            system("pause");
            break;
        case 3:
            int searchphonenum;
           cout << " Enter the phone number :";
            cin >> searchphonenum;
            for (auto& c : clients)
                c.viewclient(searchphonenum);
        case 4:
            for (auto& c : clients)
                c.deleteclient();
            break;
        case 5:
               cout << "Total clients: " << clients.size() << endl;
                system("pause");// [auses the program to wait until a key is pressed
                break;
        case 6:
               for (auto& c : clients)
            c.progressreport();
                    break;
        case 7:
                        // will show the package details here
                        break;
         
        case 8:
            // will show the gym plans here
          
            break;
        case 9:
                 me.expenses();
                            break;
         case 10:
                  cout << "Exiting the program. Goodbye!\n";
                                break;


                              





        }while (choice != 10);
        return 0;
  
    
    //switch()
    /* we will make a client class where we will tell about the add a client all the options using vectors*/


   // me.expenses();
    //std::cout << "Hello World!\n";
}

