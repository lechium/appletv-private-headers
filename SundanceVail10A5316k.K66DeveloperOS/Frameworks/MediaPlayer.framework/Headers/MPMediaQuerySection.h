/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface MPMediaQuerySection : NSObject <NSCoding, NSCopying> {
@private
	NSString *_title;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
	unsigned _sectionIndexTitleIndex;	// 16 = 0x10
}
@property(assign, nonatomic) NSRange range;	// G=0x348b14e5; S=0x348b14fd; @synthesize=_range
@property(assign, nonatomic) unsigned sectionIndexTitleIndex;	// G=0x348b1511; S=0x348b1521; @synthesize=_sectionIndexTitleIndex
@property(copy, nonatomic) NSString *title;	// G=0x348b14c1; S=0x348b14d5; @synthesize=_title
- (id)init;	// 0x348b1169
- (id)initWithCoder:(id)coder;	// 0x348b12b5
- (id)_init;	// 0x348b11b9
- (id)copyWithZone:(NSZone *)zone;	// 0x348b141d
- (void)dealloc;	// 0x348b1269
- (id)description;	// 0x348b11e5
- (void)encodeWithCoder:(id)coder;	// 0x348b137d
// declared property getter: - (NSRange)range;	// 0x348b14e5
// declared property getter: - (unsigned)sectionIndexTitleIndex;	// 0x348b1511
// declared property setter: - (void)setRange:(NSRange)range;	// 0x348b14fd
// declared property setter: - (void)setSectionIndexTitleIndex:(unsigned)index;	// 0x348b1521
// declared property setter: - (void)setTitle:(id)title;	// 0x348b14d5
// declared property getter: - (id)title;	// 0x348b14c1
@end
