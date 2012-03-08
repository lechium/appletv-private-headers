/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSArray *_sections;	// 4 = 0x4
	NSArray *_sectionIndexTitles;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x309c1f6d; 
@property(copy, nonatomic) NSArray *sectionIndexTitles;	// G=0x309c1fcd; S=0x309c1fdd; @synthesize=_sectionIndexTitles
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x309c1fbd; @synthesize=_sections
- (id)initWithCoder:(id)coder;	// 0x309c1c39
- (id)copyWithZone:(NSZone *)zone;	// 0x309c1bb9
// declared property getter: - (unsigned)count;	// 0x309c1f6d
- (void)dealloc;	// 0x309c1b59
- (id)description;	// 0x309c1b39
- (void)encodeWithCoder:(id)coder;	// 0x309c1cc9
- (unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)index;	// 0x309c1db5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x309c1d39
// declared property getter: - (id)sectionIndexTitles;	// 0x309c1fcd
// declared property getter: - (id)sections;	// 0x309c1fbd
// declared property setter: - (void)setSectionIndexTitles:(id)titles;	// 0x309c1fdd
@end

