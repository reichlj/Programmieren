TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    k3SchleifenModuloOperator.c

include(deployment.pri)
qtcAddDeployment()

