TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    addition.c

include(deployment.pri)
qtcAddDeployment()

