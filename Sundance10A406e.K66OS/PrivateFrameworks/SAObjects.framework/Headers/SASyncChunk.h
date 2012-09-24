/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *key;	// G=0x325147a5; S=0x325147c1; 
@property(copy, nonatomic) NSString *postGen;	// G=0x32514811; S=0x3251482d; 
@property(copy, nonatomic) NSString *preGen;	// G=0x3251487d; S=0x32514899; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *toAdd;	// G=0x325148e9; S=0x32514965; 
@property(copy, nonatomic) NSArray *toRemove;	// G=0x325149cd; S=0x32514a49; 
@property(copy, nonatomic) NSString *validity;	// G=0x32514ab1; S=0x32514acd; 
+ (id)chunk;	// 0x32514715
+ (id)chunkWithDictionary:(id)dictionary context:(id)context;	// 0x32514759
- (id)encodedClassName;	// 0x32514709
- (id)groupIdentifier;	// 0x325146f9
// declared property getter: - (id)key;	// 0x325147a5
// declared property getter: - (id)postGen;	// 0x32514811
// declared property getter: - (id)preGen;	// 0x3251487d
// declared property setter: - (void)setKey:(id)key;	// 0x325147c1
// declared property setter: - (void)setPostGen:(id)gen;	// 0x3251482d
// declared property setter: - (void)setPreGen:(id)gen;	// 0x32514899
// declared property setter: - (void)setToAdd:(id)add;	// 0x32514965
// declared property setter: - (void)setToRemove:(id)remove;	// 0x32514a49
// declared property setter: - (void)setValidity:(id)validity;	// 0x32514acd
// declared property getter: - (id)toAdd;	// 0x325148e9
// declared property getter: - (id)toRemove;	// 0x325149cd
// declared property getter: - (id)validity;	// 0x32514ab1
@end
