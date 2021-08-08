#include<SoftwareSerial.h>
int first_finger;
int second_finger;
int third_finger;
int fourth_finger;
int thumb;


SoftwareSerial bt(0, 1);

void setup() {

//Serial.begin(9600);
bt.begin(9600);
 
  pinMode(A3, INPUT);
  pinMode(A2, INPUT);
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  pinMode(A7, INPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:

  int first_finger = analogRead(A3);
  int second_finger = analogRead(A2) ;
  int third_finger = analogRead(A1);
  int fourth_finger = analogRead(A0) ;
  int thumb = analogRead(A7) + 21;
//Serial.print(thumb);
//Serial.print("\t");



//Serial.print(first_finger);
//Serial.print("\t");


//Serial.print(second_finger);
//Serial.print("\t");


//Serial.print(third_finger);
//Serial.print("\t");



//Serial.println(fourth_finger);
//Serial.print("\t");

  

  //1
  if (thumb >= 40 & first_finger <= 35 & second_finger >= 50 & third_finger >= 40 & fourth_finger >= 50 )
  {
    bt.println("I am Ankit\t");
    delay(3000);
  }


  //2
  else else if (thumb >= 40 & first_finger >= 35 & second_finger <= 50 & third_finger >= 40 & fourth_finger >= 50 )
  {
    bt.println("I am hungry");
    delay(3000);
  }


  //3
  else else if (thumb >= 40 & first_finger >= 35 & second_finger >= 50 & third_finger <= 40 & fourth_finger >= 50 )
  {
   bt.println("I need help");
    delay(3000);
  }


  //4
  else if (thumb >= 40 & first_finger >= 35 & second_finger >= 50 & third_finger >= 40 & fourth_finger <= 50 )
  {
    bt.println("Where");
    delay(3000);
  }

  //1 2
  else if (thumb >= 40 & first_finger <= 35 & second_finger <= 50 & third_finger >= 40 & fourth_finger >= 50 )
  {
    bt.println("Why");
    delay(3000);
  }

  //3 4
  else if (thumb >= 40 & first_finger >= 35 & second_finger >= 50 & third_finger <= 40 & fourth_finger <= 50 )
  {
    bt.println("when");
    delay(3000);
  }


  //1 3
  else if (thumb >= 40 & first_finger <= 35 & second_finger >= 50 & third_finger <= 40 & fourth_finger >= 50 )
  {
    bt.println("What is the time right now?");
    delay(3000);
  }


  //1 4
  else if (thumb >= 40 & first_finger <= 35 & second_finger >= 50 & third_finger >= 40 & fourth_finger <= 50 )
  {
    bt.println("I need water\t");
    delay(3000);
  }


  //1 2 3
  else if (thumb >= 40 & first_finger <= 35 & second_finger <= 50 & third_finger <= 40 & fourth_finger >= 50 )
  {
    bt.println("what is your name\t");
    delay(3000);
  }

  //2 3
  else if (thumb >= 40 & first_finger >= 35 & second_finger <= 50 & third_finger <= 40 & fourth_finger >= 50 )
  {
    bt.println("Yes\t");
    delay(3000);
  }


  //2 4
  else if (thumb >= 40 & first_finger >= 35 & second_finger <= 50 & third_finger >= 40 & fourth_finger <= 50 )
  {
    bt.println("no\t");
    delay(3000);
  }



  //t
  else if (thumb <= 40 & first_finger >= 35 & second_finger >= 50 & third_finger >= 40 & fourth_finger >= 50 )
  {
    bt.println("Where do you live\t");
    delay(3000);
  }

  //t 1
  else if (thumb <= 40 & first_finger <= 35 & second_finger >= 50 & third_finger >= 40 & fourth_finger >= 50 )
  {
    bt.println("Awesome\t");
    delay(3000);
  }
  //t 2 3
  else if (thumb <= 40 & first_finger >= 35 & second_finger <= 50 & third_finger <= 40 & fourth_finger >= 50 )
  {
    bt.println("omg\t");
    delay(3000);
  }


  //t 1 2
  else if (thumb <= 40 & first_finger <= 35 & second_finger <= 50 & third_finger >= 40 & fourth_finger > 50 )
  {
    bt.println("How much does this cost\t");
    delay(3000);
  }


  //t 1 2 3
  else if (thumb <= 40 & first_finger <= 35 & second_finger <= 50 & third_finger <= 40 & fourth_finger >= 50 )
  {
    bt.println("where is restroom\t");
    delay(3000);
  }


  //t 1 2 3 4
  else if (thumb <= 40 & first_finger <= 35 & second_finger <= 50 & third_finger <= 40 & fourth_finger <= 50 )
  {
    bt.println("I will punch you!\t");
    delay(3000);
  }



  //t 2
  else if (thumb <= 40 & first_finger >= 35 & second_finger <= 50 & third_finger >= 40 & fourth_finger >= 50 )
  {
    bt.println("Welcome\t");
    delay(3000);
  }


  //t 3 4
  else if (thumb <= 40 & first_finger >= 35 & second_finger >= 50 & third_finger <= 40 & fourth_finger <= 50 )
  {
    bt.println("Thankyou\t");
    delay(3000);
  }


else

{
    bt.println("\t");
    delay(3000);
  }





}
