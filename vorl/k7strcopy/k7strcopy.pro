TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k7strcopy.c

include(deployment.pri)
qtcAddDeployment()

