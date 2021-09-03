#include <iostream>
using namespace std;

char *author[7] = {"Linus Torvalds", "Larry Page", "Alan Touring", "Ada Lovelace", "Steve Wozniak", "Luke Smith", "me"};
char *intro[6] = {"all", "no", "every", "most", "a lot of", "few"};
char *noun[6] = {"life", "prize", "yourself", "you", "struggle", "love"};
char *adjective[10] = {"happy", "sad", "good", "bad", "exciting", "boring", "okay", "not okay", "slowly", "quickly"};
char *verb[8] = {"love", "see", "feel", "are", "learn", "live", "die", "think"};

int main() {
	int word1 = rand()% 5;
	int word2 = rand() % 5;
	int word3 = rand() % 9;
	int word4 = rand() % 7;
	int word5 = rand() % 6;
	cout << intro[word1] << " " << noun[word2] << " is " << adjective[word3] << " to " << verb[word4] << "\n- " << author[word5] << "\n";
	return 0;
}
