#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum Options {
	open = 3,
	close,
	wait = 5,
	del
};

struct Folder {
	int weight;
	string name;
	Options options;
};

int main() {
	setlocale(LC_ALL, "RU");

	Folder my_folder;
	my_folder.weight = 2.5f;
	my_folder.name = "Elezthcord.py";
	my_folder.options = Options::close;

	// cout << my_folder.options;
	if (my_folder.options == Options::close)
		cout << "Folder is close" << endl;

	return 0;
}