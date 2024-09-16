# UE5 Game Prototype [WIP] 

- This only includes the code (Blueprint). Full project available in my Google Drive.

## Features 
- Inventory system: Includes player inventory, containers and ship inventory (Shared system between Actors and UI)
- Weapons system: supports single fire and full auto; is hitscan and works as a component on a wepon you want to make it shoot. Works in conjunction with the inventory system for all its effects, animations and ammo). Player is able to kill other players by dealing damage when shooting. Physics objects also react to being shot.
- Animation system: Derived from GASP (Game Animation Sample), modified to include an aim offset for the gun, reload and firing animations, retargeted for the TwinBlast character.
- Ship flight: WIP - To be integrated in C++
