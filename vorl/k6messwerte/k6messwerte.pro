TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k6messwerte.c

include(deployment.pri)
qtcAddDeployment()

