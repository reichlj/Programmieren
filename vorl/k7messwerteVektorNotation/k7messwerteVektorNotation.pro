TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k7messwerteVektorNotation.c

include(deployment.pri)
qtcAddDeployment()
