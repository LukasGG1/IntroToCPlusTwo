#include <iostream>

void BigIron(int num)
{
	for (int i = 0; i <= num; i++)
	
		if (i % 3 == false && i % 5 == false)
		{
			std::cout << i << ": NEXT; BOOT HILL. " << std::endl;
		}
		else if (i % 5 == true)
		{
			std::cout << i << ": HOG KILLING TIME. " << std::endl;
		}
		else if (i % 3 == true)
		{
			std::cout << i << ": B I G   I R O N. " << std::endl;
		}
	
}

int main()
{   //This is the same as "Console.Write();
	int num = 0;
	std::cout << "Please type a number: ";		/* num << std::endl;*/
	std::cin >> num;

	BigIron(num);


	//std::cout << num << std::endl;

	/*std::cout << "NEXT: BOOT HILL.  HOG KILLING TIME.  NEXT: BOOT HILL. HOG KILLING TIME. NEXT: BOOT HILL. " << std::endl;
	*/
	/*int i = 1;
	while (i <= 100)
		i++;*/

	//for (int i = 1; i <= 100, i++)
		//std::cout

	/*system("pause");
	
	std::cout << "YEEHAW.  " << std::endl;*/

	system("pause");

	return 1;
}