#include <iostream>
using namespace std;

char *author[6] = {"Linus Torvalds", "Larry Page", "Alan Touring", "Ada Lovelace", "Steve Wozniak", "Luke Smith"};
char *intro[6] = {"all", "no", "every", "most", "a lot of", "few"};
char *noun[6] = {"life", "prize", "yourself", "you", "struggle", "love"};
char *adjective[10] = {"happy", "sad", "good", "bad", "exciting", "boring", "okay", "not okay", "slowly", "quickly"};
char *verb[8] = {"love", "see", "feel", "are", "learn", "live", "die", "think"};

int main() {
	//int word1, word2, word3, word4, word5;
	int word1 = rand()% 6;
	int word2 = rand() % 6;
	int word3 = rand() % 10;
	int word4 = rand() % 8;
	int word5 = rand() % 6;
	cout << intro[word1] << " " << noun[word2] << " is " << adjective[word3] << " to " << verb[word4] << "\n- " << author[word5];
	return 0;
}
