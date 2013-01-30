/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, NSDate;

@interface SAStockNews : SADomainObject {
}
@property(copy, nonatomic) NSDate *timeStamp;	// G=0x353d0931; S=0x353d094d; 
@property(copy, nonatomic) NSString *title;	// G=0x353d099d; S=0x353d09b9; 
@property(copy, nonatomic) NSString *url;	// G=0x353d0a09; S=0x353d0a25; 
+ (id)news;	// 0x353d08a1
+ (id)newsWithDictionary:(id)dictionary context:(id)context;	// 0x353d08e5
- (id)encodedClassName;	// 0x353d0895
- (id)groupIdentifier;	// 0x353d0885
// declared property setter: - (void)setTimeStamp:(id)stamp;	// 0x353d094d
// declared property setter: - (void)setTitle:(id)title;	// 0x353d09b9
// declared property setter: - (void)setUrl:(id)url;	// 0x353d0a25
// declared property getter: - (id)timeStamp;	// 0x353d0931
// declared property getter: - (id)title;	// 0x353d099d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353d0a75
// declared property getter: - (id)url;	// 0x353d0a09
@end
