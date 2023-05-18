#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<ctime>

using namespace std;
struct TextInput
{
char password[20];
char text[100];
};

class VAssistance{	
public: 

void eSpeak(string phrase){	
string command = "espeak\"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
}

void wishme(){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<<"\t\t\t\t\tGood Morning Sir"<<endl;
        eSpeak("Good Morning Sir");
    }

    else if (time-> tm_hour >= 12 && time->tm_hour < 16){
        cout<<"\t\t\t\t\tGood Afternoon Sir"<<endl;
        eSpeak("Good AfterNoon Sir");
    }
    
    else if (time-> tm_hour >=16 && time->tm_hour < 20){
        cout<<"\t\t\t\t\tGood Evening Sir"<<endl;
        eSpeak("Good Evening Sir");
    }
     else {
        cout<<"\t\t\t\t\tGood Night Sir"<<endl;
        eSpeak("Good Night Sir");
    }
}

void dateTime(){
time_t now = time(0);
char *dm = ctime(&now);
cout<<"The Date and time is: "<<endl<<dm<<endl;
eSpeak("The Date and time is");
}

void toUpperCase(char input[100]){
for(int i = 0; i<100; i++){
	input[i]=toupper(input[i]);
    }  	
 }	
};

int main(){
	
VAssistance v;	

cout<<"\t\t\t<--------------------WELCOME-------------------->"<<endl;
v.eSpeak("WELCOME");
cout<<"\t\t\t<-----------I'M YOUR VIRTUAL ASSISTANT---------->"<<endl;
v.eSpeak("I'M YOUR VIRTUAL ASSISTANT");
cout<<"\t\t\t<--------------I'M HERE TO HELP YOU------------->"<<endl<<endl;
v.eSpeak("I'M HERE TO HELP YOU");

TextInput t;
VAssistance v1;

do{	
cout<<" ---------------------------- "<<endl;	
cout<<"| Please enter your Password |"<<endl;	
cout<<" ---------------------------- "<<endl;
v1.eSpeak("Please enter your Password");
cout<<"Password : ";
cin.getline(t.password,20);

if(strcmp(t.password,"CS20BATCH")==0){
v1.eSpeak("Correct Password");
cout<<endl;
v1.wishme();

while(true){
cout<<"\nTell me how can i help you Sir?"<<endl<<endl;
v1.eSpeak("tell me How can i help you Sir");

cout<<"Your Query---->";
cin.getline(t.text,100);
v1.toUpperCase(t.text);

cout<<"\nHere is the result of your Query---->";
if(strcmp(t.text,"HI")==0|| strcmp(t.text,"HEY")==0 || strcmp(t.text,"HELLO")==0){
cout<<"Hello Sir...."<<endl;
v1.eSpeak("Hello Sir");
}

else if(strcmp(t.text,"BYE")==0 || strcmp(t.text,"EXIT")==0){
cout<<"Good Bye Sir. Have a nice day!!!"<<endl;
v1.eSpeak("Good Bye Sir. Have a nice day");
exit(0);
}

else if(strcmp(t.text,"WHO ARE YOU")==0){
cout<<"I am a Virtual Assistance created by Sarfarz and his team!!!"<<endl;
v1.eSpeak("I am a Virtual Assistance created by Sarfarz and his team");
}

else if(strcmp(t.text,"HOW ARE YOU")==0){
cout<<"I am good sir..."<<endl;
v1.eSpeak("I am good sir");
}

else if(strcmp(t.text,"WHAT DATE AND TIME IT IS")==0){
v1.dateTime();
}

else if(strcmp(t.text,"OPEN NOTEPAD")==0){
cout<<"Openning Notepad..."<<endl;
v1.eSpeak("Openning Notepad");
system("C:\\Windows\\notepad.exe");
}

else if(strcmp(t.text,"SHUT DOWN LAPTOP")==0){
cout<<"Shuting Down Laptop..."<<endl;
v1.eSpeak("Shuting Down Laptop");
system("C:\\Windows\\System32\\shutdown -s -t 5");
}

else if(strcmp(t.text,"RESTART LAPTOP")==0){
cout<<"Restarting Laptop..."<<endl;
v1.eSpeak("Restarting Laptop");
system("C:\\Windows\\System32\\shutdown -r -t 5");
}

else if(strcmp(t.text,"OPEN GOOGLE")==0){
cout<<"Openning Google..."<<endl;
v1.eSpeak("Openning Google");
system("start https:\\www.google.com");
}

else if(strcmp(t.text,"SEARCH")==0){
char text[100];
v1.eSpeak("What do you want to search ");
cout<<"What do you want to search : ";
gets(text);
string res;
string s = "https://www.google.com/search?q=";
res=s+text;
ShellExecute(NULL,"open",res.c_str(),NULL,NULL,SW_SHOWNORMAL);
}

else if(strcmp(t.text,"OPEN YOUTUBE")==0){
cout<<"Openning Youtube..."<<endl;
v1.eSpeak("Openning Youtube");
system("start https:\\www.Youtube.com");
}

else if(strcmp(t.text,"OPEN INSTAGARM")==0){
cout<<"Openning Instagram..."<<endl;
v1.eSpeak("Openning Instagram");
system("start https:\\www.instagram.com");
}

else if(strcmp(t.text,"OPEN FACEBOOK")==0){
cout<<"Openning Facebook..."<<endl;
v1.eSpeak("Openning Facebook");
system("start https:\\www.facebook.com");
}

else if(strcmp(t.text,"OPEN WHATSAPP")==0){
cout<<"Openning WhatsApp..."<<endl;
v1.eSpeak("Openning WhatsApp");
system("start https://web.whatsapp.com");
}

else if(strcmp(t.text,"OPEN GMAIL")==0){
cout<<"Openning Gmail..."<<endl;
v1.eSpeak("Openning Gmail");
system("start https:\\www.gmail.com");
}

else if(strcmp(t.text,"SHOW ME SOME FUNNY VIDEO")==0){
cout<<"Okay Sir just wait..."<<endl;
v1.eSpeak("Okay Sir just wait.");
system("start https://youtu.be/9LhLjpsstPY");
}

else if(strcmp(t.text,"TELL ME A JOKE")==0){
cout<<"\nWhere do frogs keep their money?\nThe river bank"<<endl;
v1.eSpeak("Where do frogs keep their money. The river bank");
}

else if(strcmp(t.text,"PLAY MUSIC")==0){
cout<<"\nPlaying Music"<<endl;
v1.eSpeak("Playing Music");
system("start https://www.youtube.com/watch?v=ZGKkOEcnocU&list=LL&index=5");
}

else if(strcmp(t.text,"ONCE MORE")==0){
cout<<"\nWhere do frogs keep their money?\nThe river bank"<<endl;
v1.eSpeak("Where do frogs keep their money. The river bank");
}

else {
cout<<"Sorry Could not understand your query try again.!"<<endl;	
v1.eSpeak("Sorry Could not understand your query try again");
  }
   }
    }

else {
cout<<"\nIncorrect Password"<<endl;
v1.eSpeak("Incorrect Password");
}
 }
while(true);
getch();
return 0;
}

