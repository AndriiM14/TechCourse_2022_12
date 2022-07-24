#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "QMessageBox"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QByteArray>
#include "QFontDatabase"

#include "models/api/auth_model.h"
#include "utilsClient/nlohmanQt.h"
#include "api/api.h"

#include "nlohmann/json.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

    void testSlot(int *responeObj);

public slots:
    void testSlot(AuthResponse *responeObj);

    void on_loginBackButton_clicked();

    void on_emailForm_textChanged();

    void on_passwordForm_textChanged();

    void on_loginButton_clicked();

    void loginResult(QNetworkReply *reply);

    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::MainWindow *ui;
    QString loginUrl = "http://localhost:5000/auth";
};

#endif
