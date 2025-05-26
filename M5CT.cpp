#include <iostream> 
#include <fstream>  // For file stream operations (e.g., ifstream, ofstream)
#include <string>   // For string manipulation

using namespace std;

int main()
{
    string userInput;      // A string variable to store user input
    ofstream outputFile1;  // An output file stream object for the first file
    ifstream inputFile;    // An input file stream object
    ofstream outputFile2;  // An output file stream object for the second file
    string line;           // A string variable to store each line read from the input file
    string reversedLine;   // A string variable to store the reversed line

    cout << "Please enter the text you want to add to the file:" << endl; // Prompt the user to enter text
    getline(cin, userInput); // Read a line of text from the console and stores it in userInput

    outputFile1.open("CSC450_CT5_mod5.txt", ios::app); // Open the first file in append mode

    if (!outputFile1) // Check if the first output file failed to open
    {
        cout << "Error: Could not open CSC450_CT5_mod5.txt for appending." << endl; // Print an error message if first output file failed to open
        return 1; // Return an error code if first output file failed to open
    }

    outputFile1 << userInput << endl; // Write the user input to the first file

    outputFile1.close(); // Close the first output file
    cout << "User input appended to CSC450_CT5_mod5.txt." << endl; // Confirm that input was appended

    inputFile.open("CSC450_CT5_mod5.txt"); // Open the first file for reading

    if (!inputFile) // Check if the input file failed to open
    {
        cout << "Error: Could not open CSC450_CT5_mod5.txt for reading." << endl; // Print an error message
        return 1; // Return an error code
    }

    outputFile2.open("CSC450-mod5-reverse.txt"); // Open the second file for writing

    if (!outputFile2) // Check if the second output file failed to open
    {
        cout << "Error: Could not open CSC450-mod5-reverse.txt for writing." << endl; // Print an error message
        inputFile.close(); // Close the input file before exiting
        return 1; // Return an error code
    }

    while (getline(inputFile, line)) // Read each line from the input file until the end
    {
        reversedLine = ""; // Reset the reversedLine for each new line

        for (int i = line.length() - 1; i >= 0; --i) // Loop through the current line from end to beginning
        {
            reversedLine += line[i]; // Append each character to reversedLine, effectively reversing it
        }

        outputFile2 << reversedLine << endl; // Write the reversed line to the second output file
    }

    inputFile.close(); // Close the input file
    outputFile2.close(); // Close the second output file

    cout << "Content from CSC450_CT5_mod5.txt read, reversed line by line, and stored in CSC450-mod5-reverse.txt." << endl; // Confirms the reversal and storage operation

    // Program pause
    cout << "\nPress 'Enter' key to end program." << endl;
    cin.get();
    return 0; // Indicate successful program execution
}