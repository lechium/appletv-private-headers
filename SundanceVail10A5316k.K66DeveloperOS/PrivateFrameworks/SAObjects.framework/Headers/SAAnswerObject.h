/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSArray;

@interface SAAnswerObject : SADomainObject {
}
@property(copy, nonatomic) NSArray *lines;	// G=0x32f59189; S=0x32f59205; 
@property(copy, nonatomic) NSString *title;	// G=0x32f5926d; S=0x32f59289; 
+ (id)object;	// 0x32f590f9
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x32f5913d
- (id)encodedClassName;	// 0x32f590ed
- (id)groupIdentifier;	// 0x32f590dd
// declared property getter: - (id)lines;	// 0x32f59189
// declared property setter: - (void)setLines:(id)lines;	// 0x32f59205
// declared property setter: - (void)setTitle:(id)title;	// 0x32f59289
// declared property getter: - (id)title;	// 0x32f5926d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f592d9
@end

