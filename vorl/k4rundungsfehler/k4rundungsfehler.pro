TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k4rundungsfehler.c

include(deployment.pri)
qtcAddDeployment()

