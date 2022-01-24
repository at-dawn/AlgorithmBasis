// TestTemp.cpp
#include "CArray.h"

template <class T>
TestTemp<T>::TestTemp()
{
}


// No need to call this TemporaryFunction() function,
// it's just to avoid link error.
void TemporaryFunction()
{
    TestTemp<int> TempObj;

    TestTemp<int32_t> TempObj2;

}

//
//#include "CArray.h"
//
//template<typename T>
// CArray<T>::CArray()
//{
//}
//
//void TemporaryFunction()
//{
//    CArray<int> TempObj;
//
//    CArray<int32_t> TempObj2;
//
//}