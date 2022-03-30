#include <iostream>
using namespace std;

#include "3-ListT.h"

int main()
{
  //Initialize a Static list to be tested
  cout << "Static List to test" << endl;
  ListT lst;
  for (int i = 0; i < 5; i++) 
    lst.PutItemH(i);
  lst.Print();
  cout << endl;

  //Initialize a Dynamic list to be tested
  cout << "Dynamic List to test" << endl;
  ListT* lst1 = new ListT;
  for (int i = 0; i < 5; i++)
    lst1->PutItemH(10*i);
  lst1->Print();
  cout << endl;

  // //Test of IsEmpty
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 IsEmpty*****" << endl;
  // cout << "static test" << endl;
  // cout << "Not Empty Test: output should be 1" << endl;
  // cout << lst.IsEmpty();
  // cout << endl;
  // cout << "Empty Test: output should be 0" << endl;
  // ListT lst2;
  // cout << lst2.IsEmpty();
  // cout << endl;
  // cout << "*****Test 2  IsEmpty*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "Not Empty Test: output should be 1" << endl;
  // cout << lst1->IsEmpty();
  // cout << endl;
  // cout << "Empty Test: output should be 0" << endl;
  // ListT* lst3 = new ListT;
  // cout << lst3->IsEmpty();
  // cout << endl;
  // delete lst3;
  // cout << "***************************************" << endl;
  // //End Test of IsEmpty

  // //Test of GetLength
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 GetLength*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be 5" << endl;
  // cout << lst.GetLength();
  // cout << endl;
  // cout << "output should be 6" << endl;
  // lst.PutItemH(1);
  // cout << lst.GetLength();
  // cout << endl;
  // cout << "Empty List Test: output should be 0" << endl;
  // ListT lst2;
  // cout << lst2.GetLength();
  // cout << endl;
  // cout << "*****Test 2  GetLength*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be 5" << endl;
  // cout << lst1->GetLength();
  // cout << endl;
  // cout << "output should be 6" << endl;
  // lst1->PutItemH(1);
  // cout << lst1->GetLength();
  // cout << endl;
  // cout << "Empty List Test: output should be 0" << endl;
  // ListT* lst3 = new ListT;
  // cout << lst3->GetLength();
  // cout << endl;
  // delete lst3;
  // cout << "***************************************" << endl;
  // //End Test of GetLength

  // //Test of PutItemH
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 PutItemH*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be 10 + the rest of the list" << endl;
  // lst.PutItemH(10);
  // lst.Print();
  // cout << "Put in empty list: output should be 1" << endl;
  // ListT lst2;
  // lst2.PutItemH(1);
  // lst2.Print();
  // cout << "*****Test 2  PutItemH*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be 1 + the rest of the list" << endl;
  // lst1->PutItemH(1);
  // lst1->Print();
  // cout << "Put in empty list: output should be 1" << endl;
  // ListT* lst3 = new ListT;;
  // lst3->PutItemH(1);
  // lst3->Print();
  // delete lst3;
  // cout << "***************************************" << endl;
  // //End Test of PutItemH

  // //Test of GetItemH
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 GetItemH*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be the first item in the list" << endl;
  // cout << lst.GetItemH();
  // cout << endl;
  // cout << "*****Test 2  GetItemH*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be the first item in the list" << endl;
  // cout << lst1->GetItemH();
  // cout << endl;
  // cout << "***************************************" << endl;
  // //End Test of GetItemH

  // //Test of DeleteItemH
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 DeleteItemH*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be the list without fist item" << endl;
  // lst.DeleteItemH();
  // lst.Print();
  // cout << "*****Test 2  DeleteItemH*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be the list without fist item" << endl;
  // lst1->DeleteItemH();
  // lst1->Print();
  // cout << "***************************************" << endl;
  // //End Test of GetItemH

  // //Test of PutItemT
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 PutItemT*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be the list + 10" << endl;
  // lst.PutItemT(10);
  // lst.Print();
  // cout << "Put in empty list: output should be 1 then 1,2" << endl;
  // ListT lst2;
  // lst2.PutItemT(1);
  // lst2.Print();
  // cout << endl;
  // lst2.PutItemT(2);
  // lst2.Print();
  // cout << "*****Test 2  PutItemT*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be the list + 1" << endl;
  // lst1->PutItemT(1);
  // lst1->Print();
  // cout << "Put in empty list: output should be 1 then 1,2" << endl;
  // ListT* lst3 = new ListT;;
  // lst3->PutItemT(1);
  // lst3->Print();
  // cout << endl;
  // lst3->PutItemT(2);
  // lst3->Print();
  // delete lst3;
  // cout << "***************************************" << endl;
  // //End Test of PutItemT

  // //Test of GetItemT
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 GetItemT*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be the last item in the list" << endl;
  // cout << lst.GetItemT();
  // cout << endl;
  // cout << "*****Test 2  GetItemT*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be the last item in the list" << endl;
  // cout << lst1->GetItemT();
  // cout << endl;
  // cout << "***************************************" << endl;
  // //End Test of GetItemT

  // //Test of DeleteItemT
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 DeleteItemT*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be the list without last item" << endl;
  // lst.DeleteItemT();
  // lst.Print();
  // cout << "*****Test 2  DeleteItemT*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be the list without last item" << endl;
  // lst1->DeleteItemT();
  // lst1->Print();
  // cout << "***************************************" << endl;
  // //End Test of GetItemT

  // //Test of Print
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 Print*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be the list" << endl;
  // lst.Print();
  // cout << "*****Test 2  Print*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be the list" << endl;
  // lst1->Print();
  // cout << "***************************************" << endl;
  // //End Test of Print

  // // Test of FindItem
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 Find*****" << endl;
  // cout << "static test" << endl;
  // cout << "output should be 1" << endl;
  // cout << lst.FindItem(1) << endl;
  // cout << "output should be 2" << endl;
  // lst.PutItemH(1);
  // cout << lst.FindItem(1) << endl;
  // cout << "output should be 0" << endl;
  // lst.DeleteItem(1);
  // cout << lst.FindItem(1) << endl;
  // cout << "*****Test 2 FindItem*****" << endl;
  // cout << "dynamic test" << endl;
  // cout << "output should be 1" << endl;
  // cout << lst1->FindItem(10) << endl;
  // cout << "output should be 2" << endl;
  // lst1->PutItemH(10);
  // cout << lst1->FindItem(10) << endl;
  // cout << "output should be 0" << endl;
  // lst1->DeleteItem(10);
  // cout << lst1->FindItem(10) << endl;
  // cout << "***************************************" << endl;
  // //End Test of FindItem

  // //Test of DeleteItem
  // cout << "***************************************" << endl;
  // cout << "*****Test 1 DeleteItem*****" << endl;
  // cout << "static test" << endl;
  // // Check for basic function
  // cout << "output should be 1 then the list without any 1s" << endl;
  // cout << lst.DeleteItem(1) << endl;
  // cout << endl;
  // lst.Print();
  // // Check for head delete, multiple deletes in a row, and tail delete
  // cout << "output should be 5 then the following list without any 2s" << endl;
  // lst.PutItemH(2);
  // lst.PutItemH(2);
  // lst.PutItemH(5);
  // lst.PutItemH(2);
  // lst.PutItemT(2);
  // lst.Print();
  // cout << endl << "Output:" << endl;
  // cout << lst.DeleteItem(2) << endl << endl;
  // lst.Print();
  // cout << "*****Test 2  DeleteItem*****" << endl;
  // cout << "dynamic test" << endl;
  // // Check for basic function
  // cout << "output should be 1 then the list without any 10s" << endl;
  // cout << lst1->DeleteItem(10) << endl;
  // cout << endl;
  // lst1->Print();
  // // Check for head delete, multiple deletes in a row, and tail delete
  // cout << "output should be 5 then the following list without any 20s" << endl;
  // lst1->PutItemH(20);
  // lst1->PutItemH(20);
  // lst1->PutItemH(50);
  // lst1->PutItemH(20);
  // lst1->PutItemT(20);
  // lst1->Print();
  // cout << endl << "Output:" << endl;
  // cout << lst1->DeleteItem(20) << endl;
  // cout << endl;
  // lst1->Print();
  // cout << "***************************************" << endl;
  // //End Test of DeleteItem

  delete lst1; //necessary to invoke destructor on dynamic list
  cout << endl;
  return 0;
}
