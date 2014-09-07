#ifndef FIATSHAMIR_H
#define FIATSHAMIR_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class FiatShamir;
}

class FiatShamir : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit FiatShamir(QWidget *parent = 0);
    int verifica(unsigned int e);  //comprobamos que sea correcta la identificacion
    int isPrimo(int num);  //saber si un numero es primo
    int comprobarDatos();  //comprobar los datos de entrada del usuario
    int MCD(int x, int y);  //maximo comun divisor para saber si "s" es primo con "n", el mcd tiene que ser 1
    ~FiatShamir();
    
private slots:
    void on_salir_clicked();

    void on_guardar_clicked();

    void on_ejecutar_clicked();

    void on_nuevo_clicked();

private:
    Ui::FiatShamir *ui;
    QString p,q,s,iteracion,x,e,resultado;  //p q numeros primos secretos guardados en tercera entidad T de confianza,publica n=p*q
    unsigned long *arrayx,*arraye,n,res;  //los array donde guardamos los datos de iteracion numeros "x" de A y "e" de B
    double a,v,y;       //v es la llave publica de A que guarda en una entidad de confianza T
    int contador;       //A envia a B el numero a(testigo) a=arrayx^2(mod n)
};                      //B elije y envia numero e(reto) e=0 e=1
                        //A envia numero "y" con resultado a B para que compruebe esta su autentificacion.

#endif // FIATSHAMIR_H
