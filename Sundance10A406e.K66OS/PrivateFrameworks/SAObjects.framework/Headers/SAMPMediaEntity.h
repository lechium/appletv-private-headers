/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAMPMediaEntity : SADomainObject {
}
@property(copy, nonatomic) NSString *sortTitle;	// G=0x32516999; S=0x325169b5; 
@property(copy, nonatomic) NSString *title;	// G=0x32516a05; S=0x32516a21; 
+ (id)mediaEntity;	// 0x32516909
+ (id)mediaEntityWithDictionary:(id)dictionary context:(id)context;	// 0x3251694d
- (id)encodedClassName;	// 0x325168fd
- (id)groupIdentifier;	// 0x325168ed
// declared property setter: - (void)setSortTitle:(id)title;	// 0x325169b5
// declared property setter: - (void)setTitle:(id)title;	// 0x32516a21
// declared property getter: - (id)sortTitle;	// 0x32516999
// declared property getter: - (id)title;	// 0x32516a05
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32516a71
@end
