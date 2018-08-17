TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5pendel.c

include(deployment.pri)
qtcAddDeployment()

