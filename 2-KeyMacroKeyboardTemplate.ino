//DO NOT FORGET TO DOWNLOAD AND INCLUDE THIS LIBRARY
#include <Keyboard.h>
//these are the pins you will be connecting each button to.
//each pin will receive its own int value and int name. For user friendliness its best to keep them similar, but in reality you can name them whatever you want!
int button_0 = 3;
int button_1 = 5;

//we store those same int names in an array to hold our buttons, again this array can be named anything. But since its an array thats holding our buttons, its best to name it Buttons
int Buttons[] = {
  button_0, button_1
  };
//we declare an amount of buttons that can be pressed which is equal to the amount of buttons store in our Buttons array over the amount of ints we have, meaning we only want 1 Button pressed at a time, I'm sure this can change but I havent messed around with it too much. Since Macro Keyboard primary purpose is to execute commands maybe its best to keep it at 1 button at a time, otherwise we might give too many commands.
void setup() {
  int buttonCount = sizeof(Buttons)/sizeof(int);
  for (int i = 0; i < buttonCount; i++) {
      pinMode(Buttons[i], INPUT_PULLUP);
    }
    
    Keyboard.begin();
}

void loop() {
  
  //To get your custom keyboard to write a certain command we have a few options for what we can write here in the code.
  //Keyboard.write();
  //This will enter a keyboard command like "KEY_LEFT_GUI" WOULD BE THE WINDOWS BUTTON
  
  //Keyboard.print();
  //This will type something in
  
  //Keyboard.press();
  //Keyboard.release();
  //Keyboard.releaseALL();
  //And most importantly do not forget your delay(ms);
//This makes it to where the keyboard needs a certain amount of pre-defined time to be pressed again. Usually in ms.
  


  //Each if statement here will determine what happens when any of your keys are pressed.
      if(digitalRead(Buttons[0])==LOW){
    Keyboard.print("true");
    delay(500);
    Keyboard.press(KEY_RETURN);
    }
      if(digitalRead(Buttons[1])==LOW){
    Keyboard.print("false");
    delay(500);
    Keyboard.press(KEY_RETURN);
    }


}
