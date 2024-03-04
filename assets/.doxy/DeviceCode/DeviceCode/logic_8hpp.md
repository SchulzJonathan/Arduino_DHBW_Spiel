

# File logic.hpp



[**FileList**](files.md) **>** [**COD\_ENG\_OUT\_arduino\_code**](dir_e46236678326602fb51a33a9a20e1fb4.md) **>** [**lib**](dir_4020720c6a555fbd5bcbb296f9427588.md) **>** [**Game\_Logic**](dir_a4eb90df38054bf38c8301b489299593.md) **>** [**logic.hpp**](logic_8hpp.md)

[Go to the source code of this file](logic_8hpp_source.md)

_This file is the header file for the game logic library._ [More...](#detailed-description)

* `#include <cstdint>`













## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**LOGIC**](namespaceLOGIC.md) <br> |


## Classes

| Type | Name |
| ---: | :--- |
| class | [**cla\_computer\_player**](classLOGIC_1_1cla__computer__player.md) <br>_This class represents a computer opponent in the game. It provides methods for automatic movement of tokens. It is derived from the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _._ |
| class | [**cla\_manual\_player**](classLOGIC_1_1cla__manual__player.md) <br>_This class represents a manual player in a game. It is derived from the_ [_**cla\_player**_](classLOGIC_1_1cla__player.md) _class._ |
| class | [**cla\_player**](classLOGIC_1_1cla__player.md) <br>_This class represents a player in the game. It provides methods for moving tokens and checking the status of the player. It is an abstract class and has two derived classes:_ [_**cla\_computer\_player**_](classLOGIC_1_1cla__computer__player.md) _and_[_**cla\_manual\_player**_](classLOGIC_1_1cla__manual__player.md) _._ |
| class | [**cla\_session**](classLOGIC_1_1cla__session.md) <br>_The_ [_**cla\_session**_](classLOGIC_1_1cla__session.md) _class is the main class of the game logic. It initializes the players with their methods and it provides essential methods for the game logic._ |


















































# Detailed Description


This file contains the declaration of the classes cla\_session, cla\_player, cla\_computer\_player and cla\_manual\_player. The cla\_session class is the main class of the game logic. It initializes the players with their methods and it provides essential methods for the game logic. The cla\_player class represents a player in the game. It provides methods for moving tokens and checking the status of the player. It is an abstract class and has two derived classes:
* cla\_computer\_player
* cla\_manual\_player. The cla\_computer\_player class represents a computer opponent in the game. It provides methods for automatic movement of tokens. The cla\_manual\_player class represents a manual player in a game. 




    

------------------------------
The documentation for this class was generated from the following file `/home/runner/work/Arduino_DHBW_Spiel/Arduino_DHBW_Spiel/Engineering/COD_ENG_OUT_arduino_code/lib/Game_Logic/logic.hpp`

