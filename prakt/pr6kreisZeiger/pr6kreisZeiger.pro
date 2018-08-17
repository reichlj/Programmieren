TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6kreisZeiger.c

include(deployment.pri)
qtcAddDeployment()

