//
// Created by stupid_coder_jyy on 2023/5/31.
//

#ifndef PRACTICECONSOLE_IOUTIL_H
#define PRACTICECONSOLE_IOUTIL_H

#include <QString>
#include <QDebug>

#define CONSOLE_BLACK 0
#define CONSOLE_BLUE 1
#define CONSOLE_BROWN 6
#define CONSOLE_WHITE 7
#define CONSOLE_LIGHT_BLUE 9
#define CONSOLE_RED 4

#define debugPrint(str) qDebug() << const_cast<char*>(str)

class QDataStream;

void setConsoleColor(int foreground);
void printWhite(const QString& msg);
void printRed(const QString& msg);
void printYellow(const QString& msg);
void printBlue(const QString& msg);

void checkFolders(const QString& folderPath);
QString concatPath(QString path1, QString path2, QString path3);
QString concatPath(QString path1, QString path2);
#endif //PRACTICECONSOLE_IOUTIL_H
