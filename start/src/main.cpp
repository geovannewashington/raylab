#include <iostream>
#include <raylib.h>

int main()
{
    std::cout << "Game started.." << std::endl;
    
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "raylib example - basic window");

    // Defining our own custom colors with RGB;
    // Note that Color is a struct.
    //                    R    G    B    a 
    Color lightYellow = {212, 190, 152, 255};

    // Define inital position of circle
    int ballX = 400;
    int ballY = 400;
    // Note that in computing, the position (0, 0) is top-left

    // Define FPS
    SetTargetFPS(69); // We need set this so our program doesn't become super fast.
    //---------------------------------------------------------------------------------------------

    // Main Game Loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
    // Event Handling
    //---------------------------------------------------------------------------------------------

    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_L)) ballX += 10;
    if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_H)) ballX -= 10;
    if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_K)) ballY -= 10;
    if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_J)) ballY += 10;

    // Draw
    //---------------------------------------------------------------------------------------------
    BeginDrawing();
        ClearBackground(BLACK);
        // DrawText(const char *text, int posX, int posY, int fontSize, Color color)
        DrawText("Move with <WASD> or Vim Keys! <hjkl>", 200, 20, 20, lightYellow);
        
        // DrawCircle(int centerX, int centerY, float radius, Color color)
        DrawCircle(ballX, ballY, 20, lightYellow);
    EndDrawing();
    }

    // De-Initialization 
    //---------------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context

    return 0;
}
