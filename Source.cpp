/***************************************************************************//**
 * @file 
 * @brief calculates trig functions of user given angles
 *
 * @mainpage prog1 - Trig Calculator
 *
 * @section CSC 150 - Section 3 - 2:00 pm
 *
 * @authors Christian Fattig
 *
 * @date February 27, 2015
 *
 * @par Instructor:
 *         Dr. Qiao
 *
 * @par Course:
 *         CSC 150 - Section 3 - 2:00 pm
 *
 * @par Location:
 *         McLaury - Room 205
 *
 * @section program_section Program Information
 *
 * @details This program will caculate sine, cosine, or tangent of a user given angle in either degrees or radians.
 * the user gives an angle wich is then converted (if needed) to the correct unit and form there is ran through 
 * a trig function math statement. The option to choose what trig function you would like to use is presented
 * in a switch function. From there it outputs the answer in the preferred units along with how much of the other 
 * unit type is needed to recieve the same answer. At this point the program concludes by prompting the user if 
 * he/she would like to re-run the program.
 *
 *
 * @section compile_section Compiling and Usage
 *		None
 *
 *
 * @par Compiling Instructions:
 *      None
 *
 * @par Usage:
   @verbatim
   c:\> prog1.exe
   d:\> c:\bin\prog1.exe
   @endverbatim
 *
 * @section todo_bugs_modification_section Todo, Bugs, and Modifications
 *
 * @bug If you put a non-numerical value for the angle, it will not calculate a result.
 * @bug
 *
 *
 * @par Modifications and Development Timeline:
   @verbatim
   Date          Modification
   ------------  ---------------------------------------------------------------
   Feb 11, 2015  Produced a flowchart.
   Feb 13, 2015  All variables declared. All menues, decision inputs, and at least angle input conversion done.
   Feb 20, 2015  Trig calculations work. Error checking loops and main loops implemented.
   Feb 24, 2015  All doxyegen comments completed. 
   Feb 27, 2015  Program completion.
   @endverbatim
 *
 ******************************************************************************/

#include<iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include<cmath>
#include<math.h>
using namespace std;

int main()
{
	/*******************************************************************************
 *             Constant Variables, defines and Enums
 ******************************************************************************/
	cout << setprecision(4) << fixed << showpoint;
	char choice; // variable for the angle type  
	char choice3; // variable for deciding wether or not the user wants to re-run the program ( y/n )

	//This is the opening paragraph asking the user for the unit type they would prefer.
	cout << "Trig function calculator. Enter an angle in degrees or in radians,";
	cout <<	" then choose the function to evaluate." << endl;
	cout << endl;

	
	do// this loop is being used to re-run the whole program if the user selects yes at the end.
	{
		cout << "Enter the type of angle measure, then the angle." << endl;
		cout << "Angle Type? D - degrees: , R - radians: ";
	

		do//used to run the program if a correct unit type is given
		{
			cin >> choice;

			if( choice == 'd' || choice == 'D' )//used if degrees is preferred unit type
			{
				double angle = 0.0;// variable describing the user given angle
				double angle2 = 0.0;// varaible describing the user given angle converted to degrees
				char choice2;// variable describing the trig function to be used
				double answer1 = 0.0;//variable desbribing the answer for the trig function given in degrees
				double answer2 = 0.0;//variable for how many radians are need to get the answer provided in degrees
		
				cout<<"Angle: ";
				cin >> angle;
				angle2 = angle * (M_PI/180);//converting radians to degrees
				cout << endl;
				cout << "Choose a trig function." << endl << "S - Sine" << endl;
				cout << "C - Cosine" << endl << "T - Tangent" << endl << "Your choice: ";

				do//used to re-prompt if an invalid trig function type is selected.
				{
				cin >> choice2;

				}while(choice2 != 's' && choice2 != 'S' && choice2 != 'c' && choice2 != 'C' && choice2 != 't' && choice2 != 'T');

				switch(choice2)//used to determine which trig function is selected and used.
				{
					case 's'://case for sine
						answer1 = sin(angle2);
						answer2 = angle * (M_PI/180.0);
						cout << "The sine of " << angle << " degrees is " << answer1 << "." << endl;
						cout << "The sine of " << answer2 << " radians is " << answer1 << "." << endl;
						break;
					case 'S'://case for sine
						answer1 = sin(angle2);
						answer2 = angle * (M_PI/180.0);
						cout << "The sine of " << angle << " degrees is " << answer1 << "." << endl;
						cout << "The sine of " << answer2 << " radians is " << answer1 << "." << endl;
						break;
					case 'c'://case for cosine
						answer1 = cos(angle2);
						answer2 = angle * (M_PI/180.0);
						cout << "The cosine of " << angle << " degrees is " << answer1 << "." << endl;
						cout << "The cosine of " << answer2 << " radians is " << answer1 << "." << endl;
						break;
					case 'C'://case for cosine
						answer1 = cos(angle2);
						answer2 = angle * (M_PI/180.0);
						cout << "The cosine of " << angle << " degrees is " << answer1 << "." << endl;
						cout << "The cosine of " << answer2 << " radians is " << answer1 << "." << endl;
						break;
					case 't'://case for tangent
						//used to display error message if an invalid tangent angle is given. 
						if(angle == 90.0 || angle == -90 || angle == 270 || angle == -270)
							cout << "Angle is invalid for tangent function" << endl;
						else
						{
						answer1 = tan(angle2);
						answer2 = angle * (M_PI/180.0);
						cout << "The tangent of " << angle << " degrees is " << answer1 << "." << endl;
						cout << "The tangent of " << answer2 << " radians is " << answer1 << "." << endl;
						}
						break;
					case 'T'://case for tangent
						//used to display error message if an invalid tangent angle is given. 
						if(angle == 90.0 || angle == -90 || angle == 270 || angle == -270)
							cout << "Angle is invalid for tangent function" << endl;
						else
						{
						answer1 = tan(angle2);
						answer2 = angle * (M_PI/180.0);
						cout << "The tangent of " << angle << " degrees is " << answer1 << "." << endl;
						cout << "The tangent of " << answer2 << " radians is " << answer1 << "." << endl;
						}
						break;

				}
		
		
			}
			if( choice == 'r' || choice == 'R')//used if radians are preferred unit type
			{
				double angle = 0.0;// variable describing the user given angle
				char choice2;// variable describing the trig function to be used
				double answer1 = 0.0;//variable desbribing the answer for the trig function given in radians
				double answer2 = 0.0;//variable for how many degrees are need to get the answer provided in radians
				cout<<"Angle: ";
				cin >> angle;
				cout << endl;
				cout << "Choose a trig function." << endl << "S - Sine" << endl << "C - Cosine" << endl << "T - Tangent" << endl << "Your choice: ";
				
				do//used to re-prompt if an invalid trig function type is selected.
				{
				cin >> choice2;

				}while(choice2 != 's' && choice2 != 'S' && choice2 != 'c' && choice2 != 'C' && choice2 != 't' && choice2 != 'T');

				switch(choice2)//used to determine which trig function is selected and used.
				{
					case 's'://case for sine
						answer1 = sin(angle);
						answer2 = angle / (M_PI/180.0);
						cout << "The sine of " << angle << " radians is " << answer1 << "." << endl;
						cout << "The sine of " << answer2 << " degrees is " << answer1 << "." << endl;
						break;
					case 'S'://case for sine
						answer1 = sin(angle);
						answer2 = angle / (M_PI/180.0);
						cout << "The sine of " << angle << " radians is " << answer1 << "." << endl;
						cout << "The sine of " << answer2 << " degrees is " << answer1 << "." << endl;
						break;
					case 'c'://case for cosine
						answer1 = cos(angle);
						answer2 = angle / (M_PI/180.0);
						cout << "The cosine of " << angle << " radians is " << answer1 << "." << endl;
						cout << "The cosine of " << answer2 << " degrees is " << answer1 << "." << endl;
						break;
					case 'C'://case for cosine
						answer1 = cos(angle);
						answer2 = angle / (M_PI/180.0);
						cout << "The cosine of " << angle << " radians is " << answer1 << "." << endl;
						cout << "The cosine of " << answer2 << " degrees is " << answer1 << "." << endl;
						break;
					case 't'://case for tangent
						//used to display error message if an invalid tangent angle is given.
						if(angle == 1.5708 || angle == -1.5708 || angle == 4.7124 || angle == -4.7124)
							cout << "Angle is invalid for tangent function" << endl;
						else
						{
								answer1 = tan(angle);
						answer2 = angle / (M_PI/180.0);
						cout << "The tangent of " << angle << " radians is " << answer1 << "." << endl;
						cout << "The tangent of " << answer2 << " degrees is " << answer1 << "." << endl;
						}
						break;
					case 'T'://case for tangent
						//used to display error message if an invalid tangent angle is given.
						if(angle == 1.5708 || angle == -1.5708 || angle == 4.7124 || angle == -4.7124)
							cout << "Angle is invalid for tangent function" << endl;
						else
						{
						answer1 = tan(angle);
						answer2 = angle / (M_PI/180.0);
						cout << "The tangent of " << angle << " radians is " << answer1 << "." << endl;
						cout << "The tangent of " << answer2 << " degrees is " << answer1 << "." << endl;
						}
						break;

				}

			}

			// used to re-prompt if an invalid angle type is given.
			if(choice != 'd' && choice != 'D' && choice != 'r' && choice != 'R' )
			{
				cout << "Error!" << endl << "Angle Type? D - degrees: , R - radians: " << endl;
			}
		}while(choice != 'd' && choice != 'D' && choice != 'r' && choice != 'R' );

		cout << endl << "Do another? y/n: ";

		do//re-prompts if an invalid option is given for if the user wants to re-run the program.
		{
			cin >> choice3;
		}while(choice3 != 'y' && choice3 != 'Y' && choice3 != 'n' && choice3 != 'N');

	}while(choice3 == 'y' || choice3 == 'Y');
	return 0;
}