/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "NSObject.h"


@protocol CBCentralManagerDelegate <NSObject>
@optional
- (void)centralManager:(id)manager didConnectPeripheral:(id)peripheral;
- (void)centralManager:(id)manager didDisconnectPeripheral:(id)peripheral error:(id)error;
- (void)centralManager:(id)manager didDiscoverPeripheral:(id)peripheral advertisementData:(id)data RSSI:(id)rssi;
- (void)centralManager:(id)manager didFailToConnectPeripheral:(id)connectPeripheral error:(id)error;
- (void)centralManager:(id)manager didRetrieveConnectedPeripherals:(id)peripherals;
- (void)centralManager:(id)manager didRetrievePeripherals:(id)peripherals;
@required
- (void)centralManagerDidUpdateState:(id)centralManager;
@end

