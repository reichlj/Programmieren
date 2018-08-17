TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6kreisZeigerLsg.c

include(deployment.pri)
qtcAddDeployment()

