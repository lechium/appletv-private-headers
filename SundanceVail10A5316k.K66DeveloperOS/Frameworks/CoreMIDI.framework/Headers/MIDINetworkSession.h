/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import "CoreMIDI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MIDINetworkSession : NSObject {
@private
	MIDINetworkSessionImpl *_impl;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned connectionPolicy;	// G=0x338e5545; S=0x338e5675; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x338e4eb5; S=0x338e4fe5; 
@property(readonly, assign, nonatomic) NSString *localName;	// G=0x338e5421; 
@property(readonly, assign, nonatomic) NSString *networkName;	// G=0x338e52dd; 
@property(readonly, assign, nonatomic) unsigned networkPort;	// G=0x338e51ad; 
+ (id)defaultSession;	// 0x338e47e1
- (id)init;	// 0x338e4bb9
- (BOOL)addConnection:(id)connection;	// 0x338e5955
- (BOOL)addContact:(id)contact;	// 0x338e5c8d
- (BOOL)addOrRemoveConnection:(id)connection add:(BOOL)add;	// 0x338e58f1
// declared property getter: - (unsigned)connectionPolicy;	// 0x338e5545
- (id)connections;	// 0x338e57cd
- (id)contacts;	// 0x338e5b5d
- (void)contactsChanged;	// 0x338e5ed1
- (void)dealloc;	// 0x338e4dd5
- (OpaqueMIDIEndpoint *)destinationEndpoint;	// 0x338e5f29
// declared property getter: - (BOOL)isEnabled;	// 0x338e4eb5
// declared property getter: - (id)localName;	// 0x338e5421
// declared property getter: - (id)networkName;	// 0x338e52dd
// declared property getter: - (unsigned)networkPort;	// 0x338e51ad
- (void)refreshBonjourName;	// 0x338e4ad9
- (BOOL)removeConnection:(id)connection;	// 0x338e5a59
- (BOOL)removeContact:(id)contact;	// 0x338e5d85
- (void)sessionChanged;	// 0x338e5e7d
// declared property setter: - (void)setConnectionPolicy:(unsigned)policy;	// 0x338e5675
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x338e4fe5
- (void)setStateToEntity;	// 0x338e4a5d
- (OpaqueMIDIEndpoint *)sourceEndpoint;	// 0x338e5f15
- (void)updateFromEntity;	// 0x338e499d
@end
