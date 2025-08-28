// Read and Write to a file

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

void write()
{
  std::string text;
  std::cout << "What do you want to enter: ";
  std::getline(std::cin, text);

  std::ofstream outFile("example.txt");

  if (outFile.is_open())
  {
    outFile << text;
    outFile.close();
    std::cout << "File written successfully\n";
  }
  else
  {
    std::cout << "Error: Could not open file for writing\n";
  }
}

void read()
{
  std::ifstream inFile("example.txt");

  if (inFile.is_open())
  {
    std::string line;
    bool hasContent = false;

    while (getline(inFile, line))
    {
      std::cout << line << "\n";
      hasContent = true;
    }

    if (!hasContent)
    {
      std::cout << "File is empty\n";
    }

    inFile.close();
  }
  else
  {
    std::cout << "Error: Could not open file for reading\n";
  }
}

int main()
{
  int choice;
  std::cout << "Enter 1 for write or 2 for read: ";
  std::cin >> choice;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer

  if (choice == 1)
  {
    write();
  }
  else if (choice == 2)
  {
    read();
  }
  else
  {
    std::cout << "Invalid choice.\n";
  }
  return 0;
}