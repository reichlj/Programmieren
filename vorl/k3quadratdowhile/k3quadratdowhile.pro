TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k3quadratdowhile.c

include(deployment.pri)
qtcAddDeployment()

