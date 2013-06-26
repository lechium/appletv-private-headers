/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class NSData, NSMutableDictionary, NSNumber, NSArray;

@interface SSVGratisRequestBody : NSObject {
	NSNumber *_accountID;	// 4 = 0x4
	NSMutableDictionary *_additionalParameters;	// 8 = 0x8
	NSArray *_bundleIdentifiers;	// 12 = 0xc
	NSArray *_itemIdentifiers;	// 16 = 0x10
	int _style;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSData *JSONBodyData;	// G=0x32864009; 
@property(copy, nonatomic) NSNumber *accountIdentifier;	// G=0x32864175; S=0x32864189; @synthesize=_accountID
@property(readonly, assign, nonatomic) NSMutableDictionary *bodyDictionary;	// G=0x32863d41; 
@property(copy, nonatomic) NSArray *bundleIdentifiers;	// G=0x32864199; S=0x328641ad; @synthesize=_bundleIdentifiers
@property(copy, nonatomic) NSArray *itemIdentifiers;	// G=0x328641bd; S=0x328641d1; @synthesize=_itemIdentifiers
@property(readonly, assign, nonatomic) NSData *propertyListBodyData;	// G=0x32864069; 
@property(readonly, assign, nonatomic) int requestStyle;	// G=0x328641e1; @synthesize=_style
- (id)initWithRequestStyle:(int)requestStyle;	// 0x32863d01
- (void).cxx_destruct;	// 0x328641f1
// declared property getter: - (id)JSONBodyData;	// 0x32864009
// declared property getter: - (id)accountIdentifier;	// 0x32864175
// declared property getter: - (id)bodyDictionary;	// 0x32863d41
// declared property getter: - (id)bundleIdentifiers;	// 0x32864199
// declared property getter: - (id)itemIdentifiers;	// 0x328641bd
// declared property getter: - (id)propertyListBodyData;	// 0x32864069
// declared property getter: - (int)requestStyle;	// 0x328641e1
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x32864189
// declared property setter: - (void)setBundleIdentifiers:(id)identifiers;	// 0x328641ad
// declared property setter: - (void)setItemIdentifiers:(id)identifiers;	// 0x328641d1
- (void)setValue:(id)value forBodyParameter:(id)bodyParameter;	// 0x328640c9
@end
