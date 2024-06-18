#include<iostream>
#include<string.h>
#include<iomanip>
#include<cctype>
using namespace std;
void getHouse(int&,int&,char&,char&,int&,int&);
void getOwnerInfo(int,int, int , char, char);
const int numHouse = 32;
const char houses[numHouse] = {1, 2, 3, 4 , 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
int total[numHouse] = {150,200,350,500,160,240,370,500,560,700,860,1200,560,700,860,1200,150,200,350,500,160,240,370,500,560,700,860,1200,560,700,860,1200};
bool isRented[numHouse] = {false, false, false, false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
int main()
{
	int area,house,price,total,sum=0,j=0;
	char answer,gender,furniture;
	char id[10];		    //student number char id [10]
	char name[50];			//name of student char name[50]
	
	
	cout<<endl<<setw(60)<<"WELCOME!"<<endl<<endl;           
	cout<<"Please enter your student ID : ";
	cin>>id;
	strlen(id);
	if(strlen(id)>10 || strlen(id)<10)
		cout<<"Student id is invalid"<<endl;
	else
	{
		cout<<"Please enter your name : ";
		cin.ignore();
		cin.getline(name,50);
		cout<<"Ready to search for a house? (Y/N):";          //user enter data
		cin>>answer;
	}
	
	while (answer=='Y' || answer=='y')                     //condition to evaluate data
	{
		cout<<"Enter your gender (F/M):";
		cin>>gender;
		cout<<"Area:"<<" "<<"1.Merlimau"<<" "<<"2.Jasin"<<endl;		//user area choice
		cout<<"Choose area:";
		cin>>area;
		cout<<"Enter your budget:";                                  //user budget
		cin>>price;
		cout<<"Do you want a fully furnished house? (S-Semi furnished / F-Fully furnished):";
		cin>>furniture;
		
		getHouse(area,price,gender,furniture,house,sum);
		
		getOwnerInfo(house,area,price,gender, furniture);

		cout<<"\n\nDo you want to continue searching? (Y/N):" <<endl;		//updating of data either want to proceed the
		cin>>answer;
			
	}
	
	cout<<"THANK YOU FOR YOUR VISIT!"<<endl;
	cout<<"\nStudent id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"The total price is RM  "<<sum<<endl;
	
}

void getHouse(int &area,int &price,char &gender,char &furniture, int&house, int&sum)
{	
	
	int i=0, j=0;
	for(i=0;i<1;i++)
	if(area==1)
	{	if (gender=='F' || gender=='f')
		{
			if (furniture=='F' || furniture=='f')
			{
			 	if(price>500 && price<=1500)
				{
					cout<<"\nHouse to Rent in Merlimau"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|8.Rumah Sewa Merlimau Park                                |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM560                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|9.Rent house Taman Merlimau                               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM700                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|10.House Rent Bandar Merlimau                             |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM860                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|11.Sewa Rumah Di Merlimau                                 |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=1200                                         |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
				}
				else
				{
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				}
			}
			else if (furniture=='S' || furniture=='s')
			{
				if(price>=100 && price<=1500)
				{
					cout<<"\nHouse to rent in Merlimau"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|0.Rumah Sewa Taman Panglima Park Merlimau                 |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM150                                        |"<<endl;
					cout<<"|-2 room,1 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|1.Rent house Taman Merlimau                               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM200                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|2.House Rent Bandar Merlimau                              |"<<endl;
					cout<<"|-House Price:RM350                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|3.Sewa Rumah Di Merlimau                                  |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=500                                          |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
				}
				else
				{
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				}
			} 
		}					
		else if (gender=='M' || gender=='m')
		{
			if (furniture=='F' || furniture=='f')	
			{
				if(price>500 && price<=1500)
				{
					cout<<"\nHouse to Rent in Merlimau"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|12.Rumah Sewa Merlimau                                    |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM560                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|13.Rent house in Merlimau permatang Serai                 |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM700                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|14.House Rent Merlimau Ayer Merbau                        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM860                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|15.Sewa Rumah Di Merlimau Pasir                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=1200                                         |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
				}
				else
				{
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				}
			}
		
			else if(furniture=='S' || furniture=='s')
			{	
				if (price>=100 && price<=1500)
				{
					cout<<"\nHouse to rent in Merlimau"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|4.Rumah Sewa Taman Panglima Merlimau                      |"<<endl;
					cout<<"|                                                          |"<<endl;					
					cout<<"|-House Price:RM160                                        |"<<endl;
					cout<<"|-2 room,1 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|5.Rent house Taman 4 Merlimau                             |"<<endl;
					cout<<"|                                                          |"<<endl;				
					cout<<"|-House Price:RM240                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|6.House Rent Bandar Taman Merlimau                        |"<<endl;
					cout<<"|                                                          |"<<endl;					
					cout<<"|-House Price:RM370                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|7.Sewa Rumah Di Merlimau                                  |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=500                                          |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
				}
				else
				{
					if (price<500)
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				}
			}
		}
		else
		{cout<<"Please enter a correct gender";
		price=0;
		}
	}
	else if(area == 2)
	{
		if (gender=='F' || gender=='f')	
		{
			if (furniture=='S' || furniture=='s')
			{
				if(price>=100 && price<=1500)	
				{
					cout<<"\nHouse to rent in Jasin"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|16.Rumah Sewa Di Kampung Seri Mendapat                    |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM150                                        |"<<endl;
					cout<<"|-2 room,1 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|17.Rent house In Jasin Bestari                            |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM200                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|18.House Rent Bandar Jasin                                |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM350                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|19.Sewa Rumah Di Taman Layang Jasin                       |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=500                                          |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
				}
				else
				{
					if (price<500)
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				}
			}
			else if (furniture=='F' || furniture=='f')	
			{
				if(price>500 && price<=1500)
				{
					cout<<"\nHouse to rent in Jasin"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|24.Rumah Sewa Taman Ria Kesang Pajak                      |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM560                                        |"<<endl;
					cout<<"|-2 room,1 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|25.Rent house Taman Desa Seri Merbau                      |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM700                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|26.House Rent Bandar Taman Megah Bemban                   |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM860                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|27.Sewa Rumah Di Taman Merbau Jaya                        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=1200                                         |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
		    
				}
				else
				if (price<500)
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				
			
			}
		}
		else if (gender=='M' || gender=='m')
		{
			if(furniture=='S' || furniture=='s')
			{
				if (price>=100 && price<=1500)
				{
					cout<<"\nHouse to rent in Jasin"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|20.Rumah Sewa Taman Desa Kesang                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM160                                        |"<<endl;
					cout<<"|-2 room,1 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|21.Rent house Taman Desa Merbau                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM240                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|22.House Rent Taman Damai                                 |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM370                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker bed        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|23.Sewa Rumah Di Taman Kesang Desa                        |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=500                                          |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
		    	}
		    	else
				{
					if (price<500)
					{
						cout<<"There is no house available for your budget";
						price=0;
					}
				}
			}
													
			else if(furniture=='F' || furniture=='f')
			{
				if(price>500 && price<=1500)
				{
					cout<<"\nHouse to Rent in Jasin"<<endl;
					cout<<"___________________________________________________________";
					cout<<"\n|28.Rumah Sewa Taman Air Merbau Jasin                     |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM560                                        |"<<endl;
					cout<<"|-2 room,2 bathroom,2 single bed                           |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|29.Rent house in Taman Seri Indah Jasin                   |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM700                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 single bed               |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|30.House Rent Taman Merbau Jaya Jasin                     |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price:RM860                                        |"<<endl;
					cout<<"|-3 room,2 bathroom,1 queen bed,2 double decker            |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|31.Sewa Rumah Di Taman Maju Fasa 1V Jasin                 |"<<endl;
					cout<<"|                                                          |"<<endl;
					cout<<"|-House Price=1200                                         |"<<endl;
					cout<<"|-3 room,3 bathroom,2 queen bed,2 double decker bed        |"<<endl;
					cout<<"|__________________________________________________________|"<<endl;
				}
			
		
				else if(price<500)
				{
					cout<<"There is no house available for your budget";
					price=0.00;
			
				}
			}
		}
		else
		{cout<<"Please enter a correct gender";
		price=0;
		}
		
	}
	else
		{cout<<"The area is invalid";
		price=0;
		}
	
	if (price!=0)	
	{
		cout << "Enter the house number you want to rent (0 to " << numHouse << "): ";
   		cin >> house;

    	if (isRented[house] == false) 
		{
       		isRented[house] = true;
       		cout <<"\nHouse "<<house << " has been rented for RM" << total[house] << endl;
       		sum=total[house]+sum;		//updating the value of number
    	}
    	else 
		{
        cout << "\nSORRY, House "<<house<< " is already rented. Please kindly choose another house" << endl;
  	  	}

	}
	else
	{
		cout<<". Please enter a new data ";
	}

	
		
}

void getOwnerInfo(int house,int area, int price, char gender, char furniture)
{		if(area==1)
	{	if (gender=='F' || gender=='f')
		{
			if (furniture=='F' || furniture=='f')
			{
			 	if(price>500 && price<=1500)
				{
						if(house==8)
					{
						cout<<"\nOwner:Humaira"<<endl;
						cout<<"Tel:011378925"<<endl;
						cout<<"Rate : 4.4";
					}
					else
					if(house==9)
					{
						cout<<"\nOwner:Encik Zainal"<<endl;
						cout<<"Tel:017235649"<<endl;
						cout<<"Rate : 4.1";
					}
					else
					if(house==10)
					{
						cout<<"\nOwner:Jacklyn"<<endl;
						cout<<"Tel:014740124"<<endl;
						cout<<"Rate : 4.3";
					}
					else
					if(house==11)
					{
						cout<<"\nOwner:Habib Khairul"<<endl;
						cout<<"Tel:0286382719"<<endl;
						cout<<"Rate : 4.4";
					}	
				}
			
			}
			else if (furniture=='S' || furniture=='s')
			{
				if(price>=100 && price<=1500)
				{
					if(house==0)
					{
					cout<<"\nOwner : Haji Abu Bakar"<<endl;
					cout<<"tel : 010223456"<<endl;
					cout<<"Rate : 4.5";
					}	
					else if(house==1)
					{
						cout<<"\nOwner:Hajah Rokiah"<<endl;
						cout<<"tel:0134395442"<<endl;
						cout<<"Rate : 4.9";
					}
					else if(house==2)
					{
						cout<<"\nOwner:Roy"<<endl;
						cout<<"tel:012536789"<<endl;
						cout<<"Rate : 4.5";
					}
					else if(house==3)
					{
						cout<<"\nOwner:Jennie"<<endl;
						cout<<"tel:011778349"<<endl;
						cout<<"Rate : 4.3";
					}
				}
			
			} 
		}					
		else if (gender=='M' || gender=='m')
		{
			if (furniture=='F' || furniture=='f')	
			{
				if(price>500 && price<=1500)
				{
						if(house==12)
					{
						cout<<"\nOwner:Haji Samsudin"<<endl;
						cout<<"Tel:0127438910"<<endl;
						cout<<"Rate : 4.8";
					}
					else
					if(house==13)
					{
						cout<<"\nOwner:Nur Iffah"<<endl;
						cout<<"Tel:019512748"<<endl;
						cout<<"Rate : 4.2";
					}
					if(house==14)
					{
						cout<<"\nOwner:Siti Suhaila"<<endl;
						cout<<"Tel:016392718"<<endl;
						cout<<"Rate : 4.5";
					}
					if(house==15)
					{
						cout<<"\nOwner:Maizatul"<<endl;
						cout<<"Tel:0187492047"<<endl;
						cout<<"Rate : 4.1";
					}				
				}
			
			}
		
			else if(furniture=='S' || furniture=='s')
			{	
				if (price>=100 && price<=1500)
				{
					if(house==4)
					{
						cout<<"\nOwner:nini maira"<<endl;
						cout<<"tel:0115674398"<<endl;
						cout<<"Rate : 4.7";
					}
					else
					if(house==5)
					{
						cout<<"\nOwner:Nor Jaafar"<<endl;
						cout<<"Tel:015234850"<<endl;
						cout<<"Rate : 4.5"<<endl;
					}
					else
					if(house==6)
					{
						cout<<"\nOwner:Mohd Faizal"<<endl;
						cout<<"Tel:014786238"<<endl;
						cout<<"Rate : 4.9";
					}
					else
					if(house==7)
					{
						cout<<"\nOwner:Nur Syakila"<<endl;
						cout<<"Tel:0195673297"<<endl;
						cout<<"Rate : 4.1";
					}
				}
				
			}
		}
	
	}
	else if(area == 2)
	{
		if (gender=='F' || gender=='f')	
		{
			if (furniture=='S' || furniture=='s')
			{
				if(price>=100 && price<=1500)	
				{
					if(house==16)
					{
						cout<<"\nOwner:Rasyidah"<<endl;
						cout<<"Tel:0194372916"<<endl;
						cout<<"Rate : 4.7";
					}
					if(house==17)
					{
						cout<<"\nOwner:Haida Maisarah"<<endl;
						cout<<"Tel:015748392"<<endl;
						cout<<"Rate : 4.3";
					}
					if(house==18)
					{
						cout<<"\nOwner:laily"<<endl;
						cout<<"Tel:016749265"<<endl;
						cout<<"Rate : 4.1";
					}
					if(house==19)
					{
						cout<<"\nOwner:khairiah"<<endl;
						cout<<"Tel:01463992"<<endl;
						cout<<"Rate : 4.9";
					}
				}
			
			}
			else if (furniture=='F' || furniture=='f')	
			{
				if(price>500 && price<=1500)
				{
					if(house==24)
					{
						cout<<"\nOwner:syuhada solehah"<<endl;
						cout<<"Tel:017364719"<<endl;
						cout<<"Rate : 4.9";
					}
					if(house==25)
					{
						cout<<"\nOwner:Putri Zafirah"<<endl;
						cout<<"Tel:016489256"<<endl;
						cout<<"Rate : 4.5";
					}
					if(house==26)
					{
						cout<<"\nOwner:Syamimi"<<endl;
						cout<<"Tel:016389264"<<endl;
						cout<<"Rate : 4.2";
					}
					if(house==27)
					{
						cout<<"\nOwner:Azam Shah"<<endl;
						cout<<"Tel:018482047"<<endl;
						cout<<"Rate : 4.9";	
					}
				}		
			}
		}
		else if (gender=='M' || gender=='m')
		{
			if(furniture=='S' || furniture=='s')
			{
				if (price>=100 && price<=1500)
				{
						if(house==20)
					{
						cout<<"\nOwner:muazzam "<<endl;
						cout<<"Tel:028937482"<<endl;
						cout<<"Rate : 4.0";
					}
					if(house==21)
					{
						cout<<"\nOwner:Muhd Jamal"<<endl;
						cout<<"Tel:014389247"<<endl;
						cout<<"Rate : 4.8";
					}
					if(house==22)
					{
						cout<<"\nOwner:Mohd Khairuddin"<<endl;
						cout<<"Tel:017628394"<<endl;
						cout<<"Rate : 4.4";
					}
					if(house==23)
					{
						cout<<"\nOwner:Syuhara"<<endl;
						cout<<"Tel:017463829"<<endl;
						cout<<"Rate : 4.8";
					}
				}
		    	
			}
													
			else if(furniture=='F' || furniture=='f')
			{
				if(price>500 && price<=1500)
				{
					if(house==28)
					{
						cout<<"\nOwner:Farhan"<<endl;
						cout<<"Tel:017465027"<<endl;
						cout<<"Rate : 4.8";
					}
					if(house==29)
					{
						cout<<"\nOwner:Hashim"<<endl;
						cout<<"Tel:014920374"<<endl;
						cout<<"Rate : 4.2";
					}
					if(house==30)
					{
						cout<<"\nOwner:Qaisara"<<endl;
						cout<<"Tel:015829364"<<endl;
						cout<<"rate : 4.6";
					}
					if(house==31)
					{
						cout<<"\nOwner:Zokepli"<<endl;
						cout<<"Tel\t:0132245673"<<endl;
						cout<<"Rate :3.9"<<endl;
					}
				}
			}
		}
	}
}
