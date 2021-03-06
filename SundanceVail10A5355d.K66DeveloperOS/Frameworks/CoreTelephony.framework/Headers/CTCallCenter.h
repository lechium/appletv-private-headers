/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CTCallCenter : NSObject {
	void *_server;	// 4 = 0x4
	NSSet *_currentCalls;	// 8 = 0x8
	id _callEventHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id callEventHandler;	// G=0x324a9ed9; S=0x324a9ee9; 
@property(retain) NSSet *currentCalls;	// G=0x324aa421; S=0x324aa475; @dynamic
- (id)init;	// 0x324a9d81
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)failureLogMessage;	// 0x324aa7dd
- (BOOL)calculateCallStateChanges:(id)changes;	// 0x324aa069
// declared property getter: - (id)callEventHandler;	// 0x324a9ed9
- (void)cleanUpServerConnection;	// 0x324a9d5d
// declared property getter: - (id)currentCalls;	// 0x324aa421
- (void)dealloc;	// 0x324a9e65
- (id)description;	// 0x324aa97d
- (BOOL)getCurrentCallSetFromServer:(id)server;	// 0x324a9f95
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x324aa4b1
// declared property setter: - (void)setCallEventHandler:(id)handler;	// 0x324a9ee9
// declared property setter: - (void)setCurrentCalls:(id)calls;	// 0x324aa475
- (BOOL)setUpServerConnection;	// 0x324a9bcd
@end

