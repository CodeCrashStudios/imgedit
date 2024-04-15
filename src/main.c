#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Img Edit");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(WHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

