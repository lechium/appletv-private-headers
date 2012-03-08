/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfElement : ATVFeedElement {
@private
	int _columnCount;	// 28 = 0x1c
	BOOL _center;	// 32 = 0x20
	NSArray *_sections;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL center;	// G=0x303bfead; S=0x303bfebd; @synthesize=_center
@property(assign, nonatomic) int columnCount;	// G=0x303bfe8d; S=0x303bfe9d; @synthesize=_columnCount
@property(retain, nonatomic) NSArray *sections;	// G=0x303bfecd; S=0x303bfedd; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303bfc5d
// declared property getter: - (BOOL)center;	// 0x303bfead
// declared property getter: - (int)columnCount;	// 0x303bfe8d
- (void)dealloc;	// 0x303bfe41
// declared property getter: - (id)sections;	// 0x303bfecd
// declared property setter: - (void)setCenter:(BOOL)center;	// 0x303bfebd
// declared property setter: - (void)setColumnCount:(int)count;	// 0x303bfe9d
// declared property setter: - (void)setSections:(id)sections;	// 0x303bfedd
@end

