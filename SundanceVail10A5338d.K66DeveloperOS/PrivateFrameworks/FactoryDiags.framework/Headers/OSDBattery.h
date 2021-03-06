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
@property(readonly, assign, getter=_getIOPMPowerSourceService) unsigned IOPMPowerSourceService;	// G=0x32a1f441; 
@property(readonly, assign, getter=_deviceChargerConnected) BOOL deviceChargerConnected;	// G=0x32a1f761; 
@property(readonly, assign, getter=_deviceIsCharging) BOOL deviceIsCharging;	// G=0x32a1f869; 
@property(readonly, assign, getter=_exactDeviceChargerConnected) BOOL exactDeviceChargerConnected;	// G=0x32a1f7e5; 
@property(readonly, assign, getter=_externalPowerConnected) BOOL externalPowerConnected;	// G=0x32a1f741; 
@property(readonly, assign, getter=_getBatteryCurrentCapacity) int getBatteryCurrentCapacity;	// G=0x32a1f62d; 
@property(readonly, assign, getter=_getBatteryCycleCount) int getBatteryCycleCount;	// G=0x32a1f681; 
@property(readonly, assign, getter=_getBatteryDesignCapacity) int getBatteryDesignCapacity;	// G=0x32a1f649; 
@property(readonly, assign, getter=_batteryID) NSString *getBatteryID;	// G=0x32a1f889; 
@property(readonly, assign, getter=_getBatteryLevel) int getBatteryLevel;	// G=0x32a1f5d5; 
@property(readonly, assign, getter=_getBatteryManufacturer) NSString *getBatteryManufacturer;	// G=0x32a1f9bd; 
@property(readonly, assign, getter=_getBatteryMaxCapacity) int getBatteryMaxCapacity;	// G=0x32a1f665; 
@property(readonly, assign, getter=_getBatterySerialNumber) NSString *getBatterySerialNumber;	// G=0x32a1f925; 
@property(readonly, assign, getter=_getChargerCurrent) int getChargerCurrent;	// G=0x32a1f6b9; 
@property(readonly, assign, getter=_getChargerID) int getChargerID;	// G=0x32a1f69d; 
@property(readonly, assign, getter=_getChargerType) NSString *getChargerType;	// G=0x32a1fa55; 
@property(readonly, assign, getter=_getRawBatteryVoltage) int getRawBatteryVoltage;	// G=0x32a1f6d5; 
+ (void)initialize;	// 0x32a1fa9d
+ (id)sharedInstance;	// 0x32a1faf5
- (id)init;	// 0x32a1fc0d
// declared property getter: - (id)_batteryID;	// 0x32a1f889
// declared property getter: - (BOOL)_deviceChargerConnected;	// 0x32a1f761
// declared property getter: - (BOOL)_deviceIsCharging;	// 0x32a1f869
// declared property getter: - (BOOL)_exactDeviceChargerConnected;	// 0x32a1f7e5
// declared property getter: - (BOOL)_externalPowerConnected;	// 0x32a1f741
// declared property getter: - (int)_getBatteryCurrentCapacity;	// 0x32a1f62d
// declared property getter: - (int)_getBatteryCycleCount;	// 0x32a1f681
// declared property getter: - (int)_getBatteryDesignCapacity;	// 0x32a1f649
// declared property getter: - (int)_getBatteryLevel;	// 0x32a1f5d5
// declared property getter: - (id)_getBatteryManufacturer;	// 0x32a1f9bd
// declared property getter: - (int)_getBatteryMaxCapacity;	// 0x32a1f665
// declared property getter: - (id)_getBatterySerialNumber;	// 0x32a1f925
// declared property getter: - (int)_getChargerCurrent;	// 0x32a1f6b9
// declared property getter: - (int)_getChargerID;	// 0x32a1f69d
// declared property getter: - (id)_getChargerType;	// 0x32a1fa55
// declared property getter: - (unsigned)_getIOPMPowerSourceService;	// 0x32a1f441
// declared property getter: - (int)_getRawBatteryVoltage;	// 0x32a1f6d5
- (bool)_readBoolProperty:(CFStringRef)property;	// 0x32a1f561
- (int)_readIntegerProperty:(CFStringRef)property;	// 0x32a1f4fd
- (void)dealloc;	// 0x32a1fca5
- (void)setCharging:(BOOL)charging inflow:(BOOL)inflow;	// 0x32a1fb05
@end

