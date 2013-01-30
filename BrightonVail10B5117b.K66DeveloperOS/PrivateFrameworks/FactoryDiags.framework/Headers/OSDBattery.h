/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface OSDBattery : NSObject {
	unsigned _IOPMPowerSourceService;	// 4 = 0x4
}
@property(readonly, assign, getter=_getIOPMPowerSourceService) unsigned IOPMPowerSourceService;	// G=0x340dbca5; 
@property(readonly, assign, getter=_deviceChargerConnected) BOOL deviceChargerConnected;	// G=0x340dbfc5; 
@property(readonly, assign, getter=_deviceIsCharging) BOOL deviceIsCharging;	// G=0x340dc0cd; 
@property(readonly, assign, getter=_exactDeviceChargerConnected) BOOL exactDeviceChargerConnected;	// G=0x340dc049; 
@property(readonly, assign, getter=_externalPowerConnected) BOOL externalPowerConnected;	// G=0x340dbfa5; 
@property(readonly, assign, getter=_getBatteryCurrentCapacity) int getBatteryCurrentCapacity;	// G=0x340dbe91; 
@property(readonly, assign, getter=_getBatteryCycleCount) int getBatteryCycleCount;	// G=0x340dbee5; 
@property(readonly, assign, getter=_getBatteryDesignCapacity) int getBatteryDesignCapacity;	// G=0x340dbead; 
@property(readonly, assign, getter=_batteryID) NSString *getBatteryID;	// G=0x340dc0ed; 
@property(readonly, assign, getter=_getBatteryLevel) int getBatteryLevel;	// G=0x340dbe39; 
@property(readonly, assign, getter=_getBatteryManufacturer) NSString *getBatteryManufacturer;	// G=0x340dc221; 
@property(readonly, assign, getter=_getBatteryMaxCapacity) int getBatteryMaxCapacity;	// G=0x340dbec9; 
@property(readonly, assign, getter=_getBatterySerialNumber) NSString *getBatterySerialNumber;	// G=0x340dc189; 
@property(readonly, assign, getter=_getChargerCurrent) int getChargerCurrent;	// G=0x340dbf1d; 
@property(readonly, assign, getter=_getChargerID) int getChargerID;	// G=0x340dbf01; 
@property(readonly, assign, getter=_getChargerType) NSString *getChargerType;	// G=0x340dc2b9; 
@property(readonly, assign, getter=_getRawBatteryVoltage) int getRawBatteryVoltage;	// G=0x340dbf39; 
+ (void)initialize;	// 0x340dc301
+ (id)sharedInstance;	// 0x340dc359
- (id)init;	// 0x340dc471
// declared property getter: - (id)_batteryID;	// 0x340dc0ed
// declared property getter: - (BOOL)_deviceChargerConnected;	// 0x340dbfc5
// declared property getter: - (BOOL)_deviceIsCharging;	// 0x340dc0cd
// declared property getter: - (BOOL)_exactDeviceChargerConnected;	// 0x340dc049
// declared property getter: - (BOOL)_externalPowerConnected;	// 0x340dbfa5
// declared property getter: - (int)_getBatteryCurrentCapacity;	// 0x340dbe91
// declared property getter: - (int)_getBatteryCycleCount;	// 0x340dbee5
// declared property getter: - (int)_getBatteryDesignCapacity;	// 0x340dbead
// declared property getter: - (int)_getBatteryLevel;	// 0x340dbe39
// declared property getter: - (id)_getBatteryManufacturer;	// 0x340dc221
// declared property getter: - (int)_getBatteryMaxCapacity;	// 0x340dbec9
// declared property getter: - (id)_getBatterySerialNumber;	// 0x340dc189
// declared property getter: - (int)_getChargerCurrent;	// 0x340dbf1d
// declared property getter: - (int)_getChargerID;	// 0x340dbf01
// declared property getter: - (id)_getChargerType;	// 0x340dc2b9
// declared property getter: - (unsigned)_getIOPMPowerSourceService;	// 0x340dbca5
// declared property getter: - (int)_getRawBatteryVoltage;	// 0x340dbf39
- (bool)_readBoolProperty:(CFStringRef)property;	// 0x340dbdc5
- (int)_readIntegerProperty:(CFStringRef)property;	// 0x340dbd61
- (void)dealloc;	// 0x340dc509
- (void)setCharging:(BOOL)charging inflow:(BOOL)inflow;	// 0x340dc369
@end
