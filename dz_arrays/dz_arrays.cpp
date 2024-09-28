#include <iostream>
#include <thread>  
#include <chrono>
#include <cstdlib>
#define SIZE 12

using namespace std;
using namespace this_thread;
using namespace chrono;

int main()
{
    int choice_speed, choice_vector;
    do
    {
        cout << "Chose line vector:\n1)Vertical\n2)Horizontal\n";
        cin >> choice_vector;
        if (choice_vector == 1)
        {
            cout << "Chose how fast line will shows:\n1)Slow\n2)Normal\n3)Quick\n(Enter 0 to exit) ";
            cin >> choice_speed;
            if (choice_speed == 1)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << "\t|" << endl;
                    sleep_for(seconds(1));
                }
            }
            else if (choice_speed == 2)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << "\t|" << endl;
                    sleep_for(milliseconds(70));
                }
            }
            else if (choice_speed == 3)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << "\t|" << endl;
                    sleep_for(milliseconds(25));
                }
            }
            else if (choice_speed == 0)
            {
                cout << "See u later!";
            }
            else {
                cout << "There are not that way";
            }
        }
        if (choice_vector == 2)
        {
            cout << "Chose how fast line will shows:\n1)Slow\n2)Normal\n3)Quick\n(Enter 0 to exit) ";
            cin >> choice_speed;
            if (choice_speed == 1)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << "-";
                    sleep_for(seconds(1));
                }
                cout << endl;
            }
            else if (choice_speed == 2)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << "-";
                    sleep_for(milliseconds(70));
                }
                cout << endl;
            }
            else if (choice_speed == 3)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << "-";
                    sleep_for(milliseconds(25));
                }
                cout << endl;
            }
            else if (choice_speed == 0)
            {
                cout << "See u later!";
            }
            else {
                cout << "There are not that way"<<endl;
            }
        }
    } while (choice_speed != 0);


    int choice, num_player, num_computer, score_player = 0, score_computer = 0;
    srand(time(NULL));
    cout << "Do you wanna play with me?\n1)yes\n2)no\n";
    cin >> choice;
    if (choice == 1) {
        while (score_player < 3 && score_computer < 3) {
            system("cls");
            cout << "Your num is  ";
            for (int i = 0; i < 10; i++)
            {
                cout << "\b" << rand() % 5 + 1;
                sleep_for(milliseconds(75));
            }
            num_player = rand() % 5 + 1;
            cout << "\b" << num_player << endl;
            cout << "My num is  ";
            for (int i = 0; i < 10; i++)
            {
                cout << "\b" << rand() % 5 + 1;
                sleep_for(milliseconds(75));
            }
            num_computer = rand() % 5 + 1;
            cout << "\b" << num_computer << endl;
            if (num_player > num_computer) {
                cout << "You are win!" << endl;
                score_player++;
                cout << "Your score is " << score_player << endl;
                cout << "My score is " << score_computer << endl;
                sleep_for(seconds(1));
            }
            else if (num_player < num_computer) {
                cout << "You lose!" << endl;
                score_computer++;
                cout << "Your score is " << score_player << endl;
                cout << "My score is " << score_computer << endl;
                sleep_for(seconds(1));
            }
            else {
                cout << "Our nums are even!";
                sleep_for(seconds(1));
            }
        } 
    }
    else if (choice == 2) {
        return 0;
    }
    else {
        cout << "There are no this choice";
    }
    
    srand(time(NULL));
    int arr[SIZE],min=99999999,max=0;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand();
        cout << arr[i] << " ";
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    int arr[SIZE], month,d1,d2,max_s = 0,min_s = 0,min = 999999999999999,max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter salary by " << i + 1 << " month --> ";
        cin >> arr[i];
    }
    cout << "First month for diapazone -> ";
    cin >> d1;
    cout << "Second month for diapazone -> ";
    cin >> d2;
    if (d1 < d2) {
        for (int i = d1-1; i < d2; i++)
        {
            if (arr[i] > max) {
                max = arr[i];
                max_s = i;
            }
            if (arr[i] < min) {
                min = arr[i];
                min_s = i;
            }
        }
        cout << "Max salary in this diapazone was " << max << ", this salary was in " << max_s << " month"<< endl;
        cout << "Min salary in this diapazone was " << min << ", this salary was in " << min_s << " month" << endl;
    }
    else if (d1 > d2) {
        for (int i = d2-1; i < d1; i++)
        {
            if (arr[i - 1] > max) {
                max = arr[i];
                max_s = i;
            }
            if (arr[i - 1] < min) {
                min = arr[i];
                min_s = i;
            }
        }
        cout << "Max salary in this diapazone was " << max << ", this salary was in " << max_s << " month" << endl;
        cout << "Min salary in this diapazone was " << min << ", this salary was in " << min_s << " month" << endl;
    }
    else {
        cout << "Max salary in this diapazone was " << arr[d1-1] << ", this salary was in " << d1 << " month" << endl;
        cout << "Min salary in this diapazone was " << arr[d1-1] << ", this salary was in " << d1 << " month" << endl;
  }
    

    int arr[SIZE], sum_minus = 0,sum_2=0,product_2 = 1, min=999999999,max =0,min_pos,max_pos,product = 1,first_pos_minus=-1,second_pos_minus;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter num ->" ;
        cin >> arr[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            sum_minus += i;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_pos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
        if (arr[i] < 0 && first_pos_minus == -1) {
            first_pos_minus = i;
        }
        if (arr[i] < 0 && first_pos_minus >= 0)
        {
            second_pos_minus = i;
        }
        if (arr[i] % 2 == 0) {
            product_2 *= arr[i];
        }
    }
    if (min_pos > max_pos) {
        for (int i = max_pos; i < min_pos; i++)
        {
            product *= arr[i];
        }
    }
    else {
        for (int i = min_pos; i < max_pos; i++)
        {
            product *= arr[i];
        }
    }
    if (second_pos_minus > 0)
    {
        for (int i = first_pos_minus; i < second_pos_minus; i++)
        {
            sum_2 += arr[i];
        }
    }
    cout << "Sum of nums < 0 = " << sum_minus<<endl;
    cout << "Product of nums between min and max = " << product << endl;
    cout << "Product of even numbers = " << product_2 << endl;
    cout << "Sum of nums between first num < 0 and second num < 0 = " << sum_2 << endl;
}