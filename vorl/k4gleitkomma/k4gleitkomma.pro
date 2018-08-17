TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k4gleitkomma.c

include(deployment.pri)
qtcAddDeployment()

