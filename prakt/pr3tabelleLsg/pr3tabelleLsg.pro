TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr3tabelleLsg.c

include(deployment.pri)
qtcAddDeployment()

