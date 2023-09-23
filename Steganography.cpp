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

int getNthBit(char cipherChar, int n){}

void Steganography::readImage(string fileName){}

void Steganography::printImage(string fileName){}

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
  for(int i = 0; i < colorData.size(); i++){
    cout << colorData[i] << endl;
  }
  cout << colorData[4];
  cout << colorData.size() << "sup" << endl;;

  //hello there
  //this is a test
  int num1 = 4;
  int num2 = 15;
}

void Steganography::printCipherText(string fileName){}

void Steganography::cleanImage(){
  //before this, find out how to convert numbers to binary
   for(int i = 0; i < colorData.size(); i++){
    if(colorData[i] % 2 == 1){
      colorData[i] = colorData[i] - 1;
    }
  }
}

void Steganography::encipher(){}

void Steganography::decipher(){}

