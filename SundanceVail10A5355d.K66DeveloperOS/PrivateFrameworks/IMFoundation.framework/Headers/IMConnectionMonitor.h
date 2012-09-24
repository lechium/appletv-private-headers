/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol IMConnectionMonitorDelegate;

@interface IMConnectionMonitor : NSObject {
	NSString *_remoteHost;	// 4 = 0x4
	id<IMConnectionMonitorDelegate> _delegate;	// 8 = 0x8
}
@property(assign, nonatomic) id<IMConnectionMonitorDelegate> delegate;	// G=0x329a8321; S=0x329a8331; @synthesize=_delegate
@property(assign, nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;	// G=0x329a8305; S=0x329a82fd; 
@property(readonly, assign, nonatomic) BOOL isImmediatelyReachable;	// G=0x329a830d; 
@property(readonly, assign, nonatomic) NSString *remoteHost;	// G=0x329a8311; @synthesize=_remoteHost
@property(readonly, assign, nonatomic) BOOL requiresDataConnectionActivation;	// G=0x329a8309; 
+ (id)alloc;	// 0x329a8201
- (id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;	// 0x329a822d
- (void)_setup;	// 0x329a82f1
- (void)clear;	// 0x329a8301
- (void)dealloc;	// 0x329a82a5
// declared property getter: - (id)delegate;	// 0x329a8321
- (void)goConnectedWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address;	// 0x329a82f5
- (void)goDisconnected;	// 0x329a82f9
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x329a8305
// declared property getter: - (BOOL)isImmediatelyReachable;	// 0x329a830d
// declared property getter: - (id)remoteHost;	// 0x329a8311
// declared property getter: - (BOOL)requiresDataConnectionActivation;	// 0x329a8309
// declared property setter: - (void)setDataConnectionActive:(BOOL)active;	// 0x329a82fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x329a8331
@end
