#include "raylib.h"

int main(void)
{
  const int screenWidth = 800;
  const int screenHeight = 450;

  SetConfigFlags(FLAG_VSYNC_HINT);
  
  InitWindow(screenWidth, screenHeight, "Img Edit");

  //SetTargetFPS(60);
  

  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(WHITE);
    DrawRectangle(0, 0, GetMouseX(), GetMouseY(), RED);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
