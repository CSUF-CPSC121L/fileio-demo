#include <iostream>
#include <fstream>

// This function asks the user to type in the name and
// schedule of each volunteer then stores it into a text
// file named volunteer.txt.
// basic_ostream& operator<<(int value);
void CollectAndStoreVolunteers() {

  std::ofstream text_file{"volunteer.txt"};
  std::string choice;
  do {
    int id = 0;
    std::string name;
    std::string schedule;
    std::cout << "Volunteer ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Volunteer name: ";
    std::getline(std::cin, name);
    std::cout << "Schedule: ";
    std::getline(std::cin, schedule);
    std::cout << "Add another volunteer (Y/N)? ";
    std::getline(std::cin, choice);

    text_file.operator<<(id);
    text_file << "\n";
    text_file << name << "\n";
    text_file << schedule << "\n";
  } while (choice == "Y" || choice == "y");
}

// This function loads volunteer information from a
// text file called volunteer.txt and displays them
// on the screen.
void LoadAndDisplayVolunteers() {
  std::ifstream text_file{"volunteer.txt"};
  int id;
  std::string name;
  std::string schedule;
  if (text_file.is_open()) {
    std::cout << "List of volunteers and their schedules:\n";
    while (text_file >> id) {
      // The extraction opertor only gets the number for id, but not the next line character
      // ignore() retrieves the next line character so it does not cause issues with std::getline
      // when std::getline sees a next line character it assumes all inputs are done so it produces
      // an error when we do not use ignore()
      text_file.ignore(); 
      // std::getline retrieves all characters including spaces until it finds a next line character
      std::getline(text_file, name);
      std::getline(text_file, schedule);
      std::cout << "[" << id << "] " << name 
                << " (" << schedule << ")\n";
      
    }
    text_file.close();
  }  
}

int main() {
  CollectAndStoreVolunteers();
  LoadAndDisplayVolunteers();
  return 0;
}
