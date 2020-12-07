#include <iostream>
#include <random>


using namespace std;


void OneQuestion(int num)
{


	for (int i = 0; i <= num; i++)

		if (i % 3 == false)/* && i % 5 == false)*/
		{
			std::cout << i << ": NEXT; BOOT HILL. " << std::endl;
		}
		else if (i % 5 == false)
		{
			std::cout << i << ": HOG KILLING TIME. " << std::endl;
		}
		else if (i % 3 == false)
		{
			std::cout << i << ": B I G   I R O N. " << std::endl;
		}
		else if (i % num == false)
		{
			std::cout << i << ": you are incorrect " << std::endl;
		}


}

void BigIron(int num)
{


	for (int i = 0; i <= num; i++)
	
		if (i % 3 == false)/* && i % 5 == false)*/
		{
			std::cout << i << ": NEXT; BOOT HILL. " << std::endl;
		}
		else if (i %  1 == false)
		{
			std::cout << i << ": HOG KILLING TIME. " << std::endl;
		}

		//else if (i % 3 == false)
		//{
		//	std::cout << i << ": B I G   I R O N. " << std::endl;
		//}
		
	
}

void random(int num)
{
	random_device rd;
	for (int i = num; i < 0; i++)
	{
		if (i)
		{
			std::cout << "Please type a number5: ";		/* num << std::endl;*/
			std::cin >> num;

			OneQuestion(num);

			system("pause");
		}
		//1
		//=================================================

		std::cout << "Please type a number2: ";		/* num << std::endl;*/
		std::cin >> num;

		BigIron(num);
	}
}



int main()
{   //This is the same as "Console.Write();
	int num = 0;
	
	
	//system("pause");
	random(num);


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