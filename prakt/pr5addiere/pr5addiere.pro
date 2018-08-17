TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5addiere.c

include(deployment.pri)
qtcAddDeployment()

