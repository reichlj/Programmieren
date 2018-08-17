TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr6findFirstLsg.c

include(deployment.pri)
qtcAddDeployment()

