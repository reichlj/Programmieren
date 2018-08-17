TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    stromrechnungLsg.c

include(deployment.pri)
qtcAddDeployment()

