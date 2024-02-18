//
// Created by stupid_coder_jyy on 2024/2/16.
//

#ifndef LIFERHYTHM_TITLEDDIALOG_H
#define LIFERHYTHM_TITLEDDIALOG_H

#include <QDialog>
#include "StandardWidget.h"
#include "ImgLabel.h"
#include "Widget.h"
#include "Namespaces.h"

class TextLabel;

LR_BEGIN

class DialogCloseButton;

class TitledDialog : public QDialog, public StandardWidget {
    friend class LifeRhythm;
private:
    DialogCloseButton* closeButton{};
    TextLabel* titleLabel{};
public:
    explicit TitledDialog(QWidget* parent);
    void setContent(const QString& title, QWidget* widget);
    void onFinishedParsing(Handlers &handlers, NBT *widgetTag) override;
    static void mainInit();
};

class DialogCloseButton : public ImgLabel {
public:
    explicit DialogCloseButton(QWidget* parent);
protected:
    void mouseReleaseEvent(QMouseEvent *ev) override;
    void enterEvent(QEvent *event) override;
    void leaveEvent(QEvent *event) override;
};

class TopWidget : public Widget {
private:
    bool drag{};
    QPoint mouseStartPos{};
    QPoint windowPos{};
public:
    explicit TopWidget(QWidget* parent);
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
};

LR_END

#endif //LIFERHYTHM_TITLEDDIALOG_H
