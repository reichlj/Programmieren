TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k4overflowint.c

include(deployment.pri)
qtcAddDeployment()

