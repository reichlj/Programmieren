TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    einlesen.c

include(deployment.pri)
qtcAddDeployment()

