/*
int main(){
    int a = 10;
    int b = 45;
    int sum = a + b;
    int* ptra = &a;
    int* ptrb = &b;
    int sum2 = *ptra + *ptrb;

    cout << sum << endl;
    cout << &sum2 << endl;
return 0;
}





int main(){
    int arr [5]= {10,11,12,13,14};
    int *ptr = arr;
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        //sum = sum + arr[i];
        sum = sum + *(ptr + i);
    }

    cout << sum << endl;

return 0;
}








int main()
{
    string tekst("aLA ma KOta");
    for (char& znak : tekst)
  return 0; 
}


void tekst (char* wektor); 
int main()
{
  tekst("aLA ma KOta");
  return 0; 
} 

void tekst (char* wektor){ 
}




void tekst(char* arr)
{ 
    while(*arr)
{
        *arr = tolower(*arr);
        ++arr;
}

}

int main()
{

char*arr = "aLA ma KOta";
tekst(arr);

    cout << endl;
return 0;
}
*/


/*

void lower_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	cout<<str;
}

void upper_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	cout<<"\n"<< str;
}

int main()
{
	string str = ("aLA ma KOta");
    lower_string(str);
	upper_string(str);
	return 0;
}




int licz(int* k){  // argument funkcji to wskaŸnik
    int kwadrat=(*k)*(*k);
    return kwadrat;
}

int main()
{
    int a = 59;
    int* ptra = &a;
    cout << licz(ptra); // wypisujemy funcje która zwraca kwadrat
    return 0;
}



int x = 6;

int main() {

    for(int i = 0; i < 600; i++) {

    x += 6;

    cout << x << endl;
}
    return 0;
}
*/
