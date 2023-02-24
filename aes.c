#import "aes.h"

// Define a function for encrypting AES
void AESEncrypt(uint8_t ciphertext[DATA_SIZE], uint8_t plaintext[DATA_SIZE], uint8_t key[DATA_SIZE])
{

}

//Define a function for 
void AddRoundKey(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t roundkey[STATE_ROW_SIZE][STATE_COL_SIZE]);
{

}

//Define a function for 
void SubBytes(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
{

}

//Define a function for 
void ShiftRows(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
{

}

//Define a function for Mix Columns
void MixColumns(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
{

}

// Define a function for generating key
void KeyGen(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t master_key[STATE_ROW_SIZE][STATE_COL_SIZE]);
{
}
///////// in ta inja Feb 14th












void AESEncrypt(uint8_t ciphertext[DATA_SIZE], uint8_t plaintext[DATA_SIZE], uint8_t key[DATA_SIZE]);

void AddRoundKey(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t roundkey[STATE_ROW_SIZE][STATE_COL_SIZE]);
void SubBytes(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
void ShiftRows(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
void MixColumns(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
void KeyGen(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t master_key[STATE_ROW_SIZE][STATE_COL_SIZE]);
// fill the first column of a given round key
void ColumnFill(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], int round);
// fill the other 3 columns of a given round key
void OtherColumnsFill(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], int round);
void GetRoundKey(uint8_t roundkey[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], int round);
void MessageToState(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t message[DATA_SIZE]);
void StateToMessage(uint8_t message[DATA_SIZE], uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
void MCMatrixColumnProduct(uint8_t colonne[STATE_COL_SIZE]);


// void AddRoundKey(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t roundkey[STATE_ROW_SIZE][STATE_COL_SIZE]);
// void SubBytes(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
// void ShiftRows(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
// void MixColumns(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
// void KeyGen(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t master_key[STATE_ROW_SIZE][STATE_COL_SIZE]);
// // fill the first column of a given round key
// void ColumnFill(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], int round);
// // fill the other 3 columns of a given round key
// void OtherColumnsFill(uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], int round);
// void GetRoundKey(uint8_t roundkey[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t roundkeys[][STATE_ROW_SIZE][STATE_COL_SIZE], int round);
// void MessageToState(uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE], uint8_t message[DATA_SIZE]);
// void StateToMessage(uint8_t message[DATA_SIZE], uint8_t state[STATE_ROW_SIZE][STATE_COL_SIZE]);
// void MCMatrixColumnProduct(uint8_t colonne[STATE_COL_SIZE]);