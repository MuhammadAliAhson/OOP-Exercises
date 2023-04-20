/*
Muhammad Ali Ahson
i21-2535
Section -C
Assignment 04
*/

#include <iostream>
#include "q1.h"
using namespace std;
int main() {
	Library_Mangement_System a;
	Librarian b("ali", 5, "wer");
	a.Register();
	a.login();
	b.Verify_librarian();
	b.add();
	b.Delete();
	b.display();
	b.search();
	b.update();

	return 0;
}
