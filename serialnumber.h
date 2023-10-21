#pragma once

template<class T> 
class SerialNumbered : public T 
{
public:
  SerialNumbered() 
  { 
	  serialNumber = ++counter; 
  }
  long getSerialNumber() 
  {
	  return serialNumber; 
  }
private:
  long serialNumber;
  static long counter;
};

// Define and initialize the static storage:
template<class T> 
long SerialNumbered<T>::counter = 1;

