TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k3bmiv1.c

include(deployment.pri)
qtcAddDeployment()

