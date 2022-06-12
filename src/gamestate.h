#ifndef GAMESTATE_H
#define GAMESTATE_H

enum gamestate { Run, Pause };

class GameState {
 public:

  GameState()
  : current_state(gamestate::Run) {}
  
  void ChangeStateToRun();
  void ChangeStateToPause();
  gamestate GetGameState();

 private:
  gamestate current_state;
};

#endif