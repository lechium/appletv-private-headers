/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class NSString, BKSSignal;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSProcessAssertion : NSObject {
@private
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_xpc_object> *_serverConnection;	// 8 = 0x8
	BOOL _valid;	// 12 = 0xc
	BKSSignal *_invalidationSignal;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	NSString *_bundleIdentifier;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
	unsigned _reason;	// 36 = 0x24
	id _invalidationHandler;	// 40 = 0x28
	id _acquisitionHandler;	// 44 = 0x2c
}
@property(copy, nonatomic) id acquisitionHandler;	// G=0x3062d2e5; S=0x3062d40d; @dynamic
@property(assign, nonatomic) unsigned flags;	// G=0x3062d6d1; S=0x3062d79d; @dynamic
@property(copy, nonatomic) id invalidationHandler;	// G=0x3062d4e5; S=0x3062d5f9; @dynamic
@property(copy, nonatomic) NSString *name;	// G=0x3062d845; S=0x3062d96d; @dynamic
@property(readonly, assign, nonatomic) unsigned reason;	// G=0x3062d191; @dynamic
@property(readonly, assign, nonatomic) BOOL valid;	// G=0x3062d039; @dynamic
+ (id)NameForReason:(unsigned)reason;	// 0x3062cb21
- (id)init;	// 0x3062cc39
- (id)initWithBundleIdentifier:(id)bundleIdentifier flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;	// 0x3062cdf5
- (id)initWithPID:(int)pid flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;	// 0x3062cf1d
// declared property getter: - (id)acquisitionHandler;	// 0x3062d2e5
- (void)dealloc;	// 0x3062ccdd
// declared property getter: - (unsigned)flags;	// 0x3062d6d1
- (void)invalidate;	// 0x3062da89
// declared property getter: - (id)invalidationHandler;	// 0x3062d4e5
// declared property getter: - (id)name;	// 0x3062d845
- (void)queue_acquireAssertion;	// 0x3062de89
- (void)queue_invalidate:(BOOL)invalidate;	// 0x3062db05
- (void)queue_notifyAssertionAcquired:(BOOL)acquired;	// 0x3062e1f1
- (void)queue_registerWithServer;	// 0x3062dc29
- (void)queue_updateAssertion;	// 0x3062e0dd
// declared property getter: - (unsigned)reason;	// 0x3062d191
// declared property setter: - (void)setAcquisitionHandler:(id)handler;	// 0x3062d40d
// declared property setter: - (void)setFlags:(unsigned)flags;	// 0x3062d79d
// declared property setter: - (void)setInvalidationHandler:(id)handler;	// 0x3062d5f9
// declared property setter: - (void)setName:(id)name;	// 0x3062d96d
- (void)setReason:(unsigned)reason;	// 0x3062d25d
- (void)setValid:(BOOL)valid;	// 0x3062d109
// declared property getter: - (BOOL)valid;	// 0x3062d039
@end

