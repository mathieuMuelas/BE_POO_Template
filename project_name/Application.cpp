#include "Application.h"
#include <Arduino.h>

Application::Application() {}
Application::~Application() {}

void Application::init(void)
{
    Serial.begin(115200);
    delay(500);

    Serial.println("ETAPE 1 : APPLICATION DEMARREE");

    clignotant.init();

    Serial.println("ETAPE 2 : CLIGNOTANT INITIALISE");
}

void Application::run(void)
{
    Serial.println("ETAPE 3 : APPLICATION EN COURS");
    clignotant.actualiser();
    delay(500);
}