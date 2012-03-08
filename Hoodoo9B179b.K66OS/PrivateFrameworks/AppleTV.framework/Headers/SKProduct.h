/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSDecimalNumber, NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface SKProduct : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *localizedDescription;	// G=0x304346b5; 
@property(readonly, assign, nonatomic) NSString *localizedTitle;	// G=0x304346f9; 
@property(readonly, assign, nonatomic) NSDecimalNumber *price;	// G=0x3043473d; 
@property(readonly, assign, nonatomic) NSLocale *priceLocale;	// G=0x30434781; 
@property(readonly, assign, nonatomic) NSString *productIdentifier;	// G=0x304347c5; 
- (id)init;	// 0x3043433d
- (id)initWithDictionary:(id)dictionary;	// 0x304343a1
- (void)dealloc;	// 0x30434661
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x303ca169
// declared property getter: - (id)localizedDescription;	// 0x304346b5
// declared property getter: - (id)localizedTitle;	// 0x304346f9
// declared property getter: - (id)price;	// 0x3043473d
// declared property getter: - (id)priceLocale;	// 0x30434781
// declared property getter: - (id)productIdentifier;	// 0x304347c5
- (void)setLocale:(id)locale;	// 0x30434809
@end

