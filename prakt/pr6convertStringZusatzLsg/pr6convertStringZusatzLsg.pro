TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6convertStringZusatzLsg.c

include(deployment.pri)
qtcAddDeployment()

