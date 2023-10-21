#pragma once

template<class T> 
class TimeStamped : public T 
{
public:
  TimeStamped() 
  { 
	  timeStamp = time(0); 
  }
  long getStamp() 
  { 
	  return timeStamp; 
  }
private:
  long timeStamp;
};

