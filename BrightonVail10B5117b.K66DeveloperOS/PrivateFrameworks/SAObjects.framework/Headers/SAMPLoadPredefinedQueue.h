/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPLoadPredefinedQueue : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int mediaItemType;	// G=0x355bf645; S=0x355bf66d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x355bf569; S=0x355bf5e5; 
+ (id)loadPredefinedQueue;	// 0x355bf4d9
+ (id)loadPredefinedQueueWithDictionary:(id)dictionary context:(id)context;	// 0x355bf51d
- (id)encodedClassName;	// 0x355bf4cd
- (id)groupIdentifier;	// 0x355bf4bd
// declared property getter: - (int)mediaItemType;	// 0x355bf645
- (BOOL)requiresResponse;	// 0x355bf69d
// declared property setter: - (void)setMediaItemType:(int)type;	// 0x355bf66d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x355bf5e5
// declared property getter: - (id)targetAppId;	// 0x355bf569
@end

