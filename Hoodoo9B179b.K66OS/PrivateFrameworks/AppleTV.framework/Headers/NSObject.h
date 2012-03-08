/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVBindingAdaptor, NSString, NSArray;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)debugDescription;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (Accessibility)
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x3023f8f9; 
@property(retain) id accessibilityLabel;	// G=0x3023f925; S=0x3023f915; converted property
@property(copy, nonatomic) NSString *accessibilityLanguage;	// G=0x3023f8d9; S=0x3023f8e9; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x3023f945; 
// declared property getter: - (id)accessibilityControls;	// 0x3023f8f9
- (float)accessibilityDelayForScreenContent;	// 0x3023f8c9
- (BOOL)accessibilityElementIsHidden;	// 0x3023f8d1
// converted property getter: - (id)accessibilityLabel;	// 0x3023f925
// declared property getter: - (id)accessibilityLanguage;	// 0x3023f8d9
- (id)accessibilityNonFocusableElements;	// 0x3023f8c5
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x3023f945
- (id)accessibilityScreenContent;	// 0x3023f941
- (id)accessibilitySecondaryLabel;	// 0x3023f93d
- (id)accessibilityTraits;	// 0x3023f8d5
- (id)accessibilityValue;	// 0x3023f935
- (BOOL)isAccessibilityElement;	// 0x3023f939
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x3023f915
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x3023f8e9
@end

@interface NSObject (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x30324b95
@end

@interface NSObject (BRDisplayString)
- (id)displayString;	// 0x3035d399
@end

@interface NSObject (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x3036e62d
- (void)registerEndOfEventSelector:(SEL)eventSelector;	// 0x3036e64d
@end

@interface NSObject (ATVKeyValueCodingAdditions)
- (id)arrayValueForKey:(id)key;	// 0x3036ed55
@end

@interface NSObject (ATVBindingAdaptorAccess)
@property(readonly, assign) ATVBindingAdaptor *bindingAdaptor;	// G=0x303e1175; 
- (id)_bindingAdaptor;	// 0x303e1165
// declared property getter: - (id)bindingAdaptor;	// 0x303e1175
- (void)releaseBindingAdaptor;	// 0x303e11ed
@end

@interface NSObject (ATVBindingUtilities)
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x303e1349
- (id)infoForBinding:(id)binding;	// 0x303e14cd
- (void)unbind:(id)unbind;	// 0x303e144d
- (void)updateBoundValueForBinding:(id)binding;	// 0x303e1231
@end

@interface NSObject (ATVAutounbinderAccess)
- (id)_autounbinder;	// 0x303e1555
- (void)_setAutounbinder:(id)autounbinder;	// 0x303e1565
@end

@interface NSObject (ISInvocationAdditions)
- (id)blockingMainThreadProxy;	// 0x3041bd91
- (id)delayedProxy:(double)proxy;	// 0x3041bdf1
- (id)mainThreadProxy;	// 0x3041be59
@end

@interface NSObject (NSObject_SBJsonWriting)
- (id)JSONRepresentation;	// 0x304ff4ed
@end

