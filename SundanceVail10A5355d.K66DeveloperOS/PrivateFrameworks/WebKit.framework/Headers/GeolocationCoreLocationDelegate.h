/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class CLLocationManager;
@protocol GeolocationUpdateListener;

@interface GeolocationCoreLocationDelegate : NSObject <CLLocationManagerDelegate> {
	double m_accuracy;	// 4 = 0x4
	id<GeolocationUpdateListener> m_positionListener;	// 12 = 0xc
	CLLocationManager *m_locationManager;	// 16 = 0x10
	BOOL _isWaitingForAuthorization;	// 20 = 0x14
	int _lastAuthorizationStatus;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL isWaitingForAuthorization;	// G=0x316cafe5; S=0x316caff5; @synthesize=_isWaitingForAuthorization
@property(assign, nonatomic) int lastAuthorizationStatus;	// G=0x316cb005; S=0x316cb015; @synthesize=_lastAuthorizationStatus
- (id)initWithListener:(id)listener;	// 0x316ca589
- (void)createLocationManager;	// 0x316ca4e1
- (void)dealloc;	// 0x316ca5dd
- (BOOL)handleExternalAuthorizationStatusChange:(int)change;	// 0x316ca7d9
// declared property getter: - (BOOL)isWaitingForAuthorization;	// 0x316cafe5
// declared property getter: - (int)lastAuthorizationStatus;	// 0x316cb005
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;	// 0x316ca9f1
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x316caf59
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;	// 0x316caea1
- (void)sendError:(id)error;	// 0x316ca63d
- (void)sendGeolocationDelegateStarted;	// 0x316ca6e9
- (void)sendGeolocationDelegateUnableToStart;	// 0x316ca761
- (void)sendLocation:(id)location;	// 0x316caa59
- (void)setEnableHighAccuracy:(BOOL)accuracy;	// 0x316caf6d
// declared property setter: - (void)setIsWaitingForAuthorization:(BOOL)authorization;	// 0x316caff5
// declared property setter: - (void)setLastAuthorizationStatus:(int)status;	// 0x316cb015
- (void)start;	// 0x316ca899
- (void)stop;	// 0x316ca99d
@end

