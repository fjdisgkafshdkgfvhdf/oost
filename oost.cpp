#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    cout << "  .,.,.        .,.,.       .,.,.,    .,.,.,.,.,." << endl;
    cout << " .,.,.,.,.    .,.,.,.,.    .,.,.,.,   .,.,.,.,.,." << endl;
    cout << ",.,.  .,.,   ,.,.  .,.,   .,.,.         .,.,.   " << endl;
    cout << ",.,.  .,.,   ,.,.  .,.,     .,.,.,.     .,.,.   " << endl;
    cout << " .,.,.,.,.    .,.,.,.,.    .,.,.,.,     .,.,.   " << endl;
    cout << "  .,.,.        .,.,.       .,.,.,       .,.,.   " << endl;
    cout << endl;

    cout << "WELCOME TO Ondra Os Terminal" << endl;
    cout << "____________________________" << endl;
    string neco;

    while (true) {
        cout << "> ";
        getline(cin, neco);

        if (neco == "hello") {
            cout << "hello" << endl;
        }

        if (neco == "help") {
            cout << "Here are all commands" << endl;
            cout << "hello" << endl;
            cout << "reset" << endl;
            cout << "execute" << endl;
            cout << "git hub" << endl;
            cout << "credits" << endl;
            cout << "systeminfo" << endl;
            cout << "date" << endl;
            cout << "update" << endl;
            cout << "exit" << endl;
            cout << "ip" << endl;
            cout << "files" << endl;
        }

        if (neco == "reset") {
            cout << "  .,.,.        .,.,.       .,.,.,    .,.,.,.,.,." << endl;
            cout << " .,.,.,.,.    .,.,.,.,.    .,.,.,.,   .,.,.,.,.,." << endl;
            cout << ",.,.  .,.,   ,.,.  .,.,   .,.,.         .,.,.   " << endl;
            cout << ",.,.  .,.,   ,.,.  .,.,     .,.,.,.     .,.,.   " << endl;
            cout << " .,.,.,.,.    .,.,.,.,.    .,.,.,.,     .,.,.   " << endl;
            cout << "  .,.,.        .,.,.       .,.,.,       .,.,.   " << endl;
            cout << endl;
            cout << "welcome to Ondra Os Terminal" << endl;
            cout << "____________________________" << endl;
        }

        if (neco == "git hub") {
            cout << "username: verstappenpythoncpp" << endl;
        }

        if (neco == "credits") {
            cout << "development: verstappenpythoncpp" << endl;
            cout << "special: bony-cz" << endl;
        }

        if (neco == "exit") {
            cout << "program executed" << endl;
            break;
        }

        if (neco == "systeminfo") {
            cout << "you are in oost version 0.5" << endl;
        }

        if (neco == "date") {
            cout << "today is monday 18 of may" << endl;
        }

        if (neco == "update") {
            cout << "oost version 0.5 is the newest version avalible" << endl;
        }

        if (neco == "ip") {
            cout << "your ip is: 1.2.6.8.6.9.3.5.8.1.3.2." << endl;
        }
        
        if (neco == "files") {
            cout << "verstappen33" << endl;
            cout << "forza ferrari" << endl;
        }
        
        // OPRAVENO: Přidány uvozovky kolem názvu souboru/příkazu
        if (neco == "verstappen33") {
            cout << "file opened" << endl;
            cout << ",.,.,.   ,.,.,." << endl;
            cout << "    ,.       ,." << endl;
            cout << ",.,.,.   ,.,.,." << endl;
            cout << "    ,.       ,." << endl;
            cout << ",.,.,.   ,.,.,." << endl;
        }
        if (neco == forza ferrari) {
            cout << "    .,.   ,.,.,.,." << endl;
cout << "   .,.,.  ,.       .,.,.,.   ,.,.,.   ,.,.,.   ,.,.,.   ,.,.,." << endl;
cout << "   ,. ,.  ,.,.,.   ,.       ,.   ,.   ,.  ,.   ,.      ,." << endl;
cout << "  ,.,.,.  ,.       ,.       ,.   ,.   ,.  ,.        ,. ," << endl;
cout << "  ,.  ,.  ,.       ,.,.,.   ,.,.,.   ,.   ,.  ,.,.,.   ,.,.,." << endl;
cout << "          ==       =========================================" << endl;
cout << "                   -----------------------------------------" << endl;
cout << "                   ........................................." << endl;

        }

        cout << endl;
    }

    return 0;
}
