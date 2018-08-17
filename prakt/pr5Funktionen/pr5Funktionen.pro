TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5Funktionen.c

include(deployment.pri)
qtcAddDeployment()

