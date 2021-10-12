void setup() {
 Serial.begin(9600);
 printSum(8,10);
 

}
int printSum(int number1, int number2) {    

    int sum = number1 + number2;
    Serial.print("The sum is: ");
    Serial.print(sum);
    return 0;
    
}
void loop() {



}
