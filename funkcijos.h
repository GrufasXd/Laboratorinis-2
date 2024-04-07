#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

#include <string>
#include <vector>
#include <functional>
using namespace std;
struct studentas {
    std::string vardas;
    std::string pavarde;
    std::vector<int> nd;
    int egzas;
};
void clearFiles();
void processChunk(vector<studentas>& students, vector<double>& galutrez1, vector<double>& galutrez2, vector<double>& mediang, vector<double>& median1, vector<double>& median2, vector<double>& galutrezg, vector<studentas>& vargsai, vector<studentas>& galva, int rakt, int ilgis);
int partition(vector<studentas>& students, vector<double>& galrez, vector<double>& median, int low, int high, int rusis);
void quickSort(vector<studentas>& students, vector<double>& galrez, vector<double>& median, int low, int high, int rusis);
void studrus(vector<studentas>& students, vector<double>& galrez, vector<double>& median, vector<studentas>& vargsai, vector<studentas>& galva, const string& filename);
void createfile(const std::string& filename, const int& kiekis);
void skaitymas(std::vector<studentas>& students, std::vector<double>& galrez, std::vector<double>& median);
void rasytiranka(std::vector<studentas>& students, std::vector<double>& galrez, std::vector<double>& median);
int readInt(const std::string& prompt);
bool isNumeric(const std::string& str);
bool compareNames(const std::string& a, const std::string& b);
void skaityti(std::vector<studentas>& students, std::vector<double>& galrez, std::vector<double>& median);
void spausdint(const std::vector<studentas>& students, const std::vector<double>& galrez, const std::vector<double>& median);
void spausdintfaila(const std::vector<studentas>& students, const std::vector<double>& galrez, const std::vector<double>& median);
std::string randname();

#endif
