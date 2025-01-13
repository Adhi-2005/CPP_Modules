#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
		std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	public:
		void fillContacts() {
			std::cout<<"Enter First Name: ";
			std::getline(std::cin, firstName);
			std::cout<<"Enter Last Name: ";
			std::getline(std::cin, lastName);
			std::cout<<"Enter Nickname: ";
			std::getline(std::cin, nickName);
			std::cout<<"Enter Phone Number: ";
			std::getline(std::cin, phoneNumber);
			std::cout<<"Enter Darkest Secret: ";
			std::getline(std::cin, darkestSecret);
		}
		
		std::string getFirstName() const{ return firstName; }
		std::string getLastName() const{ return lastName; }
		std::string getNickName() const{ return nickName; }
		std::string getPhoneNumber() const{ return phoneNumber; }
		std::string getDarkestSecret() const{ return darkestSecret; }
};

class PhoneBook
{
	private:
		Contact contacts[8];
		int oldestIndex;
		int contactCount;
	
		std::string truncate(const std::string& str) const{
			if(str.length() > 10){
				return str.substr(0, 9) + '.';
			}
			return str;
		}
	
	public:
		PhoneBook() : oldestIndex(0), contactCount(0) {}

		void addContact() {
			Contact newContact;
			newContact.fillContacts();
			contacts[oldestIndex] = newContact;
			oldestIndex = (oldestIndex + 1) % 8;
			if (contactCount < 8) contactCount++;
		}

		void searchContacts() const {
			if (contactCount == 0){
				std::cout<<"No contacts available. \n";
				return;
			}

			std::cout<< std::setw(10) << "Index" << "|"
							<<std::setw(10) << "First Name" << "|"
							<<std::setw(10) << "Last Name" << "|"
							<<std::setw(10) << "Nickname" << "\n";

			for(int i = 0; i < contactCount; ++i)
			{
				std::cout<<std::setw(10) << i << "|"
						<<std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
						<<std::setw(10) << truncate(contacts[i].getLastName()) << "|"
						<<std::setw(10) << truncate(contacts[i].getNickName()) << "\n";
			} 
			int index;
			std::cout<< "Enter index of contact to display: ";
			std::cin>> index;
			std::cin.ignore();

			if (index < 0 || index >= contactCount){
				std::cout<< "Invalid Index. \n";
			}else{
				const Contact& contact = contacts[index];
				std::cout << "First Name: "<< contact.getFirstName() << "\n";
				std::cout<< "Last Name: "<< contact.getLastName() << "\n";
				std::cout<< "Nickname: "<< contact.getNickName() << "\n";
				std::cout<< "Phone Number: "<< contact.getPhoneNumber() << "\n";
				std::cout<< "Darkest Secret: "<< contact.getDarkestSecret() << "\n";
			}

		}
};

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout<<"Enter Command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin,command);

		if(command == "ADD")
			phoneBook.addContact();
		else if (command =="SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else
			std::cout<<"Invalid Command.\n";
	}
	return (0);
}
