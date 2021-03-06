/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *endpoint;	// G=0x3559aaa1; S=0x3559aabd; 
@property(copy, nonatomic) NSArray *orderedContext;	// G=0x3559ab0d; S=0x3559ab29; 
@property(assign, nonatomic) int packetCount;	// G=0x3559ab79; S=0x3559abe9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)finishSpeech;	// 0x3559aa11
+ (id)finishSpeechWithDictionary:(id)dictionary context:(id)context;	// 0x3559aa55
- (id)encodedClassName;	// 0x3559aa05
// declared property getter: - (id)endpoint;	// 0x3559aaa1
- (id)groupIdentifier;	// 0x3559a9f5
// declared property getter: - (id)orderedContext;	// 0x3559ab0d
// declared property getter: - (int)packetCount;	// 0x3559ab79
// declared property setter: - (void)setEndpoint:(id)endpoint;	// 0x3559aabd
// declared property setter: - (void)setOrderedContext:(id)context;	// 0x3559ab29
// declared property setter: - (void)setPacketCount:(int)count;	// 0x3559abe9
@end

