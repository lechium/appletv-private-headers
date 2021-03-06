/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SANoteCreate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *contents;	// G=0x353c95a5; S=0x353c95c1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c94c9; S=0x353c9545; 
+ (id)create;	// 0x353c9439
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x353c947d
// declared property getter: - (id)contents;	// 0x353c95a5
- (id)encodedClassName;	// 0x353c942d
- (id)groupIdentifier;	// 0x353c941d
- (BOOL)requiresResponse;	// 0x353c9611
// declared property setter: - (void)setContents:(id)contents;	// 0x353c95c1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c9545
// declared property getter: - (id)targetAppId;	// 0x353c94c9
@end

