TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5trapezLsg.c

include(deployment.pri)
qtcAddDeployment()

