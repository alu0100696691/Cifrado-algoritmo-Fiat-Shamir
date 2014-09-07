#include "fiatshamir.h"
#include "ui_fiatshamir.h"

FiatShamir::FiatShamir(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FiatShamir)
{

    contador=0;
    ui->setupUi(this);


}

FiatShamir::~FiatShamir()
{
    delete ui;
}

void FiatShamir::on_salir_clicked()
{
    close();
}

void FiatShamir::on_guardar_clicked()   //guardar datos de entrada
{

    QMessageBox msgBox;  //ventanas de informacion

    //entrada de datos
    if(contador==0){  //si no hemos metido ningun dato contador es igual a cero

        arrayx = new unsigned long[ui->iteracionw->text().toInt()];  //creamos los array para guardar las iteraciones
        arraye = new unsigned long[ui->iteracionw->text().toInt()];
        p=ui->pw->text();  //Entidad confiable guarda en secreto p y q y publica n
        q=ui->qw->text();
        s=ui->sw->text();
        n=p.toInt()*q.toInt();

        res = comprobarDatos(); //comprobamos que (p,q) sean numeros primos y (x , s) tienen que ser mayores a cero y menores a (n) y s es primo con n
        if(res == 1){
                iteracion=ui->iw->text();
                arrayx[contador]=ui->xw->text().toInt();
                arraye[contador]=ui->ew->text().toInt();
                ui->xw->clear();
                ui->ew->clear();
                contador++;  //contador de las iteraciones
                ui->iteracionw->setText(QString::number(contador)+"ª iteracion:");
                //desactivamos las cajas de texto
                ui->pw->setEnabled(0);
                ui->qw->setEnabled(0);
                ui->sw->setEnabled(0);
                ui->iw->setEnabled(0);
                if(contador==iteracion.toInt()){  //si llegamos a las iteraciones bloqueamos la entrada de x y e
                        ui->xw->setEnabled(0);
                        ui->ew->setEnabled(0);

                }
        }
        else{
            msgBox.information(this,"ERROR","Los numeros p,q deben ser primos.Numeros x y s tienen que ser mayores a cero y menores a n.Y s es primo con n");
            msgBox.exec();
        }
    }
    else if(contador<iteracion.toInt()){  //si no hemos llegado al limite de iteraciones guardamos los datos
        ui->iteracionw->setText(QString::number(contador)+"ª iteracion:");
        arrayx[contador]=ui->xw->text().toInt();
        arraye[contador]=ui->ew->text().toInt();
        ui->xw->clear();
        ui->ew->clear();
        contador++;  //siguiente iteracion
        if(contador==iteracion.toInt()){  //si llegamos a las iteraciones bloqueamos la entrada de x y e
                ui->xw->setEnabled(0);
                ui->ew->setEnabled(0);
        }
    }


}

void FiatShamir::on_ejecutar_clicked()  //proceso de autentificacion
{
    int acepta;
    QMessageBox msgBox;
    if(ui->xw->isEnabled() == 0) {    //si se han metido datos en la entrada de datos se ejecuta el proceso
        v=(s.toInt()*s.toInt())%n;  //v es la clave publica de A que guarda en entidad de confianza T
        ui->nw->setText(QString::number(n));  //llenamos las cajas de la ventana
        ui->vw->setText(QString::number(v));
        for(int i=0;i<iteracion.toInt();i++){  //calculamos las distintas iteraciones
            a=(arrayx[i]*arrayx[i])%n;
                if(arraye[i]==0){  //si e es igual a cero
                    y=arrayx[i]%n;  //y=x(mod n) //lo que A envia a B como respuesta a B

                }
                else if(arraye[i]==1){  //si e es igual a uno
                    y=(arrayx[i]*s.toInt())%n;  //y=xs(mod n)  //lo que A envia a B como respuesta a B
                }

                //EN B COMPROBAR SI ACEPTA O DENIEGA LA INDENTIFICACION
                acepta=verifica(arraye[i]);
                if(acepta==1){
                    resultado.append("ACEPTADA: ");
                }
                else{
                    resultado.append("DENEGADA: ");
                }
                resultado.append(QString::number(i+1)+"ª iteracion: "+" a= "+QString::number(a)+" Comprobar "+QString::number(y)+"^2= ");
                if(arraye[i] == 0) {
                    resultado.append(QString::number(int(a))+"(mod"+QString::number(n)+")\n");
                }
                else if(arraye[i] == 1) {
                    resultado.append(QString::number(int(a))+"*"+QString::number(int(v))+"(mod"+QString::number(n)+")\n");
                }

                ui->resultadosw->setText(resultado);
                ui->resultadosw->show();
            }
    }
    else {
        msgBox.information(this,"ERROR","Recuerde, debe completar la entrada de datos antes de ejecutar.");
        msgBox.exec();
    }
}

int FiatShamir::verifica(unsigned int e)  //comprobar si es correcta la identificacion en B
{
    if(e==0){
        res=long(a)%n;
    }
    else if(e==1){
        res=long(a*v)%n;
    }
    if(long(y*y)%n == res){  //comprobamos lo que nos mando A (a y)
        return 1;  //correcto
    }
    else{
        return 0; //incorrecto
    }

}

int FiatShamir::isPrimo(int num){  //saber si un numero es primo
    int resto=0,nc=0;
    for(int i=1;i<=num;i++){
        resto=num%i;
        if(resto==0){
            nc++;
        }
    }
    if(nc==2){
        return 1;  //es primo
    }
    else{
        return 0;  //no es primo
    }
    nc=0;
}

int FiatShamir::comprobarDatos() //comprobamos que p,q sean numeros primos y s es primo con N //comprobamos que 0<x<N  0<s<N
{
    if(isPrimo( p.toInt())==1 && isPrimo(q.toInt())==1 ){
        qDebug()<<"p y q son primos";
        if(ui->xw->text().toInt() > 0 && ui->xw->text().toInt() < n && s.toInt() > 0 && s.toInt() < n && MCD(s.toInt(),n)==1){
            qDebug()<<"Se cumple: 0<x<n\t0<s<n\ts es primo con n";
            return 1;  //cumple con los requisitos
       }
    }
     return 0; //no cumple con los requisitos
}

int FiatShamir::MCD(int x, int y)  //maximo comun divisor para saber si s es primo con n, el mcd tiene que ser 1
{
    if(y==0)
        return x;
    else
        return MCD(y, x%y);
}



void FiatShamir::on_nuevo_clicked()  //limpiamos todo para comenzar de nuevo
{
    ui->pw->clear();
    ui->qw->clear();
    ui->sw->clear();
    ui->ew->clear();
    ui->iw->clear();
    ui->xw->clear();
    ui->ew->clear();
    ui->nw->clear();
    ui->vw->clear();
    ui->resultadosw->clear();
    ui->iteracionw->clear();
    ui->iteracionw->setText("Iteracion:");
    p.clear();
    q.clear();
    s.clear();
    x.clear();
    e.clear();
    resultado.clear();
    n=0;
    v=0;
    a=0;
    res=0;
    contador=0;
    delete arraye,arraye;

    ui->pw->setEnabled(1);
    ui->qw->setEnabled(1);
    ui->sw->setEnabled(1);
    ui->iw->setEnabled(1);
    ui->xw->setEnabled(1);
    ui->ew->setEnabled(1);
}
