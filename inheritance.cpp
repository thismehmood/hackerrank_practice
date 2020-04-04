#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *       
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
               public: Student(string firstName, string lastName, int id, vector<int> scores)
                {
                          Person(firstName,lastName,id);
                          this->testScores = scores;
                }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
                // public: char calculate(){
                //         int sum = 0;
                //         for(int i = 0; i <testScores.length; i++){
                //                 sum += testScores[i];
                //         }
                //         int  avg = 0;
                //         avg =sum / testScores;

                     
                // }
	
        public: char calculate()
               {
                   long size = testScores.size();
                    int sum=0;
                    char ch='O';
                    for(int i = 0; i < size; i++){
                        sum = sum + testScores[i];
                    }
                    int total = sum / size;

                    if(total <= 100 && total >= 90)
                        ch= 'O';
                    else if(total < 90 && total >= 80)
                        ch= 'E';
                    else if(total < 80 && total >= 70)
                        ch= 'A';
                    else if(total < 70 && total >= 55)
                        ch= 'P';
                    else if(total < 55 && total >= 40)
                        ch= 'D';
                    else if(total < 40)
                        ch= 'T';     
            return ch;           
    }
}; 

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
