TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5integrationLsg.c

include(deployment.pri)
qtcAddDeployment()

