/********************************************************************************
** Form generated from reading UI file 'guessnum.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESSNUM_H
#define UI_GUESSNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Guessnum
{
public:
    QLCDNumber *lcdNumberShowNum;
    QTextEdit *textEdit;
    QPushButton *pushButton4;
    QPushButton *pushButton9;
    QPushButton *pushButton8;
    QPushButton *pushButton7;
    QPushButton *pushButton6;
    QPushButton *pushButton5;
    QPushButton *pushButton3;
    QPushButton *pushButton2;
    QPushButton *pushButton1;
    QPushButton *pushButton0;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonExit;
    QLabel *label;
    QTextBrowser *textprompt;
    QLabel *labelError;
    QLCDNumber *lcdNumberTime;
    QTextBrowser *textError;
    QLabel *labelMainPic;
    QPushButton *pushButtonDel;
    QLabel *label_screen;
    QToolButton *toolButton;

    void setupUi(QWidget *Guessnum)
    {
        if (Guessnum->objectName().isEmpty())
            Guessnum->setObjectName(QStringLiteral("Guessnum"));
        Guessnum->resize(500, 550);
        Guessnum->setMinimumSize(QSize(500, 550));
        Guessnum->setMaximumSize(QSize(500, 550));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(181, 244, 247, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Guessnum->setPalette(palette);
        lcdNumberShowNum = new QLCDNumber(Guessnum);
        lcdNumberShowNum->setObjectName(QStringLiteral("lcdNumberShowNum"));
        lcdNumberShowNum->setEnabled(true);
        lcdNumberShowNum->setGeometry(QRect(10, 10, 281, 111));
        QPalette palette1;
        QBrush brush2(QColor(204, 83, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(118, 116, 108, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        lcdNumberShowNum->setPalette(palette1);
        lcdNumberShowNum->setAutoFillBackground(false);
        lcdNumberShowNum->setFrameShape(QFrame::NoFrame);
        lcdNumberShowNum->setFrameShadow(QFrame::Raised);
        lcdNumberShowNum->setLineWidth(0);
        lcdNumberShowNum->setMidLineWidth(0);
        lcdNumberShowNum->setSmallDecimalPoint(false);
        lcdNumberShowNum->setDigitCount(4);
        lcdNumberShowNum->setDigitCount(4);
        lcdNumberShowNum->setMode(QLCDNumber::Dec);
        lcdNumberShowNum->setSegmentStyle(QLCDNumber::Filled);
        lcdNumberShowNum->setProperty("value", QVariant(0));
        lcdNumberShowNum->setProperty("intValue", QVariant(0));
        textEdit = new QTextEdit(Guessnum);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(300, 10, 191, 391));
        QPalette palette2;
        QBrush brush4(QColor(207, 85, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(193, 84, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        QBrush brush6(QColor(184, 244, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush7(QColor(236, 233, 216, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        textEdit->setPalette(palette2);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(1);
        pushButton4 = new QPushButton(Guessnum);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setGeometry(QRect(440, 420, 51, 51));
        QPalette palette3;
        QBrush brush8(QColor(0, 255, 42, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton4->setPalette(palette3);
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton4->setFont(font1);
        pushButton9 = new QPushButton(Guessnum);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setGeometry(QRect(440, 480, 51, 51));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton9->setPalette(palette4);
        pushButton9->setFont(font1);
        pushButton8 = new QPushButton(Guessnum);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setGeometry(QRect(380, 480, 51, 51));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton8->setPalette(palette5);
        pushButton8->setFont(font1);
        pushButton7 = new QPushButton(Guessnum);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setGeometry(QRect(320, 480, 51, 51));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton7->setPalette(palette6);
        pushButton7->setFont(font1);
        pushButton6 = new QPushButton(Guessnum);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setGeometry(QRect(260, 480, 51, 51));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton6->setPalette(palette7);
        pushButton6->setFont(font1);
        pushButton5 = new QPushButton(Guessnum);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setGeometry(QRect(200, 480, 51, 51));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton5->setPalette(palette8);
        pushButton5->setFont(font1);
        pushButton3 = new QPushButton(Guessnum);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(380, 420, 51, 51));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton3->setPalette(palette9);
        pushButton3->setFont(font1);
        pushButton2 = new QPushButton(Guessnum);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(320, 420, 51, 51));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton2->setPalette(palette10);
        pushButton2->setFont(font1);
        pushButton1 = new QPushButton(Guessnum);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(260, 420, 51, 51));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton1->setPalette(palette11);
        pushButton1->setFont(font1);
        pushButton0 = new QPushButton(Guessnum);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        pushButton0->setGeometry(QRect(200, 420, 51, 51));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButton0->setPalette(palette12);
        pushButton0->setFont(font1);
        pushButtonStart = new QPushButton(Guessnum);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setEnabled(true);
        pushButtonStart->setGeometry(QRect(10, 420, 101, 51));
        QPalette palette13;
        QBrush brush9(QColor(0, 255, 29, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush10(QColor(179, 155, 240, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        pushButtonStart->setPalette(palette13);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        pushButtonStart->setFont(font2);
        pushButtonStart->setAutoFillBackground(true);
        pushButtonStart->setIconSize(QSize(100, 50));
        pushButtonStart->setAutoDefault(false);
        pushButtonStart->setFlat(false);
        pushButtonExit = new QPushButton(Guessnum);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(10, 480, 101, 51));
        QPalette palette14;
        QBrush brush11(QColor(198, 169, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush11);
        QBrush brush12(QColor(205, 169, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        QBrush brush13(QColor(193, 157, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush13);
        QBrush brush14(QColor(206, 165, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        pushButtonExit->setPalette(palette14);
        pushButtonExit->setFont(font2);
        pushButtonExit->setAutoFillBackground(true);
        pushButtonExit->setAutoDefault(true);
        pushButtonExit->setFlat(false);
        label = new QLabel(Guessnum);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 301, 401));
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setFrameShadow(QFrame::Plain);
        label->setText(QStringLiteral("time out!"));
        label->setScaledContents(true);
        label->setWordWrap(false);
        label->setOpenExternalLinks(false);
        textprompt = new QTextBrowser(Guessnum);
        textprompt->setObjectName(QStringLiteral("textprompt"));
        textprompt->setGeometry(QRect(300, 0, 201, 401));
        QPalette palette15;
        QBrush brush15(QColor(0, 255, 247, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush15);
        QBrush brush16(QColor(70, 109, 191, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush15);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        textprompt->setPalette(palette15);
        labelError = new QLabel(Guessnum);
        labelError->setObjectName(QStringLiteral("labelError"));
        labelError->setGeometry(QRect(10, 60, 291, 281));
        labelError->setTextFormat(Qt::AutoText);
        labelError->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/face-1.png")));
        labelError->setScaledContents(true);
        lcdNumberTime = new QLCDNumber(Guessnum);
        lcdNumberTime->setObjectName(QStringLiteral("lcdNumberTime"));
        lcdNumberTime->setGeometry(QRect(-20, 320, 281, 71));
        QPalette palette16;
        QBrush brush17(QColor(203, 69, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush17);
        QBrush brush18(QColor(255, 255, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush18);
        QBrush brush19(QColor(255, 255, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(207, 230, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush20);
        QBrush brush21(QColor(247, 249, 99, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush21);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush19);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush21);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush21);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush21);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush19);
        lcdNumberTime->setPalette(palette16);
        lcdNumberTime->setFrameShape(QFrame::NoFrame);
        lcdNumberTime->setSmallDecimalPoint(false);
        lcdNumberTime->setDigitCount(3);
        textError = new QTextBrowser(Guessnum);
        textError->setObjectName(QStringLiteral("textError"));
        textError->setEnabled(true);
        textError->setGeometry(QRect(300, 0, 201, 401));
        QPalette palette17;
        QBrush brush22(QColor(3, 125, 255, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush22);
        QBrush brush23(QColor(255, 208, 253, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush22);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        textError->setPalette(palette17);
        labelMainPic = new QLabel(Guessnum);
        labelMainPic->setObjectName(QStringLiteral("labelMainPic"));
        labelMainPic->setGeometry(QRect(-2, 120, 302, 201));
        labelMainPic->setPixmap(QPixmap(QString::fromUtf8("../image/20090129.gif")));
        pushButtonDel = new QPushButton(Guessnum);
        pushButtonDel->setObjectName(QStringLiteral("pushButtonDel"));
        pushButtonDel->setGeometry(QRect(120, 420, 71, 111));
        QPalette palette18;
        QBrush brush24(QColor(0, 255, 38, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush24);
        QBrush brush25(QColor(0, 227, 3, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush25);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush24);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush25);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        pushButtonDel->setPalette(palette18);
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        pushButtonDel->setFont(font4);
        label_screen = new QLabel(Guessnum);
        label_screen->setObjectName(QStringLiteral("label_screen"));
        label_screen->setGeometry(QRect(0, 0, 501, 551));
        label_screen->setScaledContents(true);
        toolButton = new QToolButton(Guessnum);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(190, 30, 151, 91));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        toolButton->setFont(font5);
        toolButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/myheart.png);"));

        retranslateUi(Guessnum);

        pushButtonStart->setDefault(false);
        pushButtonExit->setDefault(false);


        QMetaObject::connectSlotsByName(Guessnum);
    } // setupUi

    void retranslateUi(QWidget *Guessnum)
    {
        Guessnum->setWindowTitle(QApplication::translate("Guessnum", "Guessnum", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Guessnum", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:18pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"></p></body></html>", Q_NULLPTR));
        pushButton4->setText(QApplication::translate("Guessnum", "4", Q_NULLPTR));
        pushButton9->setText(QApplication::translate("Guessnum", "9", Q_NULLPTR));
        pushButton8->setText(QApplication::translate("Guessnum", "8", Q_NULLPTR));
        pushButton7->setText(QApplication::translate("Guessnum", "7", Q_NULLPTR));
        pushButton6->setText(QApplication::translate("Guessnum", "6", Q_NULLPTR));
        pushButton5->setText(QApplication::translate("Guessnum", "5", Q_NULLPTR));
        pushButton3->setText(QApplication::translate("Guessnum", "3", Q_NULLPTR));
        pushButton2->setText(QApplication::translate("Guessnum", "2", Q_NULLPTR));
        pushButton1->setText(QApplication::translate("Guessnum", "1", Q_NULLPTR));
        pushButton0->setText(QApplication::translate("Guessnum", "0", Q_NULLPTR));
        pushButtonStart->setText(QApplication::translate("Guessnum", "\345\274\200 \345\247\213", Q_NULLPTR));
        pushButtonExit->setText(QApplication::translate("Guessnum", "\351\200\200 \345\207\272", Q_NULLPTR));
        textprompt->setHtml(QApplication::translate("Guessnum", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">guess right\357\274\201</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-size:14pt; font-weight:600;\">\347\202\271\345\207\273\342\200\234\345\274\200\345\247\213\342\200\235\347\273\247\347\273\255</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\347\202\271\345\207\273\342\200\234\351\200\200\345\207\272\342\200\235\345\205\263\351\227\255</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p></body></html>", Q_NULLPTR));
        labelError->setText(QString());
        textError->setHtml(QApplication::translate("Guessnum", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">time out!</span><span style=\" font-size:14pt; font-weight:600;\"> </span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\347\202\271\345\207\273\342\200\234\345\274\200\345\247\213\342\200\235\347\273\247\347\273\255</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\347\202\271\345\207\273\342\200\234\351\200\200\345\207\272\342\200\235\345\205\263\351\227\255</span></p></body></html>", Q_NULLPTR));
        labelMainPic->setText(QString());
        pushButtonDel->setText(QApplication::translate("Guessnum", "\345\233\236\345\210\240", Q_NULLPTR));
        label_screen->setText(QString());
        toolButton->setText(QApplication::translate("Guessnum", "\345\274\200\345\247\213\346\270\270\346\210\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Guessnum: public Ui_Guessnum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESSNUM_H
