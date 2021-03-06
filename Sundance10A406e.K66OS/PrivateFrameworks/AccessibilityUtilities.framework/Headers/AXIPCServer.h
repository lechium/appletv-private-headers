/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"

@class NSMutableSet, NSString, NSMutableDictionary;

@interface AXIPCServer : NSObject {
	id _defaultHandler;	// 4 = 0x4
	CFRunLoopSourceRef _serverRunLoopSource;	// 8 = 0x8
	CFRunLoopSourceRef _clientInvalidationSource;	// 12 = 0xc
	unsigned _serverPort;	// 16 = 0x10
	unsigned _clientInvalidationPort;	// 20 = 0x14
	NSMutableDictionary *_validSecurityTokens;	// 24 = 0x18
	NSMutableSet *_connectedClients;	// 28 = 0x1c
	id _clientInvalidationHandler;	// 32 = 0x20
	NSMutableDictionary *_entitlements;	// 36 = 0x24
	unsigned _assignedServerPort;	// 40 = 0x28
	unsigned machPort;	// 44 = 0x2c
	BOOL _running;	// 48 = 0x30
	NSString *_serviceName;	// 52 = 0x34
	NSMutableDictionary *_handlers;	// 56 = 0x38
}
@property(copy, nonatomic) id defaultHandler;	// G=0x326ccdb5; S=0x326cce71; 
@property(retain, nonatomic) NSMutableDictionary *handlers;	// G=0x326cde69; S=0x326cde79; @synthesize=_handlers
@property(readonly, assign, nonatomic) unsigned machPort;	// G=0x326cca9d; @synthesize
@property(assign, nonatomic, getter=isRunning) BOOL running;	// G=0x326cde29; S=0x326cde39; @synthesize=_running
@property(retain, nonatomic) NSString *serviceName;	// G=0x326cde49; S=0x326cde59; @synthesize=_serviceName
@property(retain, nonatomic) CFRunLoopSourceRef serviceRunLoopSource;	// S=0x326cc861; @dynamic
- (id)initWithPort:(unsigned)port;	// 0x326cc831
- (id)initWithServiceName:(id)serviceName;	// 0x326cc7b9
- (void)_handleClientInvalidation:(unsigned)invalidation;	// 0x326cd539
- (void)_handleClientRegistration:(id)registration;	// 0x326cda99
- (id)_handleIncomingMessage:(id)message securityToken:(XXStruct_AVM35A)token auditToken:(XXStruct_kUSYWB)token3 clientPort:(unsigned)port;	// 0x326cdc69
- (BOOL)_hasEntitlement:(unsigned)entitlement auditToken:(XXStruct_kUSYWB)token key:(int)key;	// 0x326ccaad
- (void)_startServerThread;	// 0x326cd839
- (BOOL)addHandler:(id)handler forKey:(int)key withError:(id *)error;	// 0x326cd249
- (void)dealloc;	// 0x326cc885
// declared property getter: - (id)defaultHandler;	// 0x326ccdb5
- (id)description;	// 0x326cc999
- (id)handlerForKey:(int)key withError:(id *)error;	// 0x326cd3c1
// declared property getter: - (id)handlers;	// 0x326cde69
// declared property getter: - (BOOL)isRunning;	// 0x326cde29
// declared property getter: - (unsigned)machPort;	// 0x326cca9d
- (BOOL)removeHandlerForKey:(int)key withError:(id *)error;	// 0x326cd371
// declared property getter: - (id)serviceName;	// 0x326cde49
- (void)setClientInvalidationCallback:(id)callback;	// 0x326cd509
// declared property setter: - (void)setDefaultHandler:(id)handler;	// 0x326cce71
// declared property setter: - (void)setHandlers:(id)handlers;	// 0x326cde79
// declared property setter: - (void)setRunning:(BOOL)running;	// 0x326cde39
// declared property setter: - (void)setServiceName:(id)name;	// 0x326cde59
// declared property setter: - (void)setServiceRunLoopSource:(CFRunLoopSourceRef)source;	// 0x326cc861
- (void)setValidateMessage:(int)message validate:(BOOL)validate withEntitlement:(id)entitlement;	// 0x326cd411
- (BOOL)startServerWithError:(id *)error;	// 0x326ccea5
- (BOOL)stopServerWithError:(id *)error;	// 0x326cd039
@end

