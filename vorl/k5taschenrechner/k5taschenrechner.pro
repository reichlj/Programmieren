TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k5taschenrechner.c

include(deployment.pri)
qtcAddDeployment()

