#include <iostream>
using namespace std;

 
int
main ()
{
  
string usrtxt;
  
cout << "Enter string needing 'A' removal: ";
  
getline (cin, usrtxt);
  
 
for (int i = 0; i < usrtxt.size (); ++i)
    
    {
      
if (!
	   ((usrtxt[i] >= 'b' && usrtxt[i] <= 'z')
	    || (usrtxt[i] >= 'B' && usrtxt[i] <= 'Z'
		|| (usrtxt[i] >= '1' && usrtxt[i] <= '9'))))
	
	{
	  
usrtxt[i] = '\0';
	
}
    
}
  
cout << "Output String: " << usrtxt;
  
return 0;

}
