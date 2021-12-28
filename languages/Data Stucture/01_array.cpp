#include <iostream>
using namespace std;

void input(int*p, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element "<< i+1 <<" : ";
        cin>>p[i];
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
};
void output(int*p, int n){
    cout<<"The array is :"<<"[ ";
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<" ]";
    cout<<endl;
    cout<<endl;
    cout<<endl;
};
void search(int*p,int searchkey,int n){
    for (int i = 0; i < n; i++)
    {
        if(p[i]==searchkey){
            cout<<"The number "<< searchkey << " is at "<<++i<<"th place "<<endl;
            break;
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
};
void Del(int*p, int key,int n){

    key=key-1;
    if (key<0||key>n)
    {
        cout<<"Invalid input please give positon b/w 0 to "<<n<<" ";
    }
    else{
        for (int i = key; i < n; i++)
        {
          p[i]=p[i+1];  
        }
        
    }
    p[n-1]=0;
    

}
int insert(int *p, int key,int n){
    p[n-1] = key;
    
};

int main()
{
    int element[20];
    int n, ch,searchkey,key,insertkey;

    while (1)
    {
        cout << "1 Input elements" << endl;
        cout << "2 Output elements" << endl;
        cout << "3 search a elements" << endl;
        cout << "4 Delete the elements" << endl;
        cout << "5 insert the elements" << endl;
        cout << "6 exit" << endl;
        cout << "Enter your choise: ";
        cin >> ch;
        if (ch == 6)
        {
            break;
        }
        switch (ch)
        {
        case 1:
            cout << "Choose how many element you want: ";
            cin >> n;
            input(element, n);

            break;
        case 2:
            output(element, n);
            break;
        case 3:
            cout<<"Enter the number that has to be search: ";
            cin>>searchkey;
            search(element, searchkey,n);
            break;
        case 4:
        cout<<"Enter the position of the number that has to be deleted: ";
        cin>>key;
            Del(element, key,n);
            break;
        case 5:
            cout<<"Enter the number that has to be inserted at last : ";
            cin>>insertkey;
            insert(element, insertkey,n);
            break;
        }
    }
    return 0;
}
