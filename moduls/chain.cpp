// Including
#include "chain.h"

// Filling matricies
//void SUBCHAIN::chain::fillingMatrix()
//{
	//matrix_1 = new bool* [word1.length()];
	//matrix_2 = new int* [word1.length()];
	//for (int i = 0; i < word1.length(); i++) {
		//matrix_1[i] = new bool[word2.length()];
		//matrix_2[i] = new int[word2.length()];
	//}

	//for (int i = 0; i < word1.length(); i++) {
		//for (int j = 0; j < word2.length(); j++) {
			//if (word1[i] == word2[j]) {
				//matrix_1[i][j] = 1;
			//}
			//else {
				//matrix_1[i][j] = 0;
			//}
		//}
	//}

	//for (int i = 0; i < word1.length(); i++) {
		//for (int j = 0; j < word2.length(); j++) {
			//if (matrix_1[i][j]) {
				//matrix_2[i][j] = matrix_2[i - 1][j - 1] + 1;
			//}
			//else {
				//matrix_2[i][j] = max(matrix_2[i - 1][j], matrix_2[i][j - 1]);
			//}
		//}
	//}
//}

// Chain constructor
//SUBCHAIN::chain::chain(string word1, string word2)
//{
	//this->word1 = word1;
	//this->word2 = word2;
	//fillingMatrix();
//}

// First word getter
//string SUBCHAIN::chain::getWord1()
//{
	//return word1;
//}

// Second word getter
//string SUBCHAIN::chain::getWord1()
//{
	//return word2;
//}

// Result getter
//string SUBCHAIN::chain::getSub()
//{
	//return sub;
//}

// First word setter
//void SUBCHAIN::chain::setWord1(string word1)
//{
	//this->word1 = word1;
	//fillingMatrix();
//}

// Second word setter
//void SUBCHAIN::chain::setWord1(string word2)
//{
	//this->word2 = word2;
	//fillingMatrix();
//}
