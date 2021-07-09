#include "mybutton.hpp"

#include <QPainter>
#include <QDebug>

MyButton::MyButton( QWidget* parent ) : QPushButton( parent ) {
    qDebug() << "MyButton!";

    setIcon( QIcon( ":/icons/icons/circle.png" ) );
}

void MyButton::paintEvent( QPaintEvent* ) {
    QPainter painter( this );
    painter.setPen( Qt::red );
    painter.fillRect( rect(), QBrush( Qt::red ) );
}
