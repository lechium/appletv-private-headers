/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSArray;

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
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x331b3635; 
@property(retain) id accessibilityLabel;	// G=0x331b3661; S=0x331b3651; converted property
@property(copy, nonatomic) NSString *accessibilityLanguage;	// G=0x331b3615; S=0x331b3625; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x331b3681; 
// declared property getter: - (id)accessibilityControls;	// 0x331b3635
- (float)accessibilityDelayForScreenContent;	// 0x331b3605
- (BOOL)accessibilityElementIsHidden;	// 0x331b360d
// converted property getter: - (id)accessibilityLabel;	// 0x331b3661
// declared property getter: - (id)accessibilityLanguage;	// 0x331b3615
- (id)accessibilityNonFocusableElements;	// 0x331b3601
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x331b3681
- (id)accessibilityScreenContent;	// 0x331b367d
- (id)accessibilitySecondaryLabel;	// 0x331b3679
- (id)accessibilityTraits;	// 0x331b3611
- (id)accessibilityValue;	// 0x331b3671
- (BOOL)isAccessibilityElement;	// 0x331b3675
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x331b3651
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x331b3625
@end

@interface NSObject (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x33292a6d
@end

@interface NSObject (BRDisplayString)
- (id)displayString;	// 0x332c83b9
@end

@interface NSObject (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x332d9361
@end

@interface NSObject (ATVKeyValueCodingAdditions)
- (id)arrayValueForKey:(id)key;	// 0x332d9949
@end

@interface NSObject (ISInvocationAdditions)
- (id)blockingMainThreadProxy;	// 0x3333d4f1
- (id)delayedProxy:(double)proxy;	// 0x3333d551
- (id)mainThreadProxy;	// 0x3333d5b9
@end

