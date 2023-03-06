#ifndef MANAGEPAGE_H
#define MANAGEPAGE_H

#include "distrobox.h"
#include <QWidget>
#include <qpushbutton.h>

class ManagePage : public QWidget {
    Q_OBJECT

  public:
    ManagePage(QWidget *parent = nullptr, Distrobox::DBox dbox = {},
               std::string distroIcon = "");

    std::shared_ptr<QPushButton> m_backButton = nullptr;
    Distrobox::DBox m_dbox;
    std::string m_distroIcon;

  public slots:
    void onDeleteButtonClicked();
    void onExportAppClicked();
    void onExportService();

  signals:
    void boxDeleted();
};
#endif // MANAGEPAGE_H
