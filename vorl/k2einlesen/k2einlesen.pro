TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k2einlesen.c

include(deployment.pri)
qtcAddDeployment()

