/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SASetApplicationContext : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *orderedContext;	// G=0x303bf2f1; S=0x303bf30d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)setApplicationContext;	// 0x303bf261
+ (id)setApplicationContextWithDictionary:(id)dictionary context:(id)context;	// 0x303bf2a5
- (id)encodedClassName;	// 0x303bf255
- (id)groupIdentifier;	// 0x303bf245
// declared property getter: - (id)orderedContext;	// 0x303bf2f1
// declared property setter: - (void)setOrderedContext:(id)context;	// 0x303bf30d
@end
