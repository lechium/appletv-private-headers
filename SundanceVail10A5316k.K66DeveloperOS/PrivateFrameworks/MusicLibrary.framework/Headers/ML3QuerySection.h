/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface ML3QuerySection : NSObject {
@private
	NSRange _range;	// 4 = 0x4
	unsigned _sectionIndex;	// 12 = 0xc
}
@property(assign, nonatomic) NSRange range;	// G=0x345eaed5; S=0x345eaa81; @synthesize=_range
@property(assign, nonatomic) unsigned sectionIndex;	// G=0x345eaa95; S=0x345eaa71; @synthesize=_sectionIndex
- (id)initWithRange:(NSRange)range sectionIndex:(unsigned)index;	// 0x34619f89
- (id)description;	// 0x34619fed
- (unsigned)hash;	// 0x3461a0a1
- (BOOL)isEqual:(id)equal;	// 0x3461a0c9
// declared property getter: - (NSRange)range;	// 0x345eaed5
// declared property getter: - (unsigned)sectionIndex;	// 0x345eaa95
// declared property setter: - (void)setRange:(NSRange)range;	// 0x345eaa81
// declared property setter: - (void)setSectionIndex:(unsigned)index;	// 0x345eaa71
@end

