TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr4RuntimeError3.c

include(deployment.pri)
qtcAddDeployment()

