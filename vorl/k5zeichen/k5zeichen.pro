TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k5zeichen.c

include(deployment.pri)
qtcAddDeployment()

