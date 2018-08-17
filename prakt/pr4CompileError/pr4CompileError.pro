TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    pr4CompileError.c

include(deployment.pri)
qtcAddDeployment()

