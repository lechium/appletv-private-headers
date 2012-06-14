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
@property(copy, nonatomic) NSString *key;	// G=0x32f370f9; S=0x32f37115; 
@property(copy, nonatomic) NSString *postGen;	// G=0x32f37165; S=0x32f37181; 
@property(copy, nonatomic) NSString *preGen;	// G=0x32f371d1; S=0x32f371ed; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *toAdd;	// G=0x32f3723d; S=0x32f372b9; 
@property(copy, nonatomic) NSArray *toRemove;	// G=0x32f37321; S=0x32f3739d; 
@property(copy, nonatomic) NSString *validity;	// G=0x32f37405; S=0x32f37421; 
+ (id)chunk;	// 0x32f37069
+ (id)chunkWithDictionary:(id)dictionary context:(id)context;	// 0x32f370ad
- (id)encodedClassName;	// 0x32f3705d
- (id)groupIdentifier;	// 0x32f3704d
// declared property getter: - (id)key;	// 0x32f370f9
// declared property getter: - (id)postGen;	// 0x32f37165
// declared property getter: - (id)preGen;	// 0x32f371d1
// declared property setter: - (void)setKey:(id)key;	// 0x32f37115
// declared property setter: - (void)setPostGen:(id)gen;	// 0x32f37181
// declared property setter: - (void)setPreGen:(id)gen;	// 0x32f371ed
// declared property setter: - (void)setToAdd:(id)add;	// 0x32f372b9
// declared property setter: - (void)setToRemove:(id)remove;	// 0x32f3739d
// declared property setter: - (void)setValidity:(id)validity;	// 0x32f37421
// declared property getter: - (id)toAdd;	// 0x32f3723d
// declared property getter: - (id)toRemove;	// 0x32f37321
// declared property getter: - (id)validity;	// 0x32f37405
@end

