#include "game.hpp"

int main(int argc, char *argv[])
{
    App *app = CreateApp();

    app->Start();
    while (app->Running())
    {
        app->HandleEvents();
        app->Update();
        app->Draw();
        SDL_Delay(1000 / 60);
    }
    app->Finish();

    return 0;
}