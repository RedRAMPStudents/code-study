# Intro

Hello! This is a project done by a subgroup of [RAMP 2020](https://www.uml.edu/engineering/ramp/) affiliated with the EECE department of the University of Massachusetts Lowell. 
This is the final project for students in the Intro to Engineering course and functions as a collabrative study help tool. This project uses a combination of Adafruit, Energia, 
and digilent arduino boards. 

The developers are: Sarah Eagen, Julia Measmer, Nathan Uhunsere, Rishabh Dhir, and Victoria Nguyen. 

# Intructions
## Create Adafruit Feeds for Study Buddy
1. Take note of **your** [Adafruit IO key](https://learn.adafruit.com/mqtt-adafruit-io-and-you/getting-started-on-adafruit-io)
2. Create a new feed that will record your study time data nd take note of the name of your feed
3. Create a feed that will record your type of study/joystick data and take note of the feed name (This will record numbers 1,2...) 
    1. Create a new feed that will use data from the feed you ade in step 3. This will change it from a number to words
        1. Create a trigger - "If(Feed from step(3) is equal to "1" then set (Feed from (i)) to "Test Prep"
        2. Create another trigger - "If (Feed from step(3)) is equal to "1" then set (Feed from step(3)) is equal to "2" then set (Feed from (i)) to "Group Work"
        3. Create another trigger - "If (Feed from step(3)) is equal to "3" then set (Feed from (i)) to "Homework"
4. Share your feed from step(2) and (i) with the username of whoever is hosting the shared Adafruit feeds
