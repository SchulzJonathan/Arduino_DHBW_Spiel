

# Namespace LOGIC



[**Namespace List**](namespaces.md) **>** [**LOGIC**](namespaceLOGIC.md)




















## Classes

| Type | Name |
| ---: | :--- |
| class | [**cla\_computer\_player**](classLOGIC_1_1cla__computer__player.md) <br>_This class represents a computer opponent in the game. It provides methods for automatic movement of tokens. It is derived from the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _._ |
| class | [**cla\_manual\_player**](classLOGIC_1_1cla__manual__player.md) <br>_This class represents a manual player in a game. It is derived from the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _class._ |
| class | [**cla\_player**](classLOGIC_1_1cla__player.md) <br>_This class represents a player in the game. It provides methods for moving tokens and checking the status of the player. It is an abstract class and has two derived classes:_ [_**cla\_computer\_player**_](classLOGIC_1_1cla__computer__player.md) _and_[_**cla\_manual\_player**_](classLOGIC_1_1cla__manual__player.md) _._ |
| class | [**cla\_session**](classLOGIC_1_1cla__session.md) <br>_The_ [_**cla\_session**_](classLOGIC_1_1cla__session.md) _class is the main class of the game logic. It initializes the players with their methods and it provides essential methods for the game logic._ |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**mode**](#enum-mode)  <br> |
| enum  | [**status**](#enum-status)  <br> |
















































## Public Types Documentation




### enum mode 

```C++
enum LOGIC::mode {
    Student = 0,
    Professor = 1
};
```






### enum status 

```C++
enum LOGIC::status {
    Start = 0,
    Start_Track,
    Start_Finished,
    Start_Track_Finished,
    Error,
    Track,
    Finished,
    Track_Finished
};
```




------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/logic.cpp`

