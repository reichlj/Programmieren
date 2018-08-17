TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    bmi.c

include(deployment.pri)
qtcAddDeployment()

