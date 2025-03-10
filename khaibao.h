//use PWM pins
int pinServ1a = 2;
int pinServ1b = 3;
int pinServ2a = 4;
int pinServ2b = 5;
int pinServ3a = 6;
int pinServ3b = 7;
int pinServ4a = 8;
int pinServ4b = 9;

//Khai bao bien các vị trí stepmotor (1,2); (3,4) đối diện nhau
//Khai bao bien các vị trí stepmotor (1,2); (3,4) đối diện nhau

//h3
// int gan1b = 140;
// int gan2b = 140;
// int gan3b = 138;
// int gan4b = 138;

// int xa1b = 30;
// int xa2b = 30;
// int xa3b = 30;
// int xa4b = 30;

// int dung1a = 124;
// int dung2a = 21;
// int dung3a = 125;
// int dung4a = 8;
// int dung1aFF = 128;

// int ngang1a = 17;
// int ngang2a = 125;
// int ngang3a = 23;
// int ngang4a = 100;

// move forwards
int gan1b = 160;  // OK
int gan2b = 160;  // OK
int gan3b = 160;  // OK
int gan4b = 160;  // OK


// move backwards
int xa1b = 40; // ok
int xa2b = 50; // ok
int xa3b = 40; // ok
int xa4b = 40; // ok

// move vertical
int dung1a = 25; // ok
int dung2a = 23;  // ok
int dung3a = 61; // ok
int dung4a = 180;  // ok


// move horizontal clockwisee
int ngang1a = 126;  // ok
int ngang2a = 128; // ok
int ngang3a = 168;  // ok
int ngang4a = 75; // ok

// move horizontal quater clockwise
int ngang1ac = 128;  // ok
int ngang2ac = 128; // ok
int ngang3ac = 165;  // ok
int ngang4ac = 80; // ok

String data = "";
int count = 0;
int L = 0;
int index = 0;
int trash = 0;
bool solved = true;