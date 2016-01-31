#ifndef CONFIGDIALOG_H
#define CONFIGDIALOG_H

#include <QColor>
#include <QDialog>
#include <QListWidget>

#include "plotvalue.h"

namespace Ui {
class ConfigDialog;
}

class MainWindow;

class ConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigDialog(MainWindow *mainWindow);
    ~ConfigDialog();

    void setUnits(PlotValue::Units units);
    PlotValue::Units units() const;

    void setMass(double mass);
    double mass() const;

    void setPlanformArea(double area);
    double planformArea() const;

    void setMinDrag(double minDrag);
    double minDrag() const;

    void setMinLift(double minLift);
    double minLift() const;

    void setMaxLift(double maxLift);
    double maxLift() const;

    void setMaxLD(double maxLD);
    double maxLD() const;

    void setSimulationTime(int simulationTime);
    int simulationTime() const;

    QColor plotColor(int i) const;

private:
    Ui::ConfigDialog *ui;

private slots:
    void changePage(QListWidgetItem *current, QListWidgetItem *previous);
};

#endif // CONFIGDIALOG_H
