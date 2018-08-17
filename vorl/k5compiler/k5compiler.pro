TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k5compiler.c

include(deployment.pri)
qtcAddDeployment()

