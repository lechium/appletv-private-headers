/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSTextTab : NSObject <NSCopying, NSCoding> {
	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	} _flags;	// 4 = 0x4
	float _location;	// 8 = 0x8
	id _reserved;	// 12 = 0xc
}
@property(readonly, assign) float location;	// G=0x346668f1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34666401
+ (void)initialize;	// 0x34666271
- (id)initWithCoder:(id)coder;	// 0x346669d9
- (id)initWithTextAlignment:(int)textAlignment location:(float)location options:(id)options;	// 0x346664ad
- (id)initWithType:(unsigned)type location:(float)location;	// 0x34666445
- (BOOL)_isDeallocating;	// 0x346667ad
- (BOOL)_tryRetain;	// 0x346667a9
- (id)accessibilityRulerMarkerType;	// 0x346669d1
- (id)accessibilityRulerMarkerTypeDescription;	// 0x346669d5
- (int)alignment;	// 0x34666745
- (id)copyWithZone:(NSZone *)zone;	// 0x346668e1
- (void)dealloc;	// 0x3466676d
- (id)description;	// 0x34666da9
- (void)encodeWithCoder:(id)coder;	// 0x34666b35
- (BOOL)isEqual:(id)equal;	// 0x34666c89
// converted property getter: - (float)location;	// 0x346668f1
- (id)options;	// 0x3466675d
- (oneway void)release;	// 0x346667f1
- (id)retain;	// 0x346667b1
- (unsigned)retainCount;	// 0x346668c9
- (unsigned)tabStopType;	// 0x34666901
@end
