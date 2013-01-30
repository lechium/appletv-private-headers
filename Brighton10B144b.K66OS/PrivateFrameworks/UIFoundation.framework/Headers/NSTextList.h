/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTextList : NSObject <NSCoding, NSCopying> {
	NSString *_markerFormat;	// 4 = 0x4
	unsigned _listFlags;	// 8 = 0x8
	int _startIndex;	// 12 = 0xc
	void *_listSecondary;	// 16 = 0x10
}
@property(readonly, retain) NSString *markerFormat;	// G=0x35ac3825; converted property
@property(assign) int startingItemNumber;	// G=0x35ac3869; S=0x35ac3855; converted property
+ (id)_standardMarkerAttributesForAttributes:(id)attributes;	// 0x35ac5221
+ (void)initialize;	// 0x35ac3715
- (id)initWithCoder:(id)coder;	// 0x35ac3a8d
- (id)initWithMarkerFormat:(id)markerFormat options:(unsigned)options;	// 0x35ac3755
- (BOOL)_isOrdered;	// 0x35ac4c71
- (id)_markerAtIndex:(unsigned)index inText:(id)text;	// 0x35ac50e9
- (id)_markerForMarkerFormat:(id)markerFormat itemNumber:(int)number isNumbered:(BOOL *)numbered substitutionStart:(unsigned *)start end:(unsigned *)end specifierStart:(unsigned *)start6 end:(unsigned *)end7;	// 0x35ac3e11
- (id)_markerPrefix;	// 0x35ac4d61
- (id)_markerSpecifier;	// 0x35ac4dcd
- (id)_markerSuffix;	// 0x35ac506d
- (id)_markerTitle;	// 0x35ac4cb9
- (id)_unaffixedMarkerForItemNumber:(int)itemNumber;	// 0x35ac4ec9
- (id)_unaffixedMarkerFormat;	// 0x35ac4e4d
- (id)_unaffixedMarkerTitle;	// 0x35ac4f69
- (id)copyWithZone:(NSZone *)zone;	// 0x35ac387d
- (void)dealloc;	// 0x35ac37d9
- (id)description;	// 0x35ac3d29
- (void)encodeWithCoder:(id)coder;	// 0x35ac3901
- (unsigned)listOptions;	// 0x35ac3835
- (id)markerForItemNumber:(int)itemNumber;	// 0x35ac4c39
// converted property getter: - (id)markerFormat;	// 0x35ac3825
- (unsigned)options;	// 0x35ac3845
// converted property setter: - (void)setStartingItemNumber:(int)number;	// 0x35ac3855
// converted property getter: - (int)startingItemNumber;	// 0x35ac3869
@end
