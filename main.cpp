#include <QApplication>
#include <QPushButton>
#include <QPushButton>
#include <QPushButton>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, Aleksandr Vladimirovich!");
button.resize(200, 60);
button.show( );
 
return app.exec( );
}
