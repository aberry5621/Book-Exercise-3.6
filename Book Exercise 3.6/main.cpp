//
//  main.cpp
//  Book Exercise 3.6
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.6 - BMI Calculation
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "Compute Body Mass Index \n";
    // D
    double height_feet_input = 0.0;
    double height_inches_input = 0.0;
    double height_total_inches = 0.0;
    double weight_input = 0.0;
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;
    double metric_weight_calc = 0.0;
    double metric_height_calc = 0.0;
    double bmi = 0.0;
    
    // I
    cout << "Enter weight in pounds: ";
    cin >> weight_input;
    
    cout << "Enter height feet: ";
    cin >> height_feet_input;
    
    cout << "Enter height inches: ";
    cin >> height_inches_input;
    
    // P
    
    // convert weight and height to metric
    height_total_inches = height_feet_input * 12 + height_inches_input;
    metric_weight_calc = weight_input * KILOGRAMS_PER_POUND;
    metric_height_calc = height_total_inches * METERS_PER_INCH;
    
    // compute body mass index
    bmi = metric_weight_calc / pow(metric_height_calc, 2.0);
    
    // O
    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Subject is underweight" << endl;
    } else if (bmi < 25) {
        cout << "Subject is normal weight" << endl;
    } else if (bmi < 30) {
        cout << "Subject is overweight" << endl;
    } else {
        cout << "Subject is fatty fat fat!" << endl;
    }
    
    return 0;
}
