#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream input;

	input.open("names_and_ids.txt");

	string name1, name2, name3, id1, id2, id3;


	input >> id3 >> id2 >> id1 >> name3 >> name2 >> name1;

	cout << name1 << name2 << name3 << id1 << id2 << id3;

	input.close();






}
