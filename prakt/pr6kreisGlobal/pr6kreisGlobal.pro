TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6kreisGlobal.c

include(deployment.pri)
qtcAddDeployment()

