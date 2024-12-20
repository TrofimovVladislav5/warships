#include <library/defaults/Initials.h>
#include "input-reader/InputReader.h"
#include "GameController.h"
#include "GameController.h"
#include "input-reader/command/CommandInputReader.h"
#include "input-reader/config/ConfigInputReader.h"

int main(){
    Initials::consoleOutInitials();
    InputReader<>* inputReader = new ConfigInputReader("../run-new.txt");
    GameController controller(inputReader);
    controller.run();

    return 0;
}
