/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SANoteCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x353c86c1; S=0x353c873d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)createCompleted;	// 0x353c8631
+ (id)createCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c8675
- (id)encodedClassName;	// 0x353c8625
- (id)groupIdentifier;	// 0x353c8615
// declared property getter: - (id)identifier;	// 0x353c86c1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353c873d
@end
