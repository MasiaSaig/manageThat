#include <iostream>
#include "File.h"
#include "Directory.h"


int main()
{
    File b1("nazwa_pliku.txt");
    b1.init(".");
    b1.appendLineTxt("Tekst do pliku b1");

    File b2("nazwa_pliku2.txt");
    b2.init(".");
    b2.appendLineTxt("Tekst do pliku b2");
    b1.append(b2);
    b2.deleteFile();
    
    Directory d1("myDirectory");
    d1.init(".");
    d1.move(b1);

}
