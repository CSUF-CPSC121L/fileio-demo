#include <iostream>
#include <fstream>

// This function asks the user to type in the name and
// schedule of each volunteer then stores it into a text
// file named volunteer.txt.
// basic_ostream& operator<<(int value);
void CollectAndStoreVolunteers() {

  // TODO: Provide code to open a file called "volunteer.txt" for writing
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

    // TODO: Provide code to store data into the text file
  } while (choice == "Y" || choice == "y");
}

// This function loads volunteer information from a
// text file called volunteer.txt and displays them
// on the screen.
void LoadAndDisplayVolunteers() {
  // TODO: Provide code to open a stream to a file called "volunteer.txt" for reading
  // TODO: Provide code to read information from the file and display it on the screen
}

int main() {
  CollectAndStoreVolunteers();
  return 0;
}
