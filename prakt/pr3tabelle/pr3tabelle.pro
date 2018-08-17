TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr3tabelle.c

include(deployment.pri)
qtcAddDeployment()

