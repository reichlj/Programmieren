TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr3printf.c

include(deployment.pri)
qtcAddDeployment()

