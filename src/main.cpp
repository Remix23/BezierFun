#include <raylib.h>
#include <box.hpp>
#include <settings.hpp>
#include <timeline.hpp>
#include <bezier.hpp>


void init ()
{
    InitWindow(WIDTH, HEIGHT, TITLE);
    SetTargetFPS(FPS);
}

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //------------------------------------------------------------------------------------
    // Main game loop

    init();
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}