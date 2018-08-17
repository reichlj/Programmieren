TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr4RuntimeErr1.c

include(deployment.pri)
qtcAddDeployment()

