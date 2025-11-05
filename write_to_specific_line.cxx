#include<iostream>
#include<fstream>
#include<vector>
int main(){
    std::string file_name, new_line_content;
    int write_line_number;

    std::cout << "Enter file name: ";
    std::getline(std::cin, file_name);
    std::cout << "Enter new_line_content: ";
    std::getline(std::cin, new_line_content);
    std::cout << "Enter line numebr: ";
    std::cin >> write_line_number;
    std::cout << std::endl;

    std::ifstream inFile;
    inFile.open("test.txt");
    if(inFile.fail()/*!inFile*/){
        std::cerr << "Failed to open file to read it!!" << std::endl;
        return 1;
    }

    std::vector<std::string> content;
    std::string line;

    while(!inFile.eof()/*getline(inFile, line)*/){// file streams return true/false based on success/failure of I/O operatiron: failure will occur when eof is reached
        getline(inFile, line); //remove this from here if u use the commented part
        content.push_back(line); 
    }

    inFile.close();

    std::ofstream outFile;
    outFile.open("test.txt");
    if(outFile.fail()/*!outFile*/){
        std::cerr << "Failed to open file to write it!!" << std::endl;
        return 1;
    }

    int current_line  = 1;
    bool wrote_to_file = false;

    for(auto file_line : content){
       if(current_line  == write_line_number){
          outFile << new_line_content << std::endl;
          wrote_to_file = true;
       }

        outFile << file_line;

        if(current_line < content.size()){
           outFile << std::endl;
        }

        current_line++;
    }

    if(current_line == write_line_number){
        outFile << std::endl;
        outFile << new_line_content;
        wrote_to_file = true;
    }

    outFile.close();

    if(!wrote_to_file){
        std::cerr << "Failed to write the new line into file" << std::endl;
        return 1;
    }

    return 0;
}

/*
// Better approach
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    string file_name;
    string new_line;
    int write_line_number;

    cout << "Enter file name: ";
    getline(cin, file_name);
    cout << "Enter new_line: ";
    getline(cin, new_line);
    cout << "Enter line numebr: ";
    cin >> write_line_number;
    cout << endl;

    ifstream inFile;
    inFile.open("test.txt");
    if(inFile.fail()){
        cout << "Failed to open file to read it!!" << endl;
        return 1;
    }

    vector<string> content;

    
    string line;

    while(!inFile.eof()){
        getline(inFile, line);
        content.push_back(line);
    }

    inFile.close();

    ofstream outFile;
    outFile.open("test.txt");
    if(outFile.fail()){
        cout << "Failed to open file to write it!!" << endl;
        return 1;
    }

    int current_line  = 1;
    bool wrote_to_file = false;

    for(auto file_line : content){
       if(current_line  = write_line_number){
          outFile << new_line << endl;
          wrote_to_file = true;
       }

        outFile << file_line;

        if(current_line < content.size()){
           outFile << endl;
        }

        current_line++;
    }

    if(current_line == write_line_number){
        outFile << endl;
        outFile << new_line;
        wrote_to_file = true;
    }

    outFile.close();

    if(!wrote_to_file){
        cout << "Failed to write the new line into file" << endl;
        return 1;
    }

    return 0;
}
*/