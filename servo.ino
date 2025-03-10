//access the built-in servo library
#include <Servo.h>
#include "khaibao.h"

Servo Serv1a;  //create a servo turn object named Serv1a
Servo Serv1b;  //create a servo in out named Serv1b
Servo Serv2a;  //create a servo object named Serv2a
Servo Serv2b;  //create a servo object named Serv2b
Servo Serv3a;  //create a servo object named Serv3a
Servo Serv3b;  //create a servo object named Serv3b
Servo Serv4a;  //create a servo object named Serv4a
Servo Serv4b;  //create a servo object named Serv4b


const int shrt = 150;
const int lng = 200;
const int vshrt = 100;

void ini() {
  // dung
  Serv1a.write(dung1a);
  Serv2a.write(dung2a);
  Serv3a.write(dung3a);
  Serv4a.write(dung4a);

  // xa
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(100);

  // attach the servo motors to their pins
  Serv1b.attach(pinServ1b);
  Serv2b.attach(pinServ2b);
  Serv3b.attach(pinServ3b);
  Serv4b.attach(pinServ4b);
  delay(200);
  Serv1a.attach(pinServ1a);
  delay(200);
  Serv2a.attach(pinServ2a);
  delay(200);
  Serv3a.attach(pinServ3a);
  delay(200);
  Serv4a.attach(pinServ4a);
  delay(200);
}

void Move() {
  // xa
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(shrt);

  // dung
  Serv1a.write(dung1a);
  delay(shrt);
  Serv2a.write(dung2a);
  delay(shrt);
  Serv3a.write(dung3a);
  delay(shrt);
  Serv4a.write(dung4a);
  delay(shrt);

  // gan
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
  Serv3b.write(gan3b);
  Serv4b.write(gan4b);
  delay(100);
}

void End() {
  // xa
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(1000);
}

void FF_() {
  delay(shrt);
  Serv1b.write(xa1b);
  delay(shrt);
  Serv1a.write(ngang1ac);
  delay(shrt);
  Serv1b.write(gan1b);
  delay(shrt);
  Serv1a.write(dung1a);
}

void FF() {
  delay(shrt);
  Serv1a.write(ngang1a);
  delay(shrt);
  Serv1b.write(xa1b);
  delay(shrt);
  Serv1a.write(dung1a);
  delay(shrt);
  Serv1b.write(gan1b);
  delay(shrt);
}

// this might be the back counter-clockwise
void BB() {
  delay(shrt);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv2a.write(ngang2a);
  delay(shrt);
  Serv2b.write(gan2b);
  delay(shrt);
  Serv2a.write(dung2a);
}

// this might be the back clockwise
void BB_() {
  delay(vshrt);
  Serv2a.write(ngang2ac);
  delay(shrt);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv2a.write(dung2a);
  delay(shrt);
  Serv2b.write(gan2b);
}

void RR_() {
  delay(vshrt);
  Serv4a.write(ngang4ac);
  delay(shrt);
  Serv4b.write(xa4b);
  delay(shrt);
  Serv4a.write(dung4a);
  delay(lng);
  Serv4b.write(gan4b);
}

void RR() {
  delay(shrt);
  Serv4b.write(xa4b);
  delay(lng);
  Serv4a.write(ngang4a);
  delay(lng);
  Serv4b.write(gan4b);
  delay(lng);
  Serv4a.write(dung4a);
}
void LL_() {
  delay(shrt);
  Serv3b.write(xa3b);
  delay(shrt);
  Serv3a.write(ngang3ac);
  delay(shrt);
  Serv3b.write(gan3b);
  delay(shrt);
  Serv3a.write(dung3a);
}
void LL() {
  delay(vshrt);
  Serv3a.write(ngang3a);
  delay(shrt);
  Serv3b.write(xa3b);
  delay(shrt);
  Serv3a.write(dung3a);
  delay(shrt);
  Serv3b.write(gan3b);
}
void DDBE4() {
  delay(shrt);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(shrt);
  Serv4a.write(ngang4a);
  Serv3a.write(ngang3a);
  delay(lng);
  Serv3b.write(gan3b);
  Serv4b.write(gan4b);
  delay(lng);
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv4a.write(dung4a);
  Serv3a.write(dung3a);
  delay(lng);
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
  delay(shrt);
}
void DDAFT() {
  delay(shrt);
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv4a.write(ngang4a);
  Serv3a.write(ngang3a);
  delay(lng);
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
  delay(shrt);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(lng);
  Serv4a.write(dung4a);
  Serv3a.write(dung3a);
  delay(lng);
  Serv3b.write(gan3b);
  Serv4b.write(gan4b);
}
void DD() {
  DDBE4();
  FF();
  DDAFT();
}
void DD_() {
  DDBE4();
  FF_();
  DDAFT();
}

void UUBE4() {
  delay(shrt);
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv4a.write(ngang4a);
  Serv3a.write(ngang3a);
  delay(lng);
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
  delay(shrt);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(lng);
  Serv4a.write(dung4a);
  Serv3a.write(dung3a);
  delay(lng);
  Serv3b.write(gan3b);
  Serv4b.write(gan4b);
  delay(lng);
}
void UUAFT() {
  delay(shrt);
  Serv3b.write(xa3b);
  Serv4b.write(xa4b);
  delay(shrt);
  Serv4a.write(ngang4a);
  Serv3a.write(ngang3a);
  delay(lng);
  Serv3b.write(gan3b);
  Serv4b.write(gan4b);
  delay(lng);
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv4a.write(dung4a);
  Serv3a.write(dung3a);
  delay(lng);
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
}
void UU() {
  UUBE4();
  FF();
  UUAFT();
}
void UU_() {
  UUBE4();
  FF_();
  UUAFT();
}


void FB(){
  delay(shrt);
  Serv1a.write(ngang1a);
  Serv2a.write(ngang2a);
  delay(shrt);
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv1a.write(dung1a);
  Serv2a.write(dung2a);
  delay(shrt);
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
}
void F_B_(){
  delay(shrt);
  Serv1b.write(xa1b);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv1a.write(ngang1ac);
  Serv2a.write(ngang2ac);
  delay(shrt);
  Serv1b.write(gan1b);
  Serv2b.write(gan2b);
  delay(shrt);
  Serv2a.write(dung2a);
  Serv1a.write(dung1a);
}
void F_B2(){
  BB_();
  delay(shrt);
  Serv1b.write(xa1b);
  Serv2a.write(ngang2a);
  delay(shrt);
  Serv1a.write(ngang1ac);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv1b.write(gan1b);
  Serv2a.write(dung2a);
  delay(shrt);
  Serv1a.write(dung1a);
  Serv2b.write(gan2b);
}
void F_B(){
  delay(shrt);

  Serv1b.write(xa1b);
  Serv2a.write(ngang2a);
  delay(shrt);
  Serv1a.write(ngang1ac);
  Serv2b.write(xa2b);
  delay(shrt);

  Serv1b.write(gan1b);
  Serv2a.write(dung2a);
  delay(shrt);

  Serv2b.write(gan2b);
  delay(shrt);
}
void FB_(){
  delay(shrt);
  Serv1a.write(ngang1a);
  Serv2b.write(xa2b);
  delay(shrt);
  Serv1b.write(xa1b);
  Serv2a.write(ngang2ac);
  delay(shrt);
  Serv1a.write(dung1a);
  Serv2b.write(gan2b);
  delay(shrt);
  Serv1b.write(gan1b);
  Serv2a.write(dung2a);

}
void FB2(){
  BB_();
  F_B();
}
void F2B(){
  FF();
  FB();
}
void F2B_(){
  FF();
  FB_();
}
void F2B2(){
  FB();
  FB();
}
          //////////////////////////////// Combination of U and D ///////////////////////////////////////////
void UD(){
  UUBE4();
  FB_();
  UUAFT();
}
void UD_(){
  UUBE4();
  FB();
  UUAFT();
}
void UD2(){
  UUBE4();
  FB2();
  UUAFT();
}
void U_D(){
  UUBE4();
  F_B();
  UUAFT();
}
void U_D_(){
  UUBE4();
  F_B_();
  UUAFT();
}
void U_D2(){
  UUBE4();
  F_B2();
  UUAFT();
}
void U2D(){
  UUBE4();
  F2B();
  UUAFT();
}
void U2D_(){
  UUBE4();
  F2B_();
  UUAFT();
}
void U2D2(){
  UUBE4();
  F2B2();
  UUAFT();
}

void setup() {
  Serial.begin(9600);
  ini();
  Serial.println("Done!");
  Serial.println("Input the rubik cube");
  Serial.println("Type MOVE to start");
}


void loop() {
  if (solved == false) {
    // wait for solve steps
    if (Serial.available() > 0) {
      data = Serial.readStringUntil('\n');
      Serial.print("data: ");
      Serial.println(data);

      if (data == "END") {
        solved = true;
        End();
        Serial.print(" MOVE?");
      } else {
        L = data.length();
        index = 1;
        String S[int(L / 2) + 1];

        /*String analyze*/
        trash = 0;
        /*Data tracking*/
        count = 0;
        while (index > 0) {
          index = data.indexOf(' ');
          //                          Serial.println(index);
          if (index > 0) {
            S[trash] = data.substring(0, index);
          } else {
            S[trash] = data.substring(0, L);
          }
          //                          Serial.println(S[trash]);
          trash = trash + 1;
          count = index + 1;
          data = data.substring(count, L);
        }
        /* OUTPUT: s (sequence of solve steps)*/
        trash = 0;
        while (trash < int(L / 2) + 1) {

          //////////////////////////////// Start coding here ///////////////////////////////////////////
          if (S[trash] == "F") {
            FF();
          }
          if (S[trash] == "B") {
            BB_();
          }
          if (S[trash] == "R") {
            RR();
          }
          if (S[trash] == "L") {
            LL();
          }
          if (S[trash] == "D") {
            DD();
          }
          if (S[trash] == "U") {
            UU();
          }

          //////////////////////////////// CounterClockWise ///////////////////////////////////////////

          if (S[trash] == "F'") {
            FF_();
          }
          if (S[trash] == "B'") {
            BB();
          }
          if (S[trash] == "R'") {
            RR_();
          }
          if (S[trash] == "L'") {
            LL_();
          }
          if (S[trash] == "D'") {
            DD_();
          }
          if (S[trash] == "U'") {
            UU_();
          }
          /////////////////////////////// Double ///////////////////////////////////////////
          if (S[trash] == "F2") {
              FF();
              FF();
            }
          if (S[trash] == "B2") {
            BB();
            BB();
          }
          if (S[trash] == "R2") {
            RR();
            RR();
          }
          if (S[trash] == "L2") {
            LL();
            LL();
          }
          if (S[trash] == "D2") {
            DDBE4();
            FF();
            FF();
            DDAFT();
          }
          if (S[trash] == "U2") {
            UUBE4();
            FF();
            FF();
            UUAFT();
          }

          //////////////////////////////// Combination of U and D ///////////////////////////////////////////
          if (S[trash] == "Y1") {
            UD();
          }
          if (S[trash] == "Y2") {
            UD_();
          }
          if (S[trash] == "Y3") {
            UD2();
          }if (S[trash] == "Y4") {
            U_D();
          }
          if (S[trash] == "Y5") {
            U_D_();
          }if (S[trash] == "Y6") {
            U_D2();
          }
          if (S[trash] == "Y7") {
            U2D();
          }
          if (S[trash] == "Y8") {
            U2D_();
          }
          if (S[trash] == "Y9") {
            U2D2();
          }
          if (S[trash] == "X1") {
            FB();
          }
          if (S[trash] == "X2") {
            FB_();
          }
          if (S[trash] == "X3") {
            FB2();
          }
          if (S[trash] == "X4") {
            F_B();
          }
          if (S[trash] == "X5") {
            F_B_();
          }
          if (S[trash] == "X6") {
            F_B2();
          }
          if (S[trash] == "X7") {
            F2B();
          }
          if (S[trash] == "X8") {
            F2B_();
          }
          if (S[trash] == "X9") {
            F2B2();
          }

          //////////////////////////////// Stop coding here ///////////////////////////////////////////
          Serial.print(S[trash]);
          Serial.print(" ");
          trash = trash + 1;
        }
        Serial.println(" ");
        Serial.println("MOVED!");
        data = "";
      }
    }
  } else {
    if (Serial.available() > 0) {
      data = Serial.readStringUntil('\n');
      if (data == "MOVE") {
        Move();
        solved = false;
        Serial.println("Input solving steps");
      }
      data = "";
    }
    data = "";
  }
}
