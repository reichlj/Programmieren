TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k3wurzel.c

include(deployment.pri)
qtcAddDeployment()

