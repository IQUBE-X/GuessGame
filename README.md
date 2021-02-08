# GuessGame
A number guessing game implemented in C++

## About
The basic idea of the game is that a player guesses a number which is picked randomly from a range. This range can vary according to the level. For eg:
```
Level 1: 1-10
Level 3: 1-30
Level 5: 1-50
```

If the player enters a wrong guess he/she gets a hint and he/she gets to try again. If the user exceeds the number of tries given, then he/she loses and the program quits.
The number of tries the user gets is also dependent on the level.

## Randomization
Randomization was done using the `rand()` and `srand()` seed methods. Planning to use `std:uniform_int_distribution`.

# Run Locally
To run this project you will need [**Visual Studio 2019**](https://visualstudio.microsoft.com/vs/).

- Open **Visual Studio** and select **Clone a repository**
![Step 1](https://i.imgur.com/IhWrkhy.png)

- Enter the required details and click on **Clone**
![Step 2](https://i.imgur.com/n3oJoFR.png)

- You will be able to see all the files on the **Solution Explorer** on the right.
![Step 3](https://i.imgur.com/Jt9ljtv.png)

- Click on **Local Windows Debugger** or press **F5** to run the program
![Step 4](https://i.imgur.com/8VSqbxo.png)

