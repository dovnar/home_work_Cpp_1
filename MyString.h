#pragma once

#include <iostream>

class MyString
{
	static const int maxLen = 100;
	int length;
	char* string;
public:
	MyString();
	explicit MyString(const char*);
	explicit MyString(const int);
	MyString(const char*, const int);
	MyString(const MyString&);
	MyString& operator=(const MyString&);
	~MyString();

	const int getLength() const;
	const char* getString() const;

	MyString operator+(const MyString&);
	// TODO: operator+ для char* и MyString
	// TODO: operator++ и operator--
	friend bool operator==(const MyString&, const MyString&);
	// TODO: operator!=

	char& operator[](const int index);
	// TODO: operator()

	// TODO: преобразование к char*

	friend std::ostream& operator<<(std::ostream&, const MyString&);
	// TODO: operator>>

	// TODO: operator*
};
