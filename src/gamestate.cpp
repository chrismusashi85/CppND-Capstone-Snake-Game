#include "gamestate.h"


void GameState::ChangeStateToRun() {
  current_state = gamestate::Run;
}

void GameState::ChangeStateToPause() {
  current_state = gamestate::Pause;
}

gamestate GameState::GetGameState() {
  return current_state;
}
