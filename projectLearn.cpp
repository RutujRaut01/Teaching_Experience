#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 
class learn
{
    string fname;
    string fullname;
    int marks;
    char grade;
    char choice;
    char arr1[10];
    char arr2[10];
    public : 
    void getName(string n)
    {
        fname=n;
    }
    void theorey()
    {
        string none;
        cout<<endl<<endl<<"* Hi "<<fname<<" ! Let's break down the concept of recursion. ";
        cout<<endl<<endl<<"  1. Understanding the Idea: "<<endl<<"  Recursion is a way of solving problems where a function calls itself to solve smaller instances of the same problem.";
        cout<<endl<<endl<<"Press 'y' to proceed or 'n' if you'd like the theory explained again : ";
        cin>>choice;
        if(choice=='n' || choice =='N')
        {
            cout<<endl<<endl<<"Following is Simplication : "<<endl<<"Imagine you have a big puzzle to solve, but it's too complicated to solve all at once.";
            cout<<endl<<"Recursion is like having a magic instruction that says, If the puzzle is too big, solve a smaller version of the same puzzle.";
            cout<<endl<<"So, instead of trying to solve the whole puzzle in one go, you take a small piece out of it and use the same magic instruction to solve that smaller piece.";
            cout<<endl<<"If that smaller piece is still too big, you use the magic instruction again to solve an even tinier piece.";
            cout<<endl<<"You keep doing this until the pieces are so small and easy that you can solve them without any magic.";
            cout<<endl<<"In computer terms, this magic instruction is like a special rule in a computer program that tells the computer to do a smaller version of the same task. ";
            cout<<endl<<"This helps to break down big problems into much simpler ones, making them easier to solve! ";
            cout<<endl<<endl<<"Hope you have understood ! :)"<<endl<<"Enter any character to continue : ";
            cin>>none;

        }
        cout<<endl<<endl<<endl<<"  2. Base Case : "<<endl;
        cout<<"Every recursive function needs a base case to avoid infinite calls. The base case is the simplest scenario where the function doesn't call itself.";
        cout<<endl<<endl<<"Press 'y' to proceed or 'n' if you'd like the theory explained again : ";
        cin>>choice;
        if(choice=='n' || choice =='N')
        {
            cout<<endl<<endl<<"Sure! Imagine you have a special set of instructions that tell you to do something over and over again.";
            cout<<endl<<"The base case is like a rule that says,Okay, stop doing it now.";
            cout<<endl<<"It's the simplest situation where you don't need to follow the instructions anymore.";
            cout<<endl<<" Without this rule, you might keep doing the same thing forever, like going in circles.";
            cout<<endl<<"The base case helps prevent that and lets you know when it's time to stop using the instructions.";
            cout<<endl<<endl<<"Hope you have understood example ! :)"<<endl<<"Press anything to continue : ";
            cin>>none;
        }

        cout<<endl<<endl<<endl<<"  3. Example: Factorial: "<<endl;
        cout<<endl<<"Another classic example is calculating the factorial of a number."<<endl;
        cout << "#include<iostream>\n"
              << "using namespace std;\n"
              << "int factorial(int n) {\n"
              << "    if (n == 0 || n == 1) {\n"
              << "        return 1;\n"
              << "    } else {\n"
              << "        return n * factorial(n - 1);\n"
              << "    }\n"
              << "}\n\n"
              << "int main() {\n"
              << "    int result = factorial(5);\n"
              << "    cout << result << endl;\n"
              << "    return 0;\n"
              << "}\n\n";
            cout << "4. Explanation:\n"
              << "The base case is when n is 0 or 1, where we directly return 1.\n"
              << "Otherwise, we make a recursive call with a smaller number (n - 1) and multiply it by the current number (n).\n";
            cout<<endl<<endl<<"Hope you have understood example ! :)"<<endl<<"Enter any character to continue : ";
            cin>>none;
            cout <<endl<<endl<< "5. Key Takeaways:\n\n"
                 "Identify the base case.\n"
                 "Break down the problem into smaller subproblems.\n"
                 "Make a recursive call with the smaller subproblem.\n"
                 "Ensure progress towards the base case.\n";
                 cout<<endl<<endl<<"Hope you have understood 'Recursion' :)"<<endl<<"Enter any character to continue : ";
                 cin>>none;
                 cout<<endl<<endl<<"*************** Congratulations! You've successfully grasped the concept of recursion ****************";
    }

    void quiz()
    {
        int count=0;
        cout<<endl<<endl<<"*************** You've successfully unlocked the MCQ Quiz on Recursion  ****************";
        cout<<endl<<endl<<"****   Note that the you answer in a / b / c / d  format only    ****";
        cout <<endl<< "1. What is recursion in programming?" << endl;
    cout << "a. A loop structure" << endl;
    cout << "b. A way of solving problems by breaking them into smaller instances" << endl;
    cout << "c. A data type" << endl;
    cout << "d. A conditional statement" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "2. What is the base case in recursion?" << endl;
    cout << "a. The largest case of the problem" << endl;
    cout << "b. The smallest case that can be directly solved" << endl;
    cout << "c. The case with the most steps" << endl;
    cout << "d. The case with the least steps" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "3. Why is a base case necessary in recursive functions?" << endl;
    cout << "a. To make the code shorter" << endl;
    cout << "b. To prevent infinite recursion" << endl;
    cout << "c. To increase efficiency" << endl;
    cout << "d. To make the code more complex" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "4. In a countdown function, what would be a typical base case?" << endl;
    cout << "a. n < 0" << endl;
    cout << "b. n == 0" << endl;
    cout << "c. n > 0" << endl;
    cout << "d. n <= 1" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "5. What happens if a recursive function doesn't have a base case?" << endl;
    cout << "a. The program crashes" << endl;
    cout << "b. The function returns an error" << endl;
    cout << "c. It leads to infinite recursion" << endl;
    cout << "d. The function works fine without a base case" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "6. Which of the following is an example of a recursive problem-solving approach?" << endl;
    cout << "a. Solving the entire problem at once" << endl;
    cout << "b. Breaking the problem into smaller subproblems" << endl;
    cout << "c. Ignoring the problem" << endl;
    cout << "d. Copy-pasting code repeatedly" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "7. What is the result of the factorial of 0?" << endl;
    cout << "a. 0" << endl;
    cout << "b. 1" << endl;
    cout << "c. Undefined" << endl;
    cout << "d. 10" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "8. In a recursive function, what does the term \"recursive call\" mean?" << endl;
    cout << "a. A call to a different function" << endl;
    cout << "b. A call to the same function within the function" << endl;
    cout << "c. A loop construct" << endl;
    cout << "d. A call to the base case" << endl << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "9. What can be a drawback of using recursion?" << endl;
    cout << "a. It is always less efficient than iterative solutions" << endl;
    cout << "b. It can lead to infinite loops" << endl;
    cout << "c. It can use more memory due to multiple function calls" << endl;
    cout << "d. Recursion has no drawbacks" << endl << endl;

    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;

    cout << "10. Which famous sequence can be generated using recursion?" << endl;
    cout << "a. Prime numbers" << endl;
    cout << "b. Fibonacci sequence" << endl;
    cout << "c. Arithmetic sequence" << endl;
    cout << "d. Even numbers" << endl;
    cin>>arr2[count++];
    if(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
    {
        check_opt(count);
    }
    cout<<endl<<endl;
    marks_count();


    }
    
    void check_opt(int count)
    {
        while(arr2[count-1]!='a' && arr2[count-1]!='b' && arr2[count-1]!='c' && arr2[count-1]!='d')
        {
            cout<<endl<<endl<<"You have entered incorrect option ! , Please select a,b,c or d as you answer ."<<endl;
            cin>>arr2[count-1];
        }
    }

    void marks_count()
    {
        marks=0;
        char arr1[] = {'b', 'b', 'b', 'b', 'c', 'b', 'b', 'b', 'c', 'b'};

        for(int i=0;i<10;i++)
        {
            if(arr1[i]==arr2[i])
            {
                marks++;
            }
        }
        if(marks<11 && marks>7)
        {
            grade='A';
        }
        else if(marks<8 && marks>5)
        {
            grade='B';
        }
        else if(marks<6 && marks>2)
        {
            grade='C';
        }
        else
        {
            grade='D';
        }
    cout<<endl<<endl<<"************************* RESULTS *************************";
    cout<<endl<<endl<<"* You have Secured < "<<marks<<" >"<<"Marks";
    cout<<endl<<endl<<"* You have achieved < "<<grade<<" >"<<"Grade"<<endl;
    cout<<endl<<endl<<"*************** CONGRATULATIONS ON SUCCESSFULLY COMPLETING OUR COURSE ***************";

    }

    void certificate()
    {
    string studentName, date, instructorSignature, instructorName, courseName;
    string file_name = fname + ".txt";
    cout << "Enter your FULL Name: ";
    cin.ignore();
    getline(cin, studentName);

    date=" 05-12-2023 ";
    instructorSignature="    --S.t.p.-- ";
    instructorName= " Prof. Shabana T. Pirjade";
    courseName=" Recursion Mastery ";

    ofstream outputFile;
    outputFile.open(file_name);

    if (outputFile.is_open()) {
        outputFile <<endl<<endl<< "**********************  Certificate of Completion  **********************\n\n";
        outputFile << "This is to certify that  "<<studentName;
        outputFile << "  has successfully completed the course on Recursion with a grade : ";
        outputFile << grade <<endl<<""<< "\n\n";
        outputFile << "Date: " << date << "\n\n";
        outputFile << instructorSignature << "\n";
        outputFile << instructorName << "\n";
        outputFile << courseName << "\n\n";
        outputFile <<"**************************************************************************************";
        outputFile.close();
        cout << "Certificate information has been written to the file 'certificate.txt'.\n";
    } else {
        cout << "Error: Unable to open the file.\n";
    }

    ifstream inputFile("file_name");
    if(inputFile.is_open()) {
        cout << "\nContents of 'certificate.txt':\n\n";
        char ch;
        while (inputFile.get(ch)) {
            cout << ch;
        }
        inputFile.close();
    } else {
        cout << "Error: Unable to open the file for reading.\n";
    }

    }

}; 
 
int main()
{
    string enter;
    string name;
    learn l;
    cout<<endl<<endl<<"************************* WELCOME LEARNERS *************************";
    cout<<endl<<endl<<"I will help you to learn <--( RECURSION )-->"<<endl<<endl<<"Tell me are you willing to explore Recursion right now  (answer in yes/no)  : ";
    cin>>enter;
    if(enter=="Yes" || enter=="yes" || enter=="YES")
    {
        cout<<endl<<endl<<"********************* LETS BEGIN THE LEARNING *********************";
        cout<<endl<<endl<<"*  Great to hear that you're excited about learning Recursion!  :)";
        cout<<endl<<endl<<"> What's your first name champ : ";
        cin>>name;
        l.getName(name);
        l.theorey();
        cout<<endl<<endl;
        cout<<"Tell me are you willing to give CERTIFIED QUIZ Recursion right now  (answer in yes/no)  : ";
        cin>>name;
        if(name=="Yes" || name=="yes" || name=="YES")
    {
        l.quiz();
        cout<<endl<<"Your certificate is as follows and you can access can be accesed in file (course.txt) : "<<endl<<endl;
        l.certificate();
        cout<<"\n\n\n\n\n\n\n\n *** Congratulations on completing the course! "<<endl<<"Best wishes for continued success and excellence in all your pursuits."<<endl<<endl;

    }
    else if(name=="No" || name=="no" || name=="NO")
    {
    cout<<endl<<endl<<"Sure, I understand. Quizzes are not everyone's cup of tea. However,  If you ever change your mind , feel free to let me know. I'm here to help"<<endl<<endl<<"****   BYE !   ****"<<endl<<endl;
        cout<<endl<<endl;
        return 0;
    }
    else
    {
        cout<<endl<<endl<<"Wrong Response, Please enter in yes or no format, Please try once again !"<<endl<<endl<<"****   BYE !   ****"<<endl<<endl;
    }
    }
    else if(enter=="No" || enter=="no" || enter=="NO")
    {
        cout<<endl<<endl<<"Sure, I understand. It's not everyone's cup of tea. However, it's a powerful concept in programming, and it can make solving certain problems more elegant. If you ever change your mind , feel free to let me know. I'm here to help"<<endl<<endl<<"****   BYE !   ****"<<endl<<endl;
        cout<<endl<<endl;
    }
    
    else
    {
        cout<<endl<<endl<<"Wrong Response, Please enter in yes or no format, Please try once again !"<<endl<<endl<<"****   BYE !   ****"<<endl<<endl;
    }
   
      
    return 0;
}
