/**
 * @file Steganography.cpp
 * @author Jason Moss
 * @date 2023-09-13
 * @brief Method definitions for the Steganography class
 *
 * Defines the methods for the Steganography class
 */

#include "Steganography.h"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;


/**
 * helper to get n bit so we can encode it
 *
 * @param char cipherChar the char we are looking at
 * @param int n the place
 * @pre numbers converted to binary
 * @return int bit
 * @post nth bit found
 * 
 */
int Steganography::getNthBit(char cipherChar, int n){}

int Steganography::binary(int num){
  int binaryNumber[10];
  int actualNum = num;
  int i = 0;
  int result = 0;
  string bin;

  if(actualNum == 0){
    binaryNumber[0] = 0;
  }
  while(num > 0){
    binaryNumber[i] = num % 2;
    num = num / 2;
    i++;
  }
  if(actualNum > 0){
    for(int a = i - 1; a >= 0; a--){
      bin.append(to_string(binaryNumber[a]));
    }
  }
  if(actualNum == 0){
    bin.append(to_string(binaryNumber[0]));
  }
  result = stoi(bin);
  return result;
}

int Steganography::decimal(int num){
  string toDecimal = to_string(num);
  int result = 0;
  int actualNum = num;
  if(actualNum == 0){
    result = actualNum;
  }
  if(actualNum > 0){
    
  }
  return result;
}


/**
 * reads image from file
 *
 * @param string fileName valid file name
 * @pre a valid filename is entered
 * @return void 
 * @post variables are set
 * 
 */
void Steganography::readImage(string fileName){}


/**
 * prints image to file
 *
 * @param string fileName valid filename
 * @pre message has been encoded
 * @return void 
 * @post image read to file
 * 
 */
void Steganography::printImage(string fileName){}


/**
 * reads in from file
 *
 * @param string fileName valid filename
 * @pre valid file is entered
 * @return void 
 * @post variables are set
 * 
 */
void Steganography::readCipherText(string fileName){
  ifstream myFile;
  myFile.open(fileName);
  getline(myFile, magicNumber);
  myFile >> height;
  myFile >> width;
  myFile >> maxColor;
  cout << "magic number: " << magicNumber << endl;
  cout << "height: " << height << endl;
  cout << "width: " << width << endl;
  cout << "max color: " << maxColor << endl;
  int lastNum = (height * width) * 3;
  colorData.resize(lastNum);
  cout << colorData.size() << endl;
  for(int i = 0; i < colorData.size(); i++){
     myFile >> colorData[i];
  }

  myFile.close();
}


/**
 * prints ciphertext to file
 *
 * @param string fileName valid file
 * @pre image has been decoded
 * @return void 
 * @post ciphertext of the image has been read to the file
 * 
 */
void Steganography::printCipherText(string fileName){}


/**
 * zeroes out the least significant bit
 *
 * @pre valid file is entered
 * @return void 
 * @post the least significant bit is zeroed out
 * 
 */
void Steganography::cleanImage(){
  for(int i = 0; i < colorData.size(); i++){
    colorData[i] = binary(colorData[i]);
  }
  for(int i = 0; i < colorData.size(); i++){
    if(colorData[i] % 2 == 1){
      colorData[i] = colorData[i] - 1;
    }
  }
}


/**
 * enciphers cipher text into an image
 *
 * @pre valid file is used
 * @return void 
 * @post data is enciphered
 * 
 */
void Steganography::encipher(){}


/**
 * decodes a image to get the ciphertext
 *
 * @pre valid file is used
 * @return void 
 * @post data has been decoded
 * 
 */
void Steganography::decipher(){}

