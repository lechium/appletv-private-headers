/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVBindingAdaptor : NSObject {
@private
	id _owner;	// 4 = 0x4
	NSMutableDictionary *_bindingInfo;	// 8 = 0x8
	NSString *_ignoredBinding;	// 12 = 0xc
}
+ (id)atvValueTransformerFromOptions:(id)options;	// 0x303e09f1
+ (BOOL)isRunningInInterfaceBuilder;	// 0x303e0175
+ (void)setIsRunningInInterfaceBuilder;	// 0x303e0171
- (id)initWithOwner:(id)owner;	// 0x303e0179
- (objc_method *)_methodForUpdateFromBinding:(id)binding;	// 0x303e04c5
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x303e0591
- (id)bindingAdaptorInfoForBinding:(id)binding;	// 0x303e0dd1
- (void)dealloc;	// 0x303e01b9
- (id)description;	// 0x303e02d1
- (id)infoForBinding:(id)binding;	// 0x303e0df1
- (BOOL)isBindingBound:(id)bound;	// 0x303e0da1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303e08b9
- (id)primitiveValueForBinding:(id)binding;	// 0x303e0abd
- (void)setValue:(id)value forBinding:(id)binding;	// 0x303e0e11
- (void)unbind:(id)unbind;	// 0x303e07f1
- (void)unbindAll;	// 0x303e0219
- (BOOL)validateValue:(id *)value forBinding:(id)binding error:(id *)error;	// 0x303e10e5
- (id)valueForBinding:(id)binding;	// 0x303e0d75
@end

