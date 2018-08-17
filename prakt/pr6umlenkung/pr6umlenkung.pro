TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6umlenkung.c

include(deployment.pri)
qtcAddDeployment()

