#include <string>
#include <ctime>
#include <iostream>
using namespace std;
#include "timestamp.h"
#include "serialnumber.h"

void main() 
{
  TimeStamped< SerialNumbered< string > > mixin1;
  ::_sleep(1000);
  TimeStamped< SerialNumbered< string > > mixin2;

  mixin1.append( "test string 1" ); // A string method
  mixin2.append( "test string 2" );

  cout << mixin1 << " " << mixin1.getStamp() << " " <<
    mixin1.getSerialNumber() << endl;

  cout << mixin2 << " " << mixin2.getStamp() << " " <<
    mixin2.getSerialNumber() << endl;
} 