#include <iostream>
#include<windows.h>
#include<mmsystem.h>
#include<conio.h>
#include<string>
using namespace std;
char guess;
int tscore;
string medium;
string name;
class Question 
{
	private:
		string 	question,op1,op2,op3,op4;
		char correct_answer;
		int q_score;
	public:
	void question_set(string,string,string,string,string,char,int);
	void question_start();	
};
int enter_name()
{
	cout<<"Please enter your Name\t";
	
	getline(cin,name);
	cout<<"Hello! "<<name<<endl;
}



int main() {


	
	
	cout <<"\n******************************************************************************";
	cout<<"\n\t\t\t\t HELLO WELCOME TO THE QUIZ GAME";
	PlaySound(TEXT("welcome to the quiz game.wav"),NULL,SND_SYNC);

	cout <<"\n\n******************************************************************************"
		 <<endl;
   
   
   
   
  ready_panel:  
  int input;
  //cout<<"Do you want start the quiz?\n";
  cout<<"Press Enter to start the Quiz...  or press Backspace to exit the game..."<<endl;
  PlaySound(TEXT("press enter to start to press backspace to exit.wav"),NULL,SND_SYNC);
  input=getch();
  if(input==13)
  {  
  	 cout<<"Ok let's continue";
  	 PlaySound(TEXT("ok let's continue.wav"),NULL,SND_SYNC);
        cout<<endl;
  }
  else if  (input==8)
    {
        cout<<"OK good bye!"<<endl;
         PlaySound(TEXT("okay good bye.wav"),NULL,SND_SYNC);
        return 0;
    }
    else {
    	mixture : 
    	cout<<"Invalid input !!:( \n ";
    	PlaySound(TEXT("your input is invalid.wav"),NULL,SND_SYNC);
		int re_response;
		cout<<"Enter space to retry ";
		PlaySound(TEXT("enter space to retry.wav"),NULL,SND_SYNC);
		re_response = getch();
		cout<<endl;
		//string rs;
		//cin>>rs;
		if(re_response== 32)
		{
			goto  ready_panel;
		}
		else {
			goto mixture;
		}
    	
	}
	
	
	
	
	
	enter_name();
	
	quiz:
	cout<<endl<<"ok let's start";
    PlaySound(TEXT("ok let's continue.wav"),NULL,SND_SYNC);














	// the main code yaha se hain

    int  choice;
    
    cout<<"\n\t\t\t\tSelect your field\n";
    cout<<"\t\t\t\"computers and electronics\"\n ";
    cout<<"\t\t\t\"indian politics\"\n ";
    cout<<"\t\t\t\"general knowledge\" \n";
    cout<<"\t\t\t\"computer languages and programms\"\n ";
    cout<<"\t\t\t\"cricket\" \n";
    cout<<"\t\t\t press 1 for computer and electronics\n";
    cout<<"\t\t\t press 2 for indian politics\n";
    cout<<"\t\t\t press 3 for general knowledge\n";
    cout<<"\t\t\t press 4 for computer languages and programs\n";
    cout<<"\t\t\t press 5 for cricket";
    cout<<endl;
    cin>>choice;
    switch (choice)
    {
    
    case 1:
        difficulty_ec:
        
        cout<<"please select the difficulty level: \n 1.Easy \n 2.medium \n 3.hard";
        cout<<endl<<"press a for easy,  b for medium , c for hard";
        cout<<endl;
        cin>>medium;
        if(medium=="a")
        {
          //easy level questions

        Question q1;
	      Question q2;
	      Question q3;
	      Question q4;
	      Question q5;


        q1.question_set("\t\t\t\t  Who is the father of Computers?"," James Gosling","Charles Babbage"," Dennis Ritchie","Bjarne Stroustrup",'b',10) ;
	
	
	      q2.question_set("\t\t\t\t which of the following is not a windows application? ",
	       " notepad","calculator ","  wordpad",
	      " tweet bot",'d',10);
	 
	 
	      q3.question_set("\t\t\t\t What is the full form of CPU? ",
	    " Computer Processing Unit","Computer Principle Unit "," Central Processing Unit",
	    "Control Processing Unit",'c',10); 
	
	
	   q4.question_set("\t\t\t\t Which of the following language does the computer understand? ",
	    " only C Language"," Assembly Language "," Binary Language",
	    "BASIC",'c',10);
	 
	 
	      q5.question_set("\t\t\t\t Which of the following is the brain of the computer?  ",
	      " cpu","ram "," motherboard",
	      "moniter",'a',10);

     q1.question_start();
	   q2.question_start();     
	   q3.question_start();
	   q4.question_start();
	   q5.question_start();



        }
        else if(medium=="b")
        {

         // medium level questions
         Question q1;
	       Question q2;
	       Question q3;
	       Question q4;
	       Question q5;
         q1.question_set("\t\t\t\t Which of the following is the correct abbreviation of COMPUTER"," Commonly Occupied Machines Used in Technical and Educational Research","Commonly Operated Machines Used in Technical and Environmental Research"," Commonly Oriented Machines Used in Technical and Educational Research","Commonly Operated Machines Used in Technical and Educational Research",'d',10) ;
	
	
	       q2.question_set("\t\t\t\t Which of the following computer language is written in binary codes only",
	        " pascal","machine language ","c",
	         "c++",'b',10);
	 
	 
	       q3.question_set("\t\t\t\t Which of the following is not a characteristic of a computer? ",
	         " Versatility","Accuracy "," Diligence",
	        "I.Q.",'d',10); 
	
	
	      q4.question_set("\t\t\t\t Which of the following unit is responsible for converting the data received from the user into a computer understandable format?",
	        "Output Unit","Input Unit "," Memory Unit",
	       "Arithmetic & Logic Unit",'b',10);
	 
	 
	      q5.question_set("\t\t\t\t Which of the following is not a type of computer code?",
	       " EDIC","ASCII"," BCD",
	      "EBCDIC",'a',10);

        q1.question_start();
	       q2.question_start();
	      q3.question_start();
	      q4.question_start();
	      q5.question_start();



        }
        else if(medium=="c")
        {
            // hard questions
          Question q1;
	           Question q2;
	           Question q3;
	           Question q4;
	           Question q5;
	
	
	        q1.question_set("\t\t\t\t Which of the following is the correct abbreviation of COMPUTER? "," Commonly Occupied Machines Used in Technical and Educational Research","Commonly Operated Machines Used in Technical and Environmental Research"," Commonly Oriented Machines Used in Technical and Educational Research","Commonly Operated Machines Used in Technical and Educational Research",'d',10) ;
	
	
	        q2.question_set("\t\t\t\t Which of the following part of a processor contains the hardware necessary to perform all the operations required by a computer? ",
	        " Controller","Registers "," Cache",
	        "Data path",'b',10);
	 
	 
	        q3.question_set("\t\t\t\t what is the correct full form of TCP ",
	       " transmission central protocol","transportation control protocol "," transparent control protocol",
	            "transmission control protocol",'d',10); 
	
	
	        q4.question_set("\t\t\t\t ADD on card in computers for ",
	        " to boost magnitude","to reduce noise "," to measure voltage",
	       "communication",'d',10);
	 
	 
	             q5.question_set("\t\t\t\t what is the shortcut key for a manual line break in ms-word ",
	       " ctrl+enter","alt+enter "," shift+enter",
	       "tab+enter",'c',10);
	 
	 
	 
		 
	 
	         q1.question_start();
	         q2.question_start();
	         q3.question_start();
	         q4.question_start();
	         q5.question_start();



        }
        else{
          detect_ce:
           int e_ce; // ece stands for error in computer elecronics;  
          cout<<"invalid input!!";
          cout<<"please press enter to retry";
          e_ce=getch();
          if(e_ce==13)
          {
            goto difficulty_ec;
          }
          else{
            goto detect_ce;  
          }

        }
        
        
        
        break;
    case 2: 
        
        difficulty_p:
        
        cout<<"please select the difficulty level: \n 1.Easy \n 2.medium \n 3.hard";
        cout<<endl<<"press a for easy,  b for medium , c for hard";
        cout<<endl;
        cin>>medium;
        if(medium=="a")
        {
          //easy level questions

         Question q1;
	       Question q2;
	       Question q3;
	       Question q4;
	       Question q5;
	       
	
	       q1.question_set("\t\t\t\t bjp stands for "," Bhojpuri janta party","Bhartiya janta party"," bharat janta party"," brijpur janta party",'b',10) ;
	
	
	       q2.question_set("\t\t\t\t which of the following is a union territory ",
	        " Amritsar","dadar & nagar haveli "," tirvantpuram",
	        "pune",'b',10);
	 
	 
	       q3.question_set("\t\t\t\t who was the first president of india ",
	        " Gulzari lal nanda","sardar vallab bhai patel  ","  DR. Rajendra prasad",
	        "pandit Jawahar lal nehru",'c',10); 
	
	
	       q4.question_set("\t\t\t\t How many houses are there in the Indian Parliament? ",
	        " Three","Four "," One",
	        "Two",'d',10);
	 
	 
	        q5.question_set("\t\t\t\t In which year did India adopt the Constitution?  ",
	        " 1947","1952 "," 1945",
	        " 1950",'d',10);
	 
	 
	 
		 
	 
	q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
       




        }
        else if(medium=="b")
        {




           Question q1;
	       Question q2;
	       Question q3;
	       Question q4;
	       Question q5;
	       
	       q1.question_set("\t\t\t\t Which of the following are the members of the electoral college electing the president? "," Elected members of Rajya Sabha","Elected members of Rajya Sabha & Lok Sabha"," Elected members of the Rajya Sabha , Lok Sabha and State Assemblies"," Elected members of Rajya Sabha, Lok Sabha , state assemblies and assemblies of Union Territories",'c',10) ;
	
	
	       q2.question_set("\t\t\t\t The salary of the Judge of High Court are charged from which among the following? ",
	        " Consolidated Fund of India","Consolidated Fund of the State "," Contingency Fund of India",
	        "Contingency Fund of State",'b',10);
	 
	 
	       q3.question_set("\t\t\t\t Why India is considered to be a federal state? ",
	        " Dual Citizenship prevalent here ","Dual judiciary  ","  Share of power between the Centre and the States",
	        "Written Constitution",'c',10); 
	
	
	       q4.question_set("\t\t\t\t What can be the maximum gap between the two sessions of state legislature? ",
	        " 1 month","3 months "," 6 months",
	        "9 months",'c',10);
	 
	 
	        q5.question_set("\t\t\t\t Who appoints the parliamentary secretaries?  ",
	        " Governor","President "," Chief Minister ",
	        "  Speaker ",'a',10);
	 
	 
	 
		 
	 
	q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
       

         


        }
        else if(medium=="c")
        {
            // hard questions
         Question q1;
	       Question q2;
	       Question q3;
	       Question q4;
	       Question q5;
	       
	       q1.question_set("\t\t\t\t What is the rank of Union Cabinet Secretary  in the table of Precedence in India? "," 5th","9th"," 11th","15th",'c',10) ;
	
	
	       q2.question_set("\t\t\t\t Which of the following Article prohibits the employment of children in factories and hazardous industries? ",
	        " Article 22","Article 23 "," Article 24",
	        "Article 25",'c',10);
	 
	 
	       q3.question_set("\t\t\t\t Which amendment of the Constitution of India increased the age of retirement of High Court judges from 60 to 62 years? ",
	        " 12th ","15th  ","  10th",
	        "245th",'b',10); 
	
	
	       q4.question_set("\t\t\t\t The Banking Regulation Act was enacted in which year ? ",
	        "1947","1948 "," 1949",
	        "1950",'c',10);
	 
	 
	        q5.question_set("\t\t\t\t who was the 11th president of india ?  ",
	        " zail singh","DR apj Abdul kalam ","  Pratibha patil ",
	        " pranab Mukherjee ",'b',10);
	 
	 
	 
		 
	 
	       q1.question_start();
	       q2.question_start();
	       q3.question_start();
	       q4.question_start();
	       q5.question_start();       






        }
        else{
          detect_p:       // p for politics
           int e_p;      // ece stands for error in computer elecronics;  
          cout<<"invalid input!!";
          cout<<"please press enter to retry";
          e_p=getch();
          if(e_p==13)
          {
            goto difficulty_p;
          }
          else{
            goto detect_p;  
          }

        }

       
         break;

    case 3:
        difficulty_gk:
        
        cout<<"please select the difficulty level: \n 1.Easy \n 2.medium \n 3.hard";
        cout<<endl<<"press a for easy,  b for medium , c for hard";
        cout<<endl;
        cin>>medium;
        if(medium=="a")
        {
          // easy level questions
          
	      Question q1;
	      Question q2;
	      Question q3;
	      Question q4;
	      Question q5;      
	     
        q1.question_set("\t\t\t\t who was the first Indian in space "," Rakesh sharma","kamal dev"," rk naidu","Ramesh Narayanan",'a',10) ;
	
	
	      q2.question_set("\t\t\t\t who was known as the iron man of india ",
	      " DR apj Abdul kalam","sardar  Vallabh bhai Patel "," sarvapalli radha Krishnan",
	      "Raj guru",'b',10);
	 
	 
	      q3.question_set("\t\t\t\t Indus river originates in  ",
	      " Kinnaur","Ladakh "," Nepal",
	      "Tibet",'d',10); 
	
	
	      q4.question_set("\t\t\t\t The hottest planet in the solar system? ",
	      " Mercury","Venus"," Mars",
	      "Jupiter",'b',10);
	 
	 
	      q5.question_set("\t\t\t\t At which one of the following places do the rivers Alaknanda and Bhagirathi merge to form Ganga? ",
	      " Devprayag","Rudra Prayag "," Karnaprayag",
	      " Vishnuprayag",'a',10);
        q1.question_start();
	      q2.question_start();
	      q3.question_start();
	      q4.question_start();
	      q5.question_start();      




       }
        else if(medium=="b")
        {

         // medium level questions
         Question q1;
	       Question q2;
	       Question q3;
	       Question q4;
	       Question q5;    

         q1.question_set("\t\t\t\t Which one of the following river flows between Vindhyan and Satpura ranges? "," Narmada","Mahanadi"," Son","Netravati",'a',10) ;
	
	
	q2.question_set("\t\t\t\t The country that has the highest in Barley Production? ",
	 " China","india "," russia",
	 "France",'c',10);
	 
	 
	q3.question_set("\t\t\t\t Tsunamis are not caused by ",
	 " Hurricanes","Earthquakes "," Undersea landslides",
	 "Volcanic eruptions",'a',10); 
	
	
	q4.question_set("\t\t\t\t Chambal river is a part of ",
	 " Sabarmati basin","Ganga basin "," Narmada basin",
	 "Godavari basin",'c',10);
	 
	 
	 q5.question_set("\t\t\t\t Which peninsular river is least seasonal in flow?  ",
	 " Narmada","Krishna "," Godavari",
	 "kaveri",'c',10);
  q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
   


        }
        else if(medium=="c")
        {
            // hard questions
           Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
   
   q1.question_set("\t\t\t\t Who among the following wrote Sanskrit grammar?"," Kalidasa","Charak"," Panini"," Aryabhatt",'c',10) ;
	
	
	q2.question_set("\t\t\t\t Where was the electricity supply first introduced in India ",
	 "  Mumbai","Dehradun "," Darjeeling",
	 "Chennai",'c',10);
	 
	 
	q3.question_set("\t\t\t\t Which of the following is not a nuclear power center? ",
	 "  Narora","Kota "," Chamera",
	 "Kakrapara",'c',10); 
	
	
	q4.question_set("\t\t\t\t During World War II, when did Germany attack France? ",
	 " 1940","1941 "," 1942",
	 "1943",'a',10);
	 
	 
	 q5.question_set("\t\t\t\t Who created the famous Rock Garden of Chandigarh?  ",
	 " Gaudi","Saarinen "," Krishnarao Jaisim",
	 "Nek Chand",'d',10);
	 
	 
	 
		 
	 
	q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();





        }
        else{
          detect_gk:       // p for politics
           int e_gk;      // ece stands for error in computer elecronics;  
          cout<<"invalid input!!";
          cout<<"please press enter to retry";
          e_gk=getch();
          if(e_gk==13)
          {
            goto difficulty_gk;
          }
          else{
            goto detect_gk;  
          }

        }

         break;
    case 4:

         difficulty_cp: // cp= computer programming
        
        cout<<"please select the difficulty level: \n 1.Easy \n 2.medium \n 3.hard";
        cout<<endl<<"press a for easy,  b for medium , c for hard";
        cout<<endl;
        cin>>medium;
        if(medium=="a")
        {
          //easy level questions
          Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
   q1.question_set("\t\t\t\t who is the developer of c++ "," Bjarne Stroustrup","Dennis Ritchie"," Marco yanseen","steve jobs",'a',10) ;
	
	
	q2.question_set("\t\t\t\t Which of the following is not a programming language ? ",
	 " Pascal","Microsoft Office "," Java",
	 "c++",'b',10);
	 
	 
	q3.question_set("\t\t\t\t What is the term used for a block of code that is executed repeatedly until a certain condition is met? ",
	 " Function","Loop "," Condition",
	 "Variable",'b',10); 
	
	
	q4.question_set("\t\t\t\t Which programming language is used for developing Android apps? ",
	 " Java"," C# "," Python",
	 "Swift",'a',10);
	 
	 
	 q5.question_set("\t\t\t\t Which of the following is not a web browser? ",
	 " Chrome","Safari "," Firefox",
	 " Photoshop",'d',10);
   q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
         
        }
        else if(medium=="b")
        {

         // medium level questions

         Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;

  q1.question_set("\t\t\t\t What is correcting errors in a program called? "," Compiling","Debugging"," Grinding","Interpreting",'b',10) ;
	
	
	q2.question_set("\t\t\t\t Which of the following is a type of sorting algorithm? ",
	 " Binary search","Quick sort "," Depth-first search",
	 "Depth-first search",'b',10);
	 
	 
	q3.question_set("\t\t\t\t Which programming language is used for developing iOS apps? ",
	 " Java","c# "," Python",
	 "Swift",'d',10); 
	
	
	q4.question_set("\t\t\t\t which header file is used to use the function getch(); ",
	 " stdio.h","conio.h "," stdlib",
	 "math.h",'b',10);
	 
	 
	 q5.question_set("\t\t\t\t web pages are created using",
	 " ftp","http"," html",
	 "url",'c',10);
   q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
        }
        else if(medium=="c")
        {
            // hard questions
            Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
  
  q1.question_set("\t\t\t\t Which data structure is used for storing a collection of elements in a non-linear fashion? "," Array","Stack"," Queue","Tree",'d',10) ;
	
	
	q2.question_set("\t\t\t\t JIT stands for? ",
	 " Just in time","Jump in time "," Jump in text",
	 "Jump in terms",'a',10);
	 
	 
	q3.question_set("\t\t\t\t Which of the following isn’t a characteristic of High level languages? ",
	 " machine code ","platform independent "," interactive execution",
	 "user-friendly",'a',10); 
	
	
	q4.question_set("\t\t\t\t A program that can execute high-level language programs. ",
	 " Compiler","Interpreter "," Sensor",
	 "Circuitry",'b',10);
	 
	 
	 q5.question_set("\t\t\t\t JVM stands for? ",
	 " Java virtual machine","Java visual machine "," JRE virtual machine",
	 "JRE visual machine",'a',10);

q1.question_start();
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
        }
        else{
          detect_cp:       // p for politics
           int e_cp;      // ece stands for error in computer elecronics;  
          cout<<"invalid input!!";
          cout<<"please press enter to retry";
          e_cp=getch();
          if(e_cp==13)
          {
            goto difficulty_cp;
          }
          else{
            goto detect_cp;  
          }

        }
         break;
    case 5:
         difficulty_ck: // ck= cricket
        
        cout<<"please select the difficulty level: \n 1.Easy \n 2.medium \n 3.hard";
        cout<<endl<<"press a for easy,  b for medium , c for hard";
        cout<<endl;
        cin>>medium;
        if(medium=="a")
        {
          //easy level questions
           Question q1;
	         Question q2;
	         Question q3;
	         Question q4;
	         Question q5;

  q1.question_set("\t\t\t\t What is the correct measurement of a pitch in the cricket game? "," 20 yards","22 yards"," 18 yards","25 yards",'b',10) ;
	
	
	q2.question_set("\t\t\t\t who was known as the GOD OF CRICKET ",
	 " brian lara","Sachin Tendulkar "," don bradman",
	 "vivian richards",'b',10);
	 
	 
	q3.question_set("\t\t\t\t what is the full form of lbw ",
	 " Leg before wicket","leg bat wicket "," left but wide",
	 "length ball wicket",'a',10); 
	
	
	q4.question_set("\t\t\t\t how many umpires are there in a single cricket game ",
	 " 3","1"," 2",
	 "4",'a',10);
	 
	 
	 q5.question_set("\t\t\t\t what is the jesey number of Mahendra singh dhoni  ",
	 " 45","18 "," 10",
	 "7",'d',10);


   q1.question_start();         
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();

        }
        else if(medium=="b")
        {

         // medium level questions

          Question q1;
	         Question q2;
	         Question q3;
	         Question q4;
	         Question q5;

  q1.question_set("\t\t\t\t what is the full form of icc ","Indian cricket council","Indian cricket club"," international cricket council","international cricket club",'c',10) ;
	
	
	q2.question_set("\t\t\t\t cricketer with the highest international  batting average ",
	 " brain lara","vivian richards "," don bradman",
	 "sunil Gavaskar",'c',10);
	 
	 
	q3.question_set("\t\t\t\t At which date india won the icc cricket world cup in 2011 ",
	 " 2nd April 2011","12 September 2011 "," 2 march 2011",
	 "4 April 2011",'a',10); 
	
	
	q4.question_set("\t\t\t\t what is the full form of bcci ",
	 " Board  council of cricket in india","Britain cricket council international"," Board of Control for Cricket in India",
	 " board for cricket control in india",'c',10);
	 
	 
	 q5.question_set("\t\t\t\t who is known as universe boss  ",
	 " Chrish gayle","Rohit sharma ","martin Guptill",
	 "vivian richards",'a',10);


   q1.question_start();         
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();
        }
        else if(medium=="c")
        {
            // hard questions

     Question q1;
	         Question q2;
	         Question q3;
	         Question q4;
	         Question q5;

  q1.question_set("\t\t\t\t on which year the south Africa won its only icc trophy and where ","1992  in England","1995  in Australia"," 1998 in Bangladesh","1998 in srilanka",'c',10) ;
	
	
	q2.question_set("\t\t\t\t who holds the record of highest individual score in an icc world cup game ",
	 " Chrish gayle","Sachin Tendulkar "," Martin guptill",
	 "Rohit Sharma",'c',10);
	 
	 
	q3.question_set("\t\t\t\t sg stands for ",
	 " sunil Gavaskar","Sanspareils Greenlands "," sutiable gears",
	 "soft cricket geares",'b',10); 
	
	
	q4.question_set("\t\t\t\t on which date india won the icc t20 cricket world cup in 2007",
	 " 24 September","4 august"," 19 October",
	 " 4 July",'a',10);
	 
	 
	 q5.question_set("\t\t\t\t Who has written the Biography of Mohammed Azharuddin, (azhar)  ",
	 " Azharuudin"," Harsha Bhogle ","Harbhajan singh",
	 "Gary Kristan",'b',10);


   q1.question_start();         
	q2.question_start();
	q3.question_start();
	q4.question_start();
	q5.question_start();

        }
        else{
          detect_ck:       // p for politics
           int e_ck;      // ece stands for error in computer elecronics;  
          cout<<"invalid input!!";
          cout<<"please press enter to retry";
          e_ck=getch();
          if(e_ck==13)
          {
            goto difficulty_ck;
          }
          else{
            goto detect_ck;  
          }

        }
         break;            
    default:
        invalid:
         int st;// stands for switch try
        cout<<"invalid selelction";
        cout<<"...wanna try again?...";
        cout<<"Press enter to try again";
        st=getch();
  if(st==13)
  {  
  	// goto field;
  }
  else {
       goto invalid;
  }
        break;
    }
	
	// kahtam yaha ho raha hai... 
















    PlaySound(TEXT("score and percentage.wav"),NULL,SND_SYNC);
	cout <<"\t"<<name<<" your score is : " <<tscore<<" out of 50"<<endl;
	
	int ca=0;
	int wa=0;
	ca=tscore/10;
	wa=5-ca;
	if(wa==0){
	
	cout<<"your all answers were correct"<<endl;
	cout<<"outstanding!!"<<endl;
}
	cout<<" your "<<ca<<" were correct "<<" and "<<wa<<" answers are wrong"<<endl;
	


int per;
per= (tscore*100)/50;
cout<<"you have scored "<<per<<"%"<<endl;
if(per<=40)
{
	cout<<"oops! you have failed"<<endl;
	PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
}

cout<<endl;
int ls;
cout<<"wanna try again \n";
PlaySound(TEXT("restart.wav"),NULL,SND_SYNC);
here://comeback for invalid input
cout<<"press enter to start again...\n";
cout<<" press backspace to exit ...";
ls=getch();
if(ls==13)
{
	goto quiz;
}
else if (ls==8)
{
       
        goto bye;
   
}

else {
    	dmixture : 
    	cout<<"Invalid input !!:( \n ";
    	PlaySound(TEXT("your input is invalid.wav"),NULL,SND_SYNC);
		int rr;
		cout<<"Enter spcae to retry ";
		rr = getch();
		
		
		if(rr== 32)
		{
			goto  here;
		}
		else {
			goto dmixture;
		}
    	
	}
	
bye:
    PlaySound(TEXT("last final.wav"),NULL,SND_SYNC);
	cout<<"Have a nice day!.... hope you will come to me again";
	return 0;
}

void Question :: question_set(string q ,string opt1,string opt2 ,string opt3 ,string opt4,char ca,int qs)
{
	question = q;
	op1=opt1;
	op2=opt2;
	op3=opt3;
	op4=opt4;
	correct_answer = ca;
	q_score=qs;
}
void Question :: question_start()
{
	cout<<endl;
	cout<<question<<endl;
	cout <<"\t\t\t\t a. "<<op1<<endl;
    cout <<"\t\t\t\t b. "<< op2 << endl;
    cout <<"\t\t\t\t c. "<< op3 << endl;
    cout <<"\t\t\t\t d. "<< op4 << endl;
    cout<<endl;
    cout<<"\t\t\t Choose your Option"<<endl;
cout<<" \t\t\t";
cin>>guess;


if (guess == correct_answer)
{
	cout<<endl;
	cout<<"\t\t\t Correct!"<<endl;
	PlaySound(TEXT("correct.wav"),NULL,SND_SYNC);

	tscore = tscore+q_score;
	cout<<endl;
}

else{

	cout<<"\n\t\t\t Wrong!";
	PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);

	cout<<"\n\t\t\t Correct Answer "<<correct_answer<<endl;
}
cout<< "\n \t\t\t\t\tpress any key to continue ";
getch();
system("cls");
getch();
}

