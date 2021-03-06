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
@property(copy, nonatomic) NSString *contents;	// G=0x355a49a9; S=0x355a49c5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x355a48cd; S=0x355a4949; 
+ (id)create;	// 0x355a483d
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x355a4881
// declared property getter: - (id)contents;	// 0x355a49a9
- (id)encodedClassName;	// 0x355a4831
- (id)groupIdentifier;	// 0x355a4821
- (BOOL)requiresResponse;	// 0x355a4a15
// declared property setter: - (void)setContents:(id)contents;	// 0x355a49c5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x355a4949
// declared property getter: - (id)targetAppId;	// 0x355a48cd
@end

