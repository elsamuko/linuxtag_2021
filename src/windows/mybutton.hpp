#ifndef MYBUTTON_HPP
#define MYBUTTON_HPP

#include <QPushButton>

class MyButton : public QPushButton {
        Q_OBJECT
    public:
        explicit MyButton( QWidget* parent = nullptr );

    protected:
        virtual void paintEvent( QPaintEvent* ) override;

    signals:

};

#endif // MYBUTTON_HPP
