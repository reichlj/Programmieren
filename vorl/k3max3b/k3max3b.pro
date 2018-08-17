TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k3max3b.c

include(deployment.pri)
qtcAddDeployment()

