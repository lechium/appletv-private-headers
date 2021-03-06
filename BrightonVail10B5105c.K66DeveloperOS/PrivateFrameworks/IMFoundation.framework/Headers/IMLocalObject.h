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
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x365d7a49; 
@property(readonly, assign, nonatomic) BOOL isValid;	// G=0x365d856d; 
@property(readonly, assign, nonatomic) NSString *portName;	// G=0x365d7a69; 
@property(assign, nonatomic) id target;	// G=0x365d73c9; S=0x365d73e9; 
+ (void)_registerIMLocalObject:(id)object;	// 0x365d689d
+ (id)_registeredIMLocalObjectForPort:(unsigned)port;	// 0x365d6749
+ (void)_unregisterIMLocalObject:(id)object;	// 0x365d68e9
+ (void)initialize;	// 0x365d6935
- (id)initWithTarget:(id)target connection:(id)connection protocol:(id)protocol;	// 0x365d6a99
- (id)initWithTarget:(id)target portName:(id)name protocol:(id)protocol;	// 0x365d6e01
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x365d6a79
- (void)_cancelHandlerCompleted;	// 0x365d77c9
- (void)_clearPort:(BOOL)port;	// 0x365d7409
- (void)_enqueueInvocation:(id)invocation;	// 0x365d83ed
- (BOOL)_handleInvocation:(id)invocation;	// 0x365d7ae5
- (void)_handleNewInvocations;	// 0x365d7f39
- (void)_noteNewInvocation;	// 0x365d81f5
- (id)_peekInvocation;	// 0x365d829d
- (void)_popInvocation;	// 0x365d835d
- (void)_portDidBecomeInvalid;	// 0x365d7879
- (void)_portInterrupted;	// 0x365d77f1
- (void)_systemShutdown:(id)shutdown;	// 0x365d79a5
// declared property getter: - (id)connection;	// 0x365d7a49
- (void)dealloc;	// 0x365d75a1
- (id)description;	// 0x365d87dd
- (BOOL)handleInvocation:(id)invocation;	// 0x365d7efd
- (void)invalidate;	// 0x365d85f1
// declared property getter: - (BOOL)isValid;	// 0x365d856d
- (BOOL)isValidSelector:(SEL)selector;	// 0x365d8509
// declared property getter: - (id)portName;	// 0x365d7a69
- (void)setPortName:(id)name;	// 0x365d7a89
// declared property setter: - (void)setTarget:(id)target;	// 0x365d73e9
// declared property getter: - (id)target;	// 0x365d73c9
- (void)terminated;	// 0x365d7901
@end

