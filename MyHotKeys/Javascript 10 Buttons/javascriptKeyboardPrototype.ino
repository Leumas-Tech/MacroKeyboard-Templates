#include <Keyboard.h>
//like with anything we need to include or library.


//we start by declaring all of our buttons . our first button (button_0) is equal to two because its connected to pin 2 on our arduino board.

//for this project we are using an arduino micro but relativey any micro controller can be used.



int button_0 = 2;
int button_1 = 3;
int button_2 = 4;
int button_3 = 5;
int button_4 = 6;
int button_5 = 7;
int button_6 = 8;
int button_7 = 9;
int button_8 = 10;
int button_9 = 11;


// we now need to toss all of the buttons we just declared up there ^^ down here in the following array called Buttons[];

//you can change the name to anything, but for user friendlyness these are the names we will be going with

int Buttons[] = {
  button_0, button_1 , button_2, button_3, 
  button_4, button_5, button_6, button_7,
  button_8, button_9
  };


void setup() {
  int buttonCount = sizeof(Buttons)/sizeof(int);
  for (int i = 0; i < buttonCount; i++) {
      pinMode(Buttons[i], INPUT_PULLUP);
    }
    //this function starts emulating a keyboard connected to a computer. 
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
  //With the delays youre keyboard has enough time in between inputs to enter the next input because it is possible for the keyboard command to be too fast for the computer.
  
      if(digitalRead(Buttons[0])==LOW){
        //write function main with brackets and all
    Keyboard.print("function main(){}");
    delay(150);
    //press enter
    Keyboard.press(0xe0);
    delay(100);
    //release enter
    Keyboard.releaseAll();
    delay(50);
    //write main then press enter
    Keyboard.print("main();");
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
       //write main then press enter
    Keyboard.print("main();");
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
       //write main then press enter
    Keyboard.print("main();");
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
    
    }



// buttons[1] is going to be for for loops

    
      if(digitalRead(Buttons[1])==LOW){
    Keyboard.print("for(let i = 0; 0 < xyz; i++){");
    delay(150);
    //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
       //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
    //print last semicolon
    Keyboard.print("}");
       //press enter
    
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
    }


//Buttons[2] will be used for a switch statement, were gonna make it so its left open and we can rapidly press Buttons[3] to add as many cases as we want


    
      if(digitalRead(Buttons[2])==LOW){
        Keyboard.print("switch (xyz){");
        delay(150);
    //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
      Keyboard.print("}");
          //press keyUp
    Keyboard.press(0xDA);
    delay(100);
    Keyboard.releaseAll();
          //press keyUp
    Keyboard.press(0xDA);
    delay(100);
    Keyboard.releaseAll();
          //press keyUp
    Keyboard.press(0xDA);
    delay(100);
    Keyboard.releaseAll();
    
    }
      if(digitalRead(Buttons[3])==LOW){
    Keyboard.print("case ' ':");
    delay(150);
         //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
     Keyboard.print("break;");
    delay(150);
             //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
             //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
    
    
    }

    // buttons[4] will be used for creating html documents in vs code simply
    if(digitalRead(Buttons[4])==LOW){
    Keyboard.print("html:5");
    delay(100);
    //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
     
    }

    // buttons[5] will be used for taking screenshots.
      if(digitalRead(Buttons[5])==LOW){
    Keyboard.press(0xCE);
    Keyboard.releaseAll();
    delay(100);
    }

    // button[6] will be used for switchings tabs
      if(digitalRead(Buttons[6])==LOW){
        Keyboard.press(0x82);
        Keyboard.press(0xb3);
        Keyboard.releaseAll();
        delay(200);
        
    }
      if(digitalRead(Buttons[7])==LOW){
        Keyboard.print("@media (min-width: px) and (max-width: px){");
        delay(20);
                     //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
                 //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        Keyboard.print("}");
                     //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
    
        

    }
      if(digitalRead(Buttons[8])==LOW){
           Keyboard.print("https://popl.co/?ref=WILL842");
                    //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        Keyboard.print("https://github.com/william7829");
                     //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        Keyboard.print("https://Xlabz.tech");
                   //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
        Keyboard.print("https://secretSearch.tech");
                     //press enter
    Keyboard.press(0xe0);
    delay(100);
    Keyboard.releaseAll();
    
        
       delay(200);
    }






      if(digitalRead(Buttons[9])==LOW){
    delay(100);
    // new doc
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    delay(100);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_ESC);
    delay(100);
       
    
    }
}
