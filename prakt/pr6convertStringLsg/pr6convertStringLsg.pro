TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6convertStringLsg.c

include(deployment.pri)
qtcAddDeployment()

