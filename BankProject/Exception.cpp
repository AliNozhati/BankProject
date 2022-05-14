#include "Exception.h"
using namespace System::Windows::Forms;
using System::String;

Exception::Exception(string str) { _errorSentence = str; } // constructor
string Exception::show() const { return _errorSentence; } // show exception
