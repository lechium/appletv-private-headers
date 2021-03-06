/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSLocale, NSArray, NSString;

@interface UILocalizedIndexedCollation : NSObject {
@private
	NSLocale *_locale;	// 4 = 0x4
	NSArray *_sectionTitles;	// 8 = 0x8
	NSArray *_sectionStartStrings;	// 12 = 0xc
	NSArray *_sectionIndexTitles;	// 16 = 0x10
	NSArray *_sectionIndexMapping;	// 20 = 0x14
	NSString *_transform;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x32f3c959; 
@property(readonly, assign, nonatomic) NSArray *sectionTitles;	// G=0x32f3c949; 
+ (id)collationWithDictionary:(id)dictionary;	// 0x32f3c561
+ (id)currentCollation;	// 0x32f3c7e5
- (id)initWithDictionary:(id)dictionary;	// 0x32f3c59d
- (void)dealloc;	// 0x32f3c899
- (int)sectionForObject:(id)object collationStringSelector:(SEL)selector;	// 0x32f3c9b9
- (int)sectionForSectionIndexTitleAtIndex:(int)index;	// 0x32f3c97d
// declared property getter: - (id)sectionIndexTitles;	// 0x32f3c959
// declared property getter: - (id)sectionTitles;	// 0x32f3c949
- (id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;	// 0x32f3cad5
- (id)transformedCollationStringForString:(id)string;	// 0x32f3c77d
@end

