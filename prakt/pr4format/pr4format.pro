TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr4format.c

include(deployment.pri)
qtcAddDeployment()

