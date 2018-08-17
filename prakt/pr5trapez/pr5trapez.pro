TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5trapez.c

include(deployment.pri)
qtcAddDeployment()

