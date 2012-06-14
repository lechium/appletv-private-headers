/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAClockDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *clockIds;	// G=0x32f3d27d; S=0x32f3d31d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3d1a1; S=0x32f3d21d; 
+ (id)delete;	// 0x32f3d111
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x32f3d155
// declared property getter: - (id)clockIds;	// 0x32f3d27d
- (id)encodedClassName;	// 0x32f3d105
- (id)groupIdentifier;	// 0x32f3d0f5
- (BOOL)requiresResponse;	// 0x32f3d39d
// declared property setter: - (void)setClockIds:(id)ids;	// 0x32f3d31d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f3d21d
// declared property getter: - (id)targetAppId;	// 0x32f3d1a1
@end

