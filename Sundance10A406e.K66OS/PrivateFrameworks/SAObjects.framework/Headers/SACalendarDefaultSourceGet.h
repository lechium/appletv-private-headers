/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SACalendarDefaultSourceGet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32535941; S=0x325359bd; 
+ (id)defaultSourceGet;	// 0x325358b1
+ (id)defaultSourceGetWithDictionary:(id)dictionary context:(id)context;	// 0x325358f5
- (id)encodedClassName;	// 0x325358a5
- (id)groupIdentifier;	// 0x32535895
- (BOOL)requiresResponse;	// 0x32535a1d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x325359bd
// declared property getter: - (id)targetAppId;	// 0x32535941
@end
