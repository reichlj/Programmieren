TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k3quadratfor.c

include(deployment.pri)
qtcAddDeployment()

