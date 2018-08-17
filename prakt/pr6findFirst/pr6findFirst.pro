TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6findFirst.c

include(deployment.pri)
qtcAddDeployment()

