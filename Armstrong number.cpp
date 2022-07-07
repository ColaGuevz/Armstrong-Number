#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num);

int main()
{
    int lowerBound = 1;
    int upperBound = 1000;

    cout<<"\n";
    for(int index = lowerBound; index <= upperBound; index++)
    {
        if(isArmstrong(index))//condition if index is Armstrong or not
            cout<<index<<" is an Armstrong number!"<<endl;
    }

}

bool isArmstrong(int num)
{
    bool isArmstrong = false;
    int input = num;//temp storage for comparing later
    int temp = num;//temp storage to extract digits
    int ctr = 0;//digit counter; this will become the size of our array

    while(temp != 0)//getting the size of the array of digits
    {
        temp /= 10;
        ctr++;
    }

    int s = ctr;
    int arr[ctr];

    while(num != 0)//storing digits to array
    {
        arr[--ctr] = num % 10;
        num /= 10;
    }

    int power;
    int sum = 0;
    for(int i = 0; i < s; i++)
    {
        power = pow(arr[i] , 3);//raising the digits power to 3
        sum = sum + power;//adding the raised digits
    }

    if(sum == input)//comparing the sum or raised digits to the original input
    {
        isArmstrong = true;
    }

    return isArmstrong;
}
