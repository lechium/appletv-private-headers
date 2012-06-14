/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x34a8a5c5; 
@property(readonly, assign, nonatomic) BOOL isValid;	// G=0x34a8b0f5; 
@property(readonly, assign, nonatomic) NSString *portName;	// G=0x34a8a5e5; 
@property(assign, nonatomic) id target;	// G=0x34a89f45; S=0x34a89f65; 
+ (void)_registerIMLocalObject:(id)object;	// 0x34a89419
+ (id)_registeredIMLocalObjectForPort:(unsigned)port;	// 0x34a892c5
+ (void)_unregisterIMLocalObject:(id)object;	// 0x34a89465
+ (void)initialize;	// 0x34a894b1
- (id)initWithTarget:(id)target connection:(id)connection protocol:(id)protocol;	// 0x34a89615
- (id)initWithTarget:(id)target portName:(id)name protocol:(id)protocol;	// 0x34a8997d
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x34a895f5
- (void)_cancelHandlerCompleted;	// 0x34a8a345
- (void)_clearPort:(BOOL)port;	// 0x34a89f85
- (void)_enqueueInvocation:(id)invocation;	// 0x34a8af75
- (BOOL)_handleInvocation:(id)invocation;	// 0x34a8a661
- (void)_handleNewInvocations;	// 0x34a8aac1
- (void)_noteNewInvocation;	// 0x34a8ad7d
- (id)_peekInvocation;	// 0x34a8ae25
- (void)_popInvocation;	// 0x34a8aee5
- (void)_portDidBecomeInvalid;	// 0x34a8a3f5
- (void)_portInterrupted;	// 0x34a8a36d
- (void)_systemShutdown:(id)shutdown;	// 0x34a8a521
// declared property getter: - (id)connection;	// 0x34a8a5c5
- (void)dealloc;	// 0x34a8a11d
- (id)description;	// 0x34a8b365
- (BOOL)handleInvocation:(id)invocation;	// 0x34a8aa85
- (void)invalidate;	// 0x34a8b179
// declared property getter: - (BOOL)isValid;	// 0x34a8b0f5
- (BOOL)isValidSelector:(SEL)selector;	// 0x34a8b091
// declared property getter: - (id)portName;	// 0x34a8a5e5
- (void)setPortName:(id)name;	// 0x34a8a605
// declared property setter: - (void)setTarget:(id)target;	// 0x34a89f65
// declared property getter: - (id)target;	// 0x34a89f45
- (void)terminated;	// 0x34a8a47d
@end

