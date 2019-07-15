#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	char figure, choice;
	const int pi = 3.14;
	double volume, lateralArea, baseArea, surfaceArea, r, h, l, w;
	bool skill = true;

	do
	{
		cout << "----- GEOMETRIC CALCULATOR -----" << endl;
		cout << " Choose a desired figure!!! " << endl;
		cout << " Press 'C' for CONE " << endl;
		cout<< " Press 'S' for SPHERE " << endl;
		cout << " Press 'P' for PYRAMID " << endl;
		cout << " FIGURE : "; 
		cin >> figure;

		if ((figure == 'C') || (figure == 'c') || (figure == 'P') || (figure == 'p') || (figure == 'S') || (figure == 's'))
		{
			skill = false;
		}

		else
		{
			skill = true;
			cout << "\nInvalid Input";
		}

		switch (figure)
		{
			case 'C':
			case 'c':
			{
				cout << "Radius: ";
				cin >> r;
				cout << "Input height: ";
				cin >> h;

				volume = pi * r*r*(h / 3);
				lateralArea = pi * r*(sqrt((h*h) + (r*r)));
				baseArea = pi * r * r;
				surfaceArea = pi * r*(r + sqrt((h * h) + (r*r)));

				cout << "\nVolume of the Cone: " << volume << " cubic units";
				cout << "\nLateral Area of the Cone: " << lateralArea << " squared units";
				cout << "\nBase Area of the Cone: " << baseArea << " squared units";
				cout << "\nSurface Area of the Cone: " << surfaceArea << " squared units";

				break;
			}

			case 'P':
			case 'p':
			{
				cout << "\nInput length: ";
				cin >> l;
				cout << "Input width: ";
				cin >> w;
				cout << "Input height: ";
				cin >> h;

				volume = (l * w * h) / 3;
				lateralArea = (l * (sqrt(((w / 2)*(w / 2)) + h * h))) + (w * (sqrt(((l / 2)*(l / 2)) + h * h)));
				baseArea = l * w;
				surfaceArea = (l * w) + (l * (sqrt(((w / 2)*(w / 2)) + h * h))) + (w * (sqrt(((l / 2)*(l / 2)) + h * h)));

				cout << "\nVolume of the Pyramid: " << volume << " cubic units";
				cout << "\nLateral Area of the Pyramid: " << lateralArea << " squared units";
				cout << "\nBase Area of the Pyramid: " << baseArea << " squared units";
				cout << "\nSurface Area of the Pyramid: " << surfaceArea << " squared units";

				break;
			}

			case 'S':
			case 's':
			{
				cout << "\nInput radius: ";
				cin >> r;

				volume = (4 / 3) * pi * (r * r * r);
				surfaceArea = 4 * pi * (r * r);

				cout << "\nVolume of the Sphere: " << volume << " cubic units";
				cout << "\nSurface Area of the Sphere: " << surfaceArea << " squared units";

				break;
			}

				default:
				cout << "\nYou entered an invalid key! ";
				break;
		}

		cout << "\nDO YOU WANT TO CONTINUE??? " << endl;
		cout << " -------------------------------------- " << endl;
		cout << endl;
		
		cout << " Press 'Y' for YES " << endl;
		cout << " Press 'N' for NO " << endl;
		cout << " -------------------------------------- " << endl;
		cout << endl;
		
		cout << " CONTINUE? : ";
		cin >> choice;
		
		


		switch (choice)
		{
			case 'y':
			case 'Y':
			{
				skill = false;
				break;
			}

			case 'n':
			case 'N':
			{
				skill = true;
				cout << endl;
				cout<< endl;
				break;
			}

			default:
			{
				skill = true;
			}
		}


	} while (!skill);

	_getch();
	return 0;
}
