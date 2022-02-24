#pragma once
#include "../../Common.h"

#include "../Entity.h"
#include "../../Animation/Animator.h"
#include "../../Animation/Animation.h"

class Snack : public Entity {
public:
    enum SnackType { SmallSnack, BigSnack };
    SnackType snackType;

    Snack(SnackType type, sf::Vector2i gridPos, GameState* gameState);
    void UpdateTileArray(sf::Vector2i newPos) {};
    void Move(const float& deltaTime) override {};
    void Update(const float& deltaTime) override;
    void Draw(sf::RenderWindow& rw) override;
private:
    //todo supprimer l'animateur et les pointeurs d'animation sur le destructeur
    Animator* animator;
    Animation* bigSnackFlickerAnimation;
    void SetupAnimation();
};