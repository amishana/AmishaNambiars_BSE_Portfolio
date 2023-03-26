# Hangman
### Description:<br />
This project is a sensor for the visually impaired and blind to navigate around. The aim is for blind people to wear the sensor on their wrists and ankles, allowing them to know when they are about to run into something. If you would like to see the full process of my jouney on this project, go to the gh-pages branch.

### How to Run This Project:<br />
First, install an Arduino IDE (this is where I downloaded mine: https://www.arduino.cc/en/software). The code can then be downloaded and thirdEyeProject.ino can be run from there, but it must be paired with a physical sensor to properly work.

### Authors:<br />
#### Amisha Nambiar and Professor Larissa Munishkina from the University of California Santa Cruz
Amisha Nambiar authored hangman.py and hangman_test.py.<br />
Amisha Nambiar and Professor Larissa Munishkina authored the pseudocode for hangman.py and hangman_test.py.<br />
Professor Larissa Munishkina provided dictionary.txt and dictionary-short.txt.<br />

### Files in This Repository:<br />
dictionary.txt contains all the possible words for the computer to choose from.<br />
dictionary-short.txt contains one word of each possible word length for the computer to choose from.<br />
hangman.py contains the code for the game using dictionary.txt as the inputted dictionary file.<br />
hangman_test.py contains the same code as hangman.py except the inputted dictionary file is dictionary-short.txt. This will allow the user to test if the game mechanics are working correctly using a known word.
