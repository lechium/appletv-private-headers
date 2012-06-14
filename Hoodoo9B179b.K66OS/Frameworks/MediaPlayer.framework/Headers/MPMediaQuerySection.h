/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSString;

@interface MPMediaQuerySection : NSObject <NSCoding, NSCopying> {
@private
	NSString *_title;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
	unsigned _sectionIndexTitleIndex;	// 16 = 0x10
}
@property(assign, nonatomic) NSRange range;	// G=0x309cb3bd; S=0x309cb3d9; @synthesize=_range
@property(assign, nonatomic) unsigned sectionIndexTitleIndex;	// G=0x309cb3ed; S=0x309cb3fd; @synthesize=_sectionIndexTitleIndex
@property(copy, nonatomic) NSString *title;	// G=0x309cb389; S=0x309cb399; @synthesize=_title
- (id)init;	// 0x309cb025
- (id)initWithCoder:(id)coder;	// 0x309cb171
- (id)_init;	// 0x309cb075
- (id)copyWithZone:(NSZone *)zone;	// 0x309cb2e5
- (void)dealloc;	// 0x309cb125
- (id)description;	// 0x309cb0a1
- (void)encodeWithCoder:(id)coder;	// 0x309cb23d
// declared property getter: - (NSRange)range;	// 0x309cb3bd
// declared property getter: - (unsigned)sectionIndexTitleIndex;	// 0x309cb3ed
// declared property setter: - (void)setRange:(NSRange)range;	// 0x309cb3d9
// declared property setter: - (void)setSectionIndexTitleIndex:(unsigned)index;	// 0x309cb3fd
// declared property setter: - (void)setTitle:(id)title;	// 0x309cb399
// declared property getter: - (id)title;	// 0x309cb389
@end
