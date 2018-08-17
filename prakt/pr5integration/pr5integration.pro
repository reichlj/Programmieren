TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr5integration.c

include(deployment.pri)
qtcAddDeployment()

