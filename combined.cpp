#include<iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class tourism
{
public:
    void intro();
    void tourist_attractions();

};
void tourism::intro()
{
    cout<<"With history, culture, cuisine, nature and heritage, Kota has a lot on offer for your perusal."
    " The desert city cites an attractive historical beginning and has seen a lot of valour, majesty,"
    " courtliness and grandeur, etching India’s glorious monarchy. Proud Rajput kings once ruled over western"
    " India adding to this country’s glory and richness. Kota is within the Hadoti region located in the south"
    " eastern part of Rajasthan. The River Chambal cools the town as it flows through it. "<<endl<<endl;

}
void tourism::tourist_attractions()
{
    cout<<" TOURIST ATTRACTIONS IN KOTA"<<endl;
    cout<<"1. Forts and Palaces"<<endl;
    cout<<"2. Gardens"<<endl;
    cout<<"3. Temples"<<endl;
    cout<<"4. Lakes & Waterfalls"<<endl;
}

class forts_and_palaces
{ public:
    void display()
    {
        cout<<"FORTS AND PALACES"<<endl;
        cout<<"1. Kotah Garh City Palace"<<endl;
        cout<<"2. Jagmandir Palace"<<endl;
        cout<<"3. Raniji Ki Baoli"<<endl;
        cout<<"4. Abheda Mahal"<<endl;
    }
    void CityPalace()
    {
        cout<<" Kotah Garh City Palace"<<endl<<endl;
        cout<<"A confabulation of Mughal and Rajasthani architecture and art, the City Palace is a monument "
        "of the glorious royal past of the Kota city. City palace is a fantastic landmark in Kota attracting"
        " thousands of tourists every year.\n\n"
        "The palace is adorned with imposing wall paintings, mirror walls, mirror ceilings, hanging illuminated "
        "lights and floral decorations. Breathtaking marble floorings and walls and stylish fashioned entrance,"
        " all these make City Palace a memorable location. The attractive garden around the palace adds the beauty"
        " of the Palace."<<endl<<endl;
        cout<<"It is 5 km from city center"<<endl;
        cout<<"Timings: All days of the week 10:00 AM - 5:00 PM"<<endl;
        cout<<"Restaurants near City Palace: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tKota's Zaika\t\t\tNayapura, Hotel Saraswati Palace, Near Ratan Kachori and sweets"<<endl;
        cout<<"\tKota castle restaurant\t\t hn 29 cenal road land mark city opp to shri hari hospital"<<endl;

}
void JagmandirPalace()
    {
        cout<<"Jagmandir Palace"<<endl<<endl;
        cout<<"This is one of the most popular destinations in Kota. Located in the middle of Kishor Sagar Lake"
        " in Kota, one can scarcely believe at the marvellous engineering which made this creation possible."
        " Built in the 1740s by one of the queens of Kota, Jagmandir Palace was once a summer retreat for the"
        " rulers of Kota, with the pristine waters of Kishore Sagar Lake inviting scores of tourists to the same."<<endl<<endl;
        cout<<"4 km from city center"<<endl<<endl;
        cout<<"Popular for: History Buffs, God Lovers and Photo Fanatics"<<endl;
        cout<<"Things to do around Jagmandir Palace:\n Central Square Mall \n Swarn Rajat Market \n Jawahar Market"<<endl;
        cout<<"Restaurants near Jagmandir Palace:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
}
void RanijiKiBaoli()
{
    cout<<"Raniji Ki Baoli"<<endl<<endl;
    cout<<"Raniji Ki Baoli is an ancient baoli (stepwell) near Kota in Bundi. It was built by the Rajputs and "
    "boasts of a striking architecture. The baoli has a narrow gateway lined with four sturdy pillars and slender "
    "arched on the high roof. A flight of stairs descend into a part well, part temple and part palace with scarce "
    "water reserves. Raniji Ki Baoli is an important heritage monument of the city."<<endl<<endl;
    cout<<"It is 34 km from city center."<<endl;
    cout<<"Entry Fee: Free"<<endl;
    cout<<"Popular for: Historic Places"<<endl;
    cout<<"Things to do near Raniji ki Baoli: \n Aquagreens Waterpark \n City Mall \n Radhika Resort and Waterpark \n Ahluwalias's The Great Mall of Kota"<<endl;

}

void AbhedaMahal()
    {
        cout<<"Abheda Mahal"<<endl<<endl;
        cout<<"Abheda Mahal is situated near the Chambal river of Kota. The palace was established by Ummed Maharaj,"
        "and it has a great history and many different stories behind it's establishment. The palace has a pond which"
        " houses beautiful lotus flowers, turtles. It is said that earlier this pond also contained many crocodiles. The"
        " palace has a great architecture and is a perfect place for picnic and for photography. The palace image falls on the "
        "water in the pond which reflects it's image which gives a great view."<<endl;
        cout<<"Popular for: History Buffs"<<endl;
        cout<<"Entry Fee : \n  Rs 20/- "<<endl;
        cout<<"Things to do around Abheda Mahal: \n Lakshman Jhoola \n Purana Cinema Hall \n Hanuman Mandir "<<endl;
        cout<<"Restaurants near Abheda Mahal: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tTamku Restaurant\t\t\tKota, Rajasthan 323021"<<endl;
        cout<<"\tHariyali Garden restaurant\t\t Sawan Phuhar water park ,Bundi road,NH-12,Kota, Kota, Rajasthan, India"<<endl;
        cout<<"\tFlavour Restaurant\t\t\tOm Cineplex, 11, Indra Vihar Opera Hospital Road, Kota, India"<<endl;
    }


};
class gardens
{
public:
    void display()
    {

        cout<<"GARDENS IN KOTA"<<endl;
        cout<<"1. Seven Wonders Park"<<endl;
        cout<<"2. Kota Zoological Park"<<endl;
        cout<<"3. Chatra Vilas Garden"<<endl;
        cout<<"4. Darrah Wildlife Sanctuary"<<endl;

    }
    void SevenWondersPark()
{

    cout<<"Seven Wonders Park"<<endl<<endl;
    cout<<"Seven Wonders Park in Kota comprises of miniatures of all the Seven Wonders of the World."
     "These include Taj Mahal, Great Pyramid, Eiffel Tower, Leaning Tower, Christ the Redeemer of Brazil,"
     " Colosseum, and Statue of Liberty. These miniatures have been built on the bank of the Kishore Sagar"
     " Lake thereby enhancing its beauty. The park was built at a mind-blowing cost of 20 crores by the Urban"
     " Development Department."<<endl<<endl;
     cout<<"Ranked 2 out of many sightseeing in Kota"<<endl;
     cout<<"Situated in: Ballabhbari"<<endl;
     cout<<"Entry fee: free"<<endl<<endl;
     cout<<"Best time to visit: During sunset"<<endl;
     cout<<"Restaurants near Seven Wonder's Park:\n"<<endl;
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tThe Right Place Cafe\t\tC-11, Vallabh Bari Opposite 7 Wonders Park"<<endl;
    cout<<"\tSheesha Restaurant\t\tKotri Rd Police Chowki, Gumanpura"<<endl<<endl;
}

void Zoo()
{

    cout<<"Kota Zoological Park"<<endl<<endl;
    cout<<"Kota Zoological Park is positioned near Kishore Sagar Lake and is one of the should-see locations in Kota."
    " This zoological park is a domestic to the diverse mammalian species including the tiger, undergo, leopard, "
    "panther, black dollar, macaque, rabbit and many others. This park additionally affords a safe haven to the "
    "avifauna like the Brahminy eagle, lark, woodpecker, cuckoo, owl etc. Kota Zoological Park is understood for its "
    "unspoiled green surroundings.October-March is the quality season for visiting this zoological park as it's miles "
    "the period whilst the weather is appropriate and the animals welcome their babies."<<endl<<endl;
     cout<<"Timings: All days of the week (except Tuesday) 9:00 AM - 6:30 PM"<<endl;
    cout<<"Entry Fee : \n For Indians: Rs 20/- per head \n For Foreign Nationals: Rs 40/- per head"<<endl<<endl;

}
void ChatraVilas()
{
    cout<<"Chatra Vilas Garden"<<endl<<endl;
    cout<<"Chatra Vilas Garden is a well-known visitor attraction in Kota. Along with the beauty of the garden, the "
    "vacationers can also see masses of royal cenotaphs in the lawn."<<endl<<endl;
    cout<<"Things to do around Chatra Vilas Garden:\n Saiman Plaza \n Ghoomar Beer Bar \n Gma Plaza Market \n Central Square mall"<<endl<<endl;
    cout<<"Restaurants near Chatra Vilas Garden:\n";
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
    cout<<"\tMaheshwari Restaurant\t\t384, Rajiv Gandhi Nagar, Kota, Rajasthan, India"<<endl<<endl;
}
void Darrah()
{

   cout<<"Darrah Wildlife Sanctuary"<<endl;
   cout<<"Darrah Wildlife Sanctuary is situated around 56 kms away from Kota near Bundi. The sanctuary boasts of a"
   " rich wildlife and is home to asiatic elephant, sambar deer, elks etc among several other exotic animal and plant"
   " species. The sanctuary is mostly popular for wildlife safaris, treks and sightseeing. Initially it was used as"
   " a hunting ground by the Royal families."<<endl<<endl;
   cout<<"Its is 0 km from city center"<<endl;
    cout<<"Timings : 7:00 AM - 5:00 PM"<<endl;
    cout<<"Entry Fee : Indians - INR 20 Foreigners - INR 100"<<endl<<endl;
}
};
class temples
{
public:
    void display()
    {
        cout<<"TEMPLES IN KOTA"<<endl;
        cout<<"1. Garadia Mahadev Temple"<<endl;
        cout<<"2. Shivpuri Dham"<<endl;
        cout<<"3. Godavri Dham Temple"<<endl;
        cout<<"4. Kansua Shiv Mandir"<<endl;
    }
    void GaradiaMahadev()
    {
        cout<<"Garadia Mahadev Temple"<<endl<<endl;
        cout<<"Situated in Daulatganj near Kota, Garadiya Mahadev Temple is not just a revered Hindu temple"
        " but also a popular tourist spot because of its location at the scenic Chambal gorge."
        " The presence of several peacocks and other avian species attract a lot of birdwatchers and photography "
        "buffs. Considered to be the best place to relax and unwind, the vantage point is surely a must- visit."<<endl<<endl;
        cout<<"Entry fee: INR 0"<<endl;
        cout<<"Timings: 5:00 AM to 7PM"<<endl;
        cout<<"Popular for: God Lovers and Nirvana Seekers"<<endl;
        cout<<"Things to do around Garadia Mahadev Temple:\n Chambal River Cruise \n Mahaveer Dharamshala Market \n Sawan Puhar Waterpark \n Central Square mall"<<endl<<endl;
        cout<<"Restaurants near Garadia Mahadev Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tKota's Zaika\t\t\tNayapura, Hotel Saraswati Palace, Near Ratan Kachori and sweets"<<endl;
        cout<<"\tThe Highway King\t\tNear St.John's School, Gyan Sarovar Kunhadi, Kota, Rajasthan 324008"<<endl;
        cout<<"\tKota Castle Restaurant\t\tHn 29 Central Road Landmark City Opp to Shri Hari Hospital"<<endl;
        cout<<"\tAmar Dhaba\t\t\tBhimganj Mandi, Kota, Rajasthan, India"<<endl<<endl;

    }
    void Shivpuri()
    {
       cout<<"Shivpuri Dham"<<endl<<endl;
        cout<<"Shivpuri Dham is one the ancient most and unique temple in Kota. It has as many as 525 shivalingas "
        "at one place. The place is thronged by pilgrims and devotees all through the year; however, the busiest "
        "time of the year is Shivratri or Rasleela. Between the shivalingas, there is a huge statue of God Pashupati Nath."<<endl<<endl;
        cout<<"Entry Fee : No entry fee"<<endl;
         cout<<"Popular for: God Lovers"<<endl;
        cout<<"Things to do around Shivpuri Dham:\n Lodha Market \n City Mall \n Z Cine Mall \n Central Square mall"<<endl<<endl;
        cout<<"Restaurants near Shivpuri Dham:\n";
        cout<<"\t\tName\t\t\tAddress"<<endl;
        cout<<"\tNatural Restaurant\t\tVigyan Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tRoyal Firdous Restaurant\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl;

    }
    void GodavriDham()
    {
       cout<<"Godavri Dham Temple"<<endl<<endl;
       cout<<"Located in Dadabari in Kota, Godavari Dham Temple is dedicated to Lord Hanuman and is based on the"
       " banks of river Chambal. The temple hosts a special morning and midnight aarti on Tuesdays and Saturdays "
       "which is attended by hundreds of pilgrims. Besides, the temple also houses idols of several other gods "
       "and goddesses including Lord Shiva, Bhairav, Ganpati etc."<<endl<<endl;
       cout<<"It is 8 km from city center"<<endl;
       cout<<"Popular for: God Lovers"<<endl;
       cout<<"Timings: All days of the week 7:00 AM - 8:00 PM"<<endl;
        cout<<"Entry Fee : No entry fee"<<endl;
        cout<<"Things to do around Godavri Dham Temple:\n New Motor Market \n Central Square Mall \n Lakshmi Narayan Market \n Saiman Plaza"<<endl<<endl;

}
    void Kansua()
    {

        cout<<"Kansua Shiv Mandir"<<endl<<endl;
        cout<<"Kansua Temple is one of the most ancient temples near Bundi in Kota which is enshrined by Lord Shiva."
        " The temple houses a shivalinga which has four heads; it is believed that the shrine was constructed by the"
        " Pandavas when they visited Kota during their exile. The temple is built just right by River Chambal and is"
        " also known as Karneshwar Temple."<<endl;
        cout<<"It is 8 km from city center."<<endl;
        cout<<"Timings : 6:00 AM - 7:00 PM"<<endl;
        cout<<"Entry Fee : No entry fee"<<endl;
    }

};

class lakes_and_waterfalls
{
public:
    void display()
    {

        cout<<"LAKES AND WATERFALLS IN KOTA"<<endl;
        cout<<"1. Kishore Sagar Lake"<<endl;
        cout<<"2. Kota  Barrage"<<endl;
    }
    void KishoreSagar()
    {

        cout<<"Kishore Sagar lake"<<endl<<endl;
        cout<<"Kishore Sagar is an artificial picturesque lake dating back to 1346 constructed by the Bundi"
        " Prince Dehra Deh. It located by the side of attractive Brij Vilas palace museum."<<endl<<endl;
        cout<<"4 km from city center"<<endl;
        cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl;
        cout<<"Things to do around Kishore Sagar Lake:\n Gma Plaza Market \n New Sarafa Market \n Central Square Mall \n Blue Sea Bar"<<endl<<endl;
        cout<<"Restaurants near Kishore Sagar Lake:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tFlavour Restaurant\t\tOm Cineplex, 11, Indra Vihar Opera Hospital Road, Kota, India"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;

    }
    void KotaBarrage()
    {

      cout<<"Kota Barrage"<<endl<<endl;
      cout<<"Kota Barrage was certainly not constructed keeping tourism in mind. However, its majestic appeal has "
      "turned it into one over the years. The gushing flow of foaming white water is an absolute treat for the eyes "
      "from atop the bridge. Visitors flock here to enjoy this majestic scene, especially in monsoon when the gates "
      "are all open. The area is characterised by a cool, relaxing breeze because of the proximity of the water. It "
      "is one of those places where you can keep quiet and let the place make the noise. Kota Barrage is a favourite "
      "evening time gathering. You will find people in couples or groups standing along the railings enjoying the view "
      "and spending quality time with their family and loved ones."<<endl<<endl;
      cout<<"It is 6 km from city center."<<endl;
      cout<<"Timings : 24 hours"<<endl;
        cout<<"Entry Fee : No entry fee"<<endl;
        cout<<"Restaurants near Kota Barrage:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tShri Gautam Restaurant\t\tShop No-09, Thermal Main Road"<<endl;
        cout<<"\tDesh Sevak Bhojnalaya\t\tOpposite Police Chouki"<<endl<<endl;
    }
};

   tourism t;
   forts_and_palaces fp;
   gardens g;
   temples temp;
   lakes_and_waterfalls lw;

   void goto_temples()
   {
       cout<<" ";
   }



class housing                 //in Kota city//
{
 protected:
   char name[30];
   long int adhaarno;
   long int phone;
 public:
   char room_type[30];
   int days;
   void input()    //general housing details//
    {
      cout<<"Enter name,adhaar number and contact number ";
      cin>>name>>adhaarno>>phone;
      cout<<"Enter room type and number of days you want to stay ";
      cin>>room_type;
      cin>>days;
    }
  virtual void display(char *){};
};
class hostel:public housing  //derived class of housing//
{
  protected:
    float price; //total price//
  public:
    int input1(char hostel_name[30]);
    void display(char *);
};
int hostel::input1(char hostel_name[30])
{
       if(strcmpi(hostel_name,"rajniwas")==0)
       {
	     if(strcmpi(room_type,"twin")==0)
	     {
	      price=days * 250;
	      cout<<"Room is available.Your price according to twin sharing basis in hostel=Rs."<<price;
	      return 0;
	     }
         else if(strcmpi(room_type,"quad")==0)
	     {
	       price=days * 150;
	       cout<<"Room is available.Your price according to quad sharing basis in hostel=Rs."<<price;
	       return 0;
         }
         else
	     {
		   cout<<"!Room not available in Raj niwas hostel!";
	       return -1;
         }
      }
     else if(strcmp(hostel_name,"krishna")==0)
     {
       if(strcmpi(room_type,"twin")==0)
	   {
	     price=days * 220;
	     cout<<"Room is available.Your price according to twin sharing basis in hostel=Rs."<<price;
	     return 0;
	   }
       else if(strcmpi(room_type,"quad")==0)
	   {
	     price=days * 180;
	     cout<<"Room is available.Your price according to quad sharing basis in hostel=Rs."<<price;
	     return 0;
	   }
       else
	   {
		 cout<<"!Room not available in Krishna hostel!";
	    return -1;
       }
     }
     return 0;
}
void hostel:: display(char hostel_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"Hostel name:"<<hostel_name<<endl<<"Price:"<<price;
}
class pg:public housing   //derived class of housing//
{
  protected:
    float price1;    //price per month//
  public:
    int input2(char pg_name[30]);
    void display(char *);
};
int pg::input2(char pg_name[30])
{
       if(strcmpi(pg_name,"prateek")==0)
       {
	     if(strcmpi(room_type,"twin")==0)
	     {
	      price1=days * 500;
	      cout<<"Room is available.Your price according to twin sharing basis in PG=Rs."<<price1;
	      return 0;
	     }
          else if(strcmpi(room_type,"quad")==0)
	     {
	      price1=days * 400;
	      cout<<"Room is available.Your price according to quad sharing basis in PG=Rs."<<price1;
	      return 0;
	     }
          else
	     {
	      cout<<"!Room not available in Prateek PG!";
	      return -1;
	     }
       }
      else if(strcmpi(pg_name,"aastha")==0)
      {
	    if(strcmpi(room_type,"twin")==0)
	    {
	      price1=days * 450;
	      cout<<"Room is available.Your price according to twin sharing basis in PG=Rs."<<price1;
	      return 0;
	    }
        else if(strcmpi(room_type,"quad")==0)
	    {
	      price1=days * 500;
	      cout<<"Room is available.Your price according to quad sharing basis in PG=Rs."<<price1;
	      return 0;
	    }
        else
	      {
		   cout<<"!Room not available in Aastha PG!";
	       return -1;
	      }
      }
      return 0;
}
void pg::display(char pg_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"PG name:"<<pg_name<<endl<<"Price:"<<price1;
}
class hotel:public housing   //derived class of housing//
{
  protected:
    float price2;    //price per day//
  public:
    int input3(char hotel_name[30]);
    void display(char *);
};
int hotel::input3(char hotel_name[30])
{
      if(strcmpi(hotel_name,"international_grand")==0)
      {
       if(strcmpi(room_type,"single")==0)
	   {
	    price2=days * 3000;
	    cout<<"Room is available.Your price according to single stay basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else if(strcmpi(room_type,"twin")==0)
	  {
	    price2=days * 2000;
	    cout<<"Room is available.Your price according to twin sharing basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else if(strcmpi(room_type,"quad")==0)
	  {
	    price2=days * 1500;
	    cout<<"Room is available.Your price according to quad sharing basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else
      {
	    cout<<"!Room not available in International grand hotel!";
	    return -1;
      }
    }
     else if(strcmpi(hotel_name,"country_inn")==0)
      {
       if(strcmpi(room_type,"single")==0)
	   {
	     price2=days * 5000;
	     cout<<"Your price according to single stay basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else if(strcmpi(room_type,"twin")==0)
	   {
	     price2=days * 3000;
	     cout<<"Your price according to twin sharing basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else if(strcmpi(room_type,"quad")==0)
	   {
	     price2=days * 2000;
	     cout<<"Your price according to quad sharing basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else
	   {
	     cout<<"!Room not available in Country inn hotel!";
	     return -1;
	   }
      }
      return 0;
}
void hotel::display(char hotel_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"Hotel name:"<<hotel_name<<endl<<"Price:"<<price2;
}
class carent:public housing
{
	protected:
	int rent;
	char carname[30];
	char model[30];
	public:
		void input4(char carname[30]);
		void display(char*);
};
	void carent:: input4(char carname[30])
		{
			cout<<"Enter car model ";
			cin>>model;
			if(strcmpi(carname,"Maruti_suzuki")==0)
			{

		     if(strcmp(model,"RJ-20")==0)
		      rent=days*100;
		     else if(strcmp(model,"RJ-34")==0)
		      rent=days*120;
		     else if(strcmp(model,"RJ-40")==0)
		      rent=days*200;
		   }
		   if(strcmpi(carname,"Wagon_R")==0)
			{

		     if(strcmp(model,"RJ-22")==0)
		      rent=days*120;
		     else if(strcmp(model,"RJ-30")==0)
		      rent=days*180;
		     else if(strcmp(model,"RJ-10")==0)
		      rent=days*100;
		   }
	    }
		void carent::display(char carname[30])
		{
			cout<<"Car model:"<<model<<endl<<"Car name:"<<carname<<endl<<"Rent="<<rent<<endl;
		}



class resume
{
 public:
   char name[30];
   int age;
   int phone;
   void input()
    {
      cout<<endl<<"Enter name, age and contact number ";
      cin>>name>>age>>phone;
    }
 virtual void display(){};
};
class teaching:public resume
{
  protected:
   char qualification1[30];
   int prev_jobexperience1; //in years
   char applyingforpost1[50];
  public:
    void input1()
     {
       cout<<endl<<"Enter your qualifications,previous job experience and the post you are applying for:";
       cin>>qualification1>>prev_jobexperience1>>applyingforpost1;
       cout<<endl<<"Minimum job experience should be 2 years";
       if(prev_jobexperience1<1)
        {
	     cout<<endl<<"Not eligible";
        }
       else
         {
          cout<<endl<<"Eligible";
          if(prev_jobexperience1==2)
           {
             cout<<endl<< "Salary = 10,000 per month";
           }
           else if( prev_jobexperience1>2 && prev_jobexperience1<5)
           {
             cout<<endl<< " Salary = 15,000 per month";
           }
           else
	       {
             cout<<endl<<" salary = 20,000 per month";
           }
         }
    }

  void display()
   {
     cout<<endl<<name<<endl<<age<<endl<<phone<<endl<<qualification1<<endl<<prev_jobexperience1<<endl<<applyingforpost1;
   }
};
class engineer:public resume
{
  public:
   char qualification3[30];
   int prev_jobexperience3; //in years
   char applyingforpost3[50];
   int skills;

   void input3()
   {
    cout<<endl<<"Enter your qualifications,previous job experience and the post you are applying for:";
    cin>>qualification3>>prev_jobexperience3>>applyingforpost3;
     cout<<endl<<"Minimum skills known should be 3";
     if(skills<3)
     {
	   cout<<"Not eligible";
     }
       else
    {
	  cout<<"Eligible";
      if(skills==3)
      {
      cout<<"Salary1= 20,000 per month";
      }
      else if( skills>3 && skills<5)
     {
      cout<<endl<<"Salary= 25,000-30,000 per month";
     }
      else
	  {
       cout<<endl<<"salary 40,000-50,000 per month";
      }
  }
}
 void display()
 {

   cout<<endl<<name<<endl<<age<<endl<<phone<<endl<<qualification3<<endl<<prev_jobexperience3<<endl<<applyingforpost3;
}
};
class doctor:public resume
{
  public:
   char qualification2[30];
   int prev_jobexperience2; //in years
   char applyingforpost2[50];
    void input2()
   {
     cout<<"Minimum job experience should be 3 years";
     if(prev_jobexperience2<3)
      {
	    cout<<"Not eligible";
      }
      else
      {
	   cout<<"Eligible";
       if(prev_jobexperience2==3)
         {
         	cout<< "Salary = 100,000 per month";
         }
         else if( prev_jobexperience2>3 && prev_jobexperience2<7)
        {
            cout<<"Salary = 200000-300000 per month";
        }
         else
		 {
            cout<<"salary = 300000-400000 per month";
         }
      }
   }
void display()
   {
	cout<<endl<<name<<endl<<age<<endl<<phone<<endl<<qualification2<<endl<<prev_jobexperience2<<endl<<applyingforpost2;
   }
};



class student
{
    protected:
                char name[30];
                int mobileno;
                int age;
                char city[30];
                char email[50];
   public:
                int Class; //class is a keyword hence can't be used as a variable name so use Class or sth else
                char dropper;
        void input()
        {
            //cout<<endl<<"enter name,age,mobileno,city,emailaddress,class"; take inputs one by one
            //cout<<"are you a dropper";
            //cin>>ans; ans is a char variable it can't store so much info
            cout<<endl<<"Enter name:"; 
			cin>>name;
            cout<<"Enter mobile no:"; 
			cin>>mobileno;
            cout<<"Enter age:"; 
			cin>>age;
            cout<<"enter city:"; 
			cin>>city;
            cout<<"Enter Email:";
			 cin>>email;
            cout<<"enter class:"; 
			cin>>Class;
            cout<<"Are you a dropper?(enter y or n):"; 
			cin>>dropper;
        }

};

class institutes:public student
{
    public:
    void institutenames()
    {
        cout<<"The following institues have vacancy:"; //semicolon missing
        cout<<"\n"<<"1.Prodigy"<<endl;
        cout<<"2.Allen"<<endl;
    }
};

class courses:public institutes
{
    public:
    char stream[30];
    char typeofcourse[20];
    int standard;
    char type[10];
    void input2()
    {
        cout<<"enter stream(med/non med)";
        cin>>stream;
        cout<<"enter standard";
        cin>>standard;
        cout<<"enter the type of student(dropper or regular)";
        cin>>type;
        cout<<"enter type of course you want";
        cin>>typeofcourse;
    }

    void display()
    {
        char instiname[30];
        cout<<"enter institute's name for its courses";
        cin>>instiname;
        if(strcmp(instiname,"prodigy")==0) //srcmp not strcmp
        {
            cout<<"   REGULAR COURSES   ";
            cout<<"   FOUNDATION(BOTH MED/NON MED)  ";
            cout<<"   CLASS 6- LITTLE GENIE   ";
            cout<<"   CLASS 7- UDAYA TWO YEAR  ";
            cout<<"   CLASS 8- UDAYA ONE YEAR  "<<endl<<endl;
            cout<<"   NON- MED REGULAR COURSES ";
            cout<<"   CLASS 9- PINNACLE1  "  ;
            cout<<"   CLASS 10- PINNACLE2  ";
            cout<<"   CLASS 11- PINNACLE3  ";
            cout<<"   CLASS 12- PINNACLE4  ";
            cout<<"   DROPPER- ROCKSTAR  "<<endl<<endl;
            cout<<"    MED REGULAR COURSES  ";
            cout<<"   CLASS 9- SHIKSHA1  "  ;
            cout<<"   CLASS 10- SHIKSHA2  ";
            cout<<"   CLASS 11- SHIKSHA3  ";
            cout<<"   CLASS 12- SHIKSHA4  ";
            cout<<"   DROPPER- MEDDI  "<<endl<<endl;
        }
        else  if(strcmp(instiname,"allen")==0)
        {
            cout<<"   REGULAR COURSES   ";
            cout<<"   FOUNDATION(BOTH MED/NON MED)  ";
            cout<<"   CLASS 6- LITTLE GENIE   ";
            cout<<"   CLASS 7- UDAYA TWO YEAR  ";
            cout<<"   CLASS 8- UDAYA ONE YEAR  "<<endl<<endl;
            cout<<"   NON- MED REGULAR COURSES ";
            cout<<"   CLASS 9- PINNACLE1  "  ;
            cout<<"   CLASS 10- PINNACLE2  ";
            cout<<"   CLASS 11- PINNACLE3  ";
            cout<<"   CLASS 12- PINNACLE4  ";
            cout<<"   DROPPER- ROCKSTAR  "<<endl<<endl;
            cout<<"    MED REGULAR COURSES  ";
            cout<<"   CLASS 9- SHIKSHA1  "  ;
            cout<<"   CLASS 10- SHIKSHA2  ";
            cout<<"   CLASS 11- SHIKSHA3  ";
            cout<<"   CLASS 12- SHIKSHA4  ";
            cout<<"   DROPPER- MEDDI  "<<endl<<endl;
        }

    }

    void displaycoursedetails()
    {
        char names[50];
        cout<<"enter the name of the course you want the details of";
        cin.ignore();
        cin.getline(names,50); //cin doesnt take input after space use cin.getline
        if(strcmp(names,"Little Genie")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
            cout<<"Entire course will be covered in 4 phases."<<endl;
            cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
            cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
            cout<<"Work Books for Home Assignment."<<endl;
            cout<<"Common Phase Tests across the country."<<endl;
            cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
            cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
            cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
            cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
            cout<<"Regular feedback & Test Analysis Sessions."<<endl;
            cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
            cout<<"DURATION :"<<endl;
            cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
        }
        else
          if(strcmp(names,"Udaya Two Year")==0)
        {
        cout<<"COURSE STRUCTURE :"<<endl;
        cout<<"Entire course will be covered in 4 phases."<<endl;
        cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"Work Books for Home Assignment."<<endl;
        cout<<"Common Phase Tests across the country."<<endl;
        cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
        cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
        cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
        cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
        }

        else  if(strcmp(names,"Udaya One year")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
}

else  if(strcmp(names,"PINNACLE1")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;

}
else if  (strcmp(names,"PINNACLE2")==0) //if written twice
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
}

else  if(strcmp(names,"PINNACLE3")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
}

 else if(strcmp(names,"PINNACLE4")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
}

else  if(strcmp(names,"ROCKSTAR")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;


    }

    else  if(strcmp(names,"SHIKSHA1")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
}

else  if(strcmp(names,"SHIKSHA2")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;

}

else  if(strcmp(names,"SHIKSHA3")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;

}

else  if(strcmp(names,"SHIKSHA4")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;
}

else  if(strcmp(names,"MEDDI")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl;
cout<<"Entire course will be covered in 4 phases."<<endl;
cout<<"Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
cout<<"Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
cout<<"Work Books for Home Assignment."<<endl;
cout<<"Common Phase Tests across the country."<<endl;
cout<<"Chapter Practice Problems (CPP): On each chapter Students will be given Chapter Practice Problems which they have to attempt and submit before the beginning of the next chapter. These solutions will be checked by the faculty and will be returned to the Students with remarks and suggestions. Thus helping every Student to have a very strong command over fundamental concept knowledge very crucial for getting Top ranks."<<endl;
cout<<"Class Learning Improvement Program (CLIP): Icing on the cake of every class will be done through Class Learning Improvement Program for those who have completed all assignments to further help them get a higher Rank in Competitive Exams."<<endl;
cout<<"Success Potential Index (SPI): We are the only institute in India having the capability to predict Success Potential Index (SPI) of a student. We constantly encourage our students to emulate their Success Potential Index (SPI)."<<endl;
cout<<"Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
cout<<"Regular feedback & Test Analysis Sessions."<<endl;
cout<<"Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
cout<<"DURATION :"<<endl;
cout<<"About 175 hrs. Including classroom interaction and tests."<<endl;

}

      else cout<<" doesnt exist";

}


      void feestructure()
      {
          cout<<" fee for all medical courses is INR 5Lacs"<<endl;
          cout<<" fee for all non-medical courses is INR 3Lacs"<<endl;

      }

      void dispcontactdetails()
      {
          cout<<" CONTACT NO. FOR PRODIGY: 011-2345689,011-23456432"<<endl;
           cout<<" CONTACT NO. FOR Allen: 011-2345689,011-23456432"<<endl;

      }


};


class SmartCity
{
  public:
    void modules()
    {
    cout<<" *******************************************************Welcome to Smart city! Different modules of Smart City project**************************************************"<<endl;
    cout<<"1. Housing"<<endl;
    cout<<"2. Tourism"<<endl;
    cout<<"3. Education"<<endl;
    cout<<"4. Job Seeker"<<endl;
    }
    void Housing_module()
    {
 hostel h;
 pg p;
 hotel htl;
 carent c;
 char types[30],hostel_name[30],pg_name[30],hotel_name[30];
 cout<<"                      WELCOME TO HOUSING IN KOTA!            ";
 cout<<endl<<"                        experience best stay                 ";
 cout<<endl<<"                       Available hostels:                              ";
 cout<<endl<<" * Raj Niwas(3 star)                                ";
 cout<<endl<<"   Twin sharing                         Rs.250 per day ";
 cout<<endl<<"   Quad sharing                         Rs.150 per day ";
 cout<<endl<<" * Krishna(2 star)                                  ";
 cout<<endl<<"   Twin sharing                         Rs.220 per day ";
 cout<<endl<<"   Quad sharing                         Rs.180 per day ";
 cout<<endl<<"                      Available PG's:                              ";
 cout<<endl<<" * Prateek PG(4 star)                                ";
 cout<<endl<<"   Twin sharing                         Rs.500 per day ";
 cout<<endl<<"   Quad sharing                         Rs.400 per day ";
 cout<<endl<<" * Aastha PG(3 star)                                  ";
 cout<<endl<<"   Twin sharing                         Rs.450 per day ";
 cout<<endl<<"   Quad sharing                         Rs.500 per day ";
 cout<<endl<<"                      Available Hotels:                              ";
 cout<<endl<<" * International Grand(4 star)                                ";
 cout<<endl<<"   Single occupancy                     Rs.3000 per day ";
 cout<<endl<<"   Twin sharing                         Rs.2000 per day ";
 cout<<endl<<"   Quad sharing                         Rs.1500 per day ";
 cout<<endl<<" *  Country Inn(4 star)                                  ";
 cout<<endl<<"   Single occupancy                     Rs.5000 per day ";
 cout<<endl<<"   Twin sharing                         Rs.3000 per day ";
 cout<<endl<<"   Quad sharing                         Rs.2000 per day ";
 cout<<endl;
 label:
 {
 cout<<"Enter the type of housing you want "; //hostel/pg/hotel//
 cin>>types;
 if(strcmpi(types,"hostel")==0)
 {
  h.input();
  cout<<"Enter the hostel name in which you want to stay ";
  cin>>hostel_name;
  int f1=h.input1(hostel_name);
  if(f1==-1)
  goto label;
  else
  h.display(hostel_name);
 }
 else if(strcmpi(types,"pg")==0)
 {
  p.input();
  cout<<"Enter the PG name in which you want to stay ";
  cin>>pg_name;
  int f2=p.input2(pg_name);
  if(f2==-1)
  goto label;
  else
  p.display(pg_name);
 }
 else if(strcmpi(types,"hotel")==0)
 {
  htl.input();
  cout<<"Enter the hotel name in which you want to stay ";
  cin>>hotel_name;
  int f=htl.input3(hotel_name);
  if(f==-1)
  goto label;
  else
  htl.display(hotel_name);
 }
}
cout<<endl<<"Do you want to rent a car for your stay? ";
char answer,carname1[30];
cin>>answer;
if(answer=='y')
 {
    cout<<endl<<endl;
    cout<<"                                Welcome to car rental services!";
    cout<<endl<<endl<<"  Car Name                               Car Model                                   Rent per day";
    cout<<endl<<"* Maruti Suzuki                             RJ-20                                          100";
    cout<<endl<<"* Maruti Suzuki                             RJ-34                                          120";
    cout<<endl<<"* Maruti Suzuki                             RJ-40                                          200";
    cout<<endl<<"* Wagon R                                   RJ-22                                          120";
    cout<<endl<<"* Wagon R                                   RJ-30                                          180";
    cout<<endl<<"* Wagon R                                   RJ-10                                          100";
    cout<<endl<<" Enter car name ";
    cin>>carname1;
    cout<<endl;
 	c.input4(carname1);
 	c.display(carname1);
 	return;
 }

    }
    void Tourism_module()
    {
        int c,ch;
        char ans='y';
   cout<<"KOTA TRAVEL GUIDE"<<endl;
   cout<<"An Insight Into KOTA Tourism"<<endl<<endl;
   t.intro();
   t.tourist_attractions();
   while(ans)
   {
   label:
   cout<<"\nSelect your choice: ";
   cin>>c;
   cout<<endl;
   switch(c)
   {

       case 1: fp.display();
               while(ans)
				{
                cout<<"Enter your choice : ";
                cin>>ch;	
                switch(ch)
                 { 
                    case 1: fp.CityPalace();
                            break;
                    case 2: fp.JagmandirPalace();
                            break;
                    case 3: fp.RanijiKiBaoli();
                            break;
                    case 4: fp.AbhedaMahal();
                            break;
                    default: cout<<"Your choice does not match.Do you want to continue?";
                             cin>>ans;
                             if(ans!='y')
                              goto label;
                             
                 }
				}
       case 2: g.display();
               while(ans)
			   {
			    cout<<"Enter your choice : ";
                cin>>ch;
                switch(ch)
                 {

                    case 1: g.SevenWondersPark();
                            break;
                    case 2: g.Zoo();
                            break;
                    case 3: g.ChatraVilas();
                            break;
                    case 4: g.Darrah();
                            break;
                    default: cout<<"Your choice does not match.Do you want to continue?";
                             cin>>ans;
                             if(ans!='y')
                              goto label;
                 }
				}
       case 3: temp.display();
               while(ans)
			   {
			    cout<<"Enter your choice: ";
                cin>>ch;
                switch(ch)
                 {
                    case 1: temp.GaradiaMahadev();
                            break;
                    case 2: temp.Shivpuri();
                            break;
                    case 3: temp.GodavriDham();
                            break;
                    case 4: temp.Kansua();
                            break;

                    default: cout<<"Your choice does not match.Do you want to continue?";
                             cin>>ans;
                             if(ans!='y')
                              goto label;
                 }
				}

       case 4: lw.display();
               while(ans)
			   {
			    cout<<"Enter your choice: ";
                cin>>ch;
                switch(ch)
                 {
                    case 1: lw.KishoreSagar();
                            break;
                    case 2: lw.KotaBarrage();
                            break;
                    default: cout<<"Your choice does not match.Do you want to continue?";
                             cin>>ans;
                             if(ans!='y')
                              goto label;
                 }
				}
        default: cout<<"Your choice doesnt match.Do you want to continue?";
		         cin>>ans; 
		         if(ans!='y')
		          return;
		         

   }
   } 

}

    void Education_module()
    {
        student s;
    institutes i; //class name is sinstitues not institute
    courses c;
    char ans='y';
    int num;
    cout<<"    WELCOME TO KOTA EDUCATION!   ";
    cout<<"    EXPERIENCE BEST STUDY         ";

    s.input();

    while(ans)
	{
    cout<<" enter what do you want to know(prefer going in the ascending order to get all the details clear)"<<endl;
    cout<<" 1. institute names"<<endl;
    cout<<" 2. course names"<<endl;
    cout<<" 3. Fee structure"<<endl;
    cout<<" 4. course details"<<endl;
    cout<<" 5. contact details"<<endl;
	cin>>num;
    if(num==1)
       i.institutenames();
    else if (num==2)
       c.display();

       else if(num==3)
       c.feestructure();

       else if(num==4)
       c.displaycoursedetails();

       else if(num==5)
       c.dispcontactdetails();

       else 
	    {
	      cout<<" invalid option";
          return;
        }
   }
}
 
void JobSeeker_module()
 {
        teaching t ;
        engineer e ;
        doctor d ;
        cout<<" Hey Jobseeker!  Welcome to Kota city. No need to worry. You can have plenty of job opportunities here."<<endl; 
        int a;
        cout<< "Enter the number for the job you are searching for :"<<endl;
        cout<<"Enter 1 for teaching"<<endl;
        cout<<"Enter 2 for engineering job"<<endl;
        cout<<"Enter 3 for doctor"<<endl;
        cin>>a;
        if( a==1)
         {
             cout<<endl<<" You have selected teaching job You necessarily need to have previous job experience of atleast 2 years to apply for this job.";
             cout<<endl<<"For job experience 2 years: Average salary = 10000 per month";
             cout<<endl<<"For job experience between 3 to 5 years : Average salary= 15000 per month";
             cout<<endl<<"For job experience more than 5 years: Average salary=20000 per month.";
             t.input();
             t.input1();
             cout<<endl;
             t.display();
         }
        else if(a==2)
         {
              cout<<endl<<"You have selected engineering job";
              cout<<endl<<"You need to know atleast 3 skills to apply for this job";
              cout<<endl<<"If you know 3 skills: Average salary= 20,000 per month";
              cout<<endl<<"If you know skills more than 3 but less than 5: Average salary= 25,000-30,000 per month";
              cout<<endl<<"If you know more than 5 skills: Average salary= 40,000-50,000 per month.";
              e.input();
              e.input3();
              cout<<endl;
              e.display();
         }
        else if(a==3)
         {
              cout<<endl<<"You have selected for doctor job.";
              cout<<endl<<"To apply for this job, you should have minimum previous job experience of 3 years.";
              cout<<endl<<"For previous job experience of 3 years: Average salary= 100000 per month.";
              cout<<endl<<"For previous job experience of more than 3 years but less than 7 years: Average salary= 200000-300000 per month";
              cout<<endl<<"For previous job experience of more than 7 years: Average salary=300000-400000 per month.";
              d.input();
              d.input2();
              cout<<endl;
              d.display();
         }
        else
         {
             cout<<endl<<"You applied for wrong job";
             return;
         }
    }
};
int main()
{
    SmartCity S;
    S.modules();
    int c;
    char ans='y';
    while(ans)
     {
     	label1:
		cout<<endl<<"Which module would you like to visit?";
        cin>>c;
        switch(c)
		{
            case 1: S.Housing_module(); 
                    break;
                    goto label1;
            case 2: S.Tourism_module();
			        break; 
                    goto label1;
            case 3: S.Education_module(); 
                    break;
                    goto label1;
            case 4: S.JobSeeker_module(); 
                    break;
                    goto label1;
            default:cout<<endl<<"Do you want to continue?";
                    cin>>ans;

        }
        cout<<endl<<"Do you want to continue?";
        cin>>ans;
        if(ans!='y')
         exit(0);
     }
    return 0;
}
