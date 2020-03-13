#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Brain
//  action 1: the brain thinks
brain.think();
//  action 2: the brain analyzes
brain.analyze();
//  action 3: the brain learns
brain.learn();
//  2)
//  Noun: Finger
//  action 1: the finger points
finger.point();
//  action 2: the finger scratches
finger.scratch();
//  action 3: the finger touches
finger.touch();
//  3)
//  Noun: Leg
//  action 1: the leg kicks
leg.kick();
//  action 2: the leg stomps
leg.stomp();
//  action 3: the leg walks
leg.walk();
//  4)
//  Noun: Elephant
//  action 1: the elephant sits
elephant.sit();
//  action 2: the elephant bathes
elephant.bathe();
//  action 3: the elephant runs
elephant.run();
//  5)
//  Noun: Speaker
//  action 1: the speaker plays music
speaker.playMusic();
//  action 2: the speaker distorts
speaker.distort();
//  action 3: the speaker fails
speaker.fail();
//  6)
//  Noun: Computer
//  action 1: the computer calculates
computer.calculate();
//  action 2: the computer controls other devices
computer.control();
//  action 3: the computer accesses the internet
computer.accessInternet();
//  7)
//  Noun: DAW
//  action 1: the DAW records
DAW.record();
//  action 2: the DAW crashes
DAW.crash();
//  action 3: the DAW quits unexpectedly
DAW.quitUnexpectedly();
//  8)
//  Noun: Cell Phone
//  action 1: the cell phone vibrates
cellPhone.vibrate();
//  action 2: the cell phone breaks
cellPhone.break();
//  action 3: the cell phone tracks location
cellPhone.trackLocation();
//  9)
//  Noun: Musician
//  action 1: the musician performs
musician.perform();
//  action 2: the musician records
musician.record();
//  action 3: the musician bows
musician.bow();
//  10)
//  Noun: Engineer
//  action 1: the engineer complains
engineer.complain();
//  action 2: the engineer corrects the musician
engineer.correct();
//  action 3: the engineer mixes
engineer.mix();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
