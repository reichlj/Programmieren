TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k5power.c

include(deployment.pri)
qtcAddDeployment()

