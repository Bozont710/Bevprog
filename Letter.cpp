#include "std_lib_facilities.h"

int main()

{

	cout << "Enter the name of the person you want to write to:\n";
			string first_name;
				cin >> first_name;
	
	cout << "Enter the name of a mutual friend:\n";
			string friend_name;
				cin >> friend_name;			
	
	cout << "Enter the gender of said friend (m/f):\n";
			char friend_sex = '0';
				cin >> friend_sex;

	cout << "Enter your friends age:\n";
			int age;
				cin >> age;



	cout << "Hello, " << first_name << "\n \n";
	cout << "How are you doing? I'm fine, a little tired but always cheerful as usual.\n";
	cout << "Have you seen " << friend_name << " lately?\n";

				if (friend_sex == 'm')
				{
	cout << "If you see " << friend_name << " Please tell him to call me\n";
	}

				if (friend_sex == 'f')
				{	
	cout << "If you see " << friend_name << " Please tell her to call me.\n";
	}

	cout << "I Hear you just had a birthday and you are " << age << " years old.\n";

				if (age <= 0)
				{	
	simple_error ("you're kidding!\n");
	}

				if (age >= 110)
				{
	simple_error ("you're kidding!\n");
	}

				if (age < 12)
				{	
	cout << "Next year you will be " << age+1 << ".\n";
	}
		
				else if (age == 17)
				{	
	cout << "Next year you will be able to vote.\n";
	}

				else if (age >= 70)
				{	
	cout << "I hope you are enjoying retirement!\n";
	}

				if (age > 18)
				{
	cout << "We should grab a drink sometime!\n";
	}


	cout << "Yours sincerely \n \n";

	cout << "Barna\n";




	return 0;


}