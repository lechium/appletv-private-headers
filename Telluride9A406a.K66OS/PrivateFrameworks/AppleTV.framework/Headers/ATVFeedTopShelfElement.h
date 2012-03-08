/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray;

@interface ATVFeedTopShelfElement : ATVFeedRootElement {
@private
	int _columnCount;	// 44 = 0x2c
	int _refreshIntervalSec;	// 48 = 0x30
	NSArray *_sections;	// 52 = 0x34
}
@property(assign, nonatomic) int columnCount;	// G=0x331a134d; S=0x331a135d; @synthesize=_columnCount
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x331a136d; S=0x331a137d; @synthesize=_refreshIntervalSec
@property(retain, nonatomic) NSArray *sections;	// G=0x331a138d; S=0x331a139d; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x331a1125
// declared property getter: - (int)columnCount;	// 0x331a134d
- (void)dealloc;	// 0x331a1301
// declared property getter: - (int)refreshIntervalSec;	// 0x331a136d
// declared property getter: - (id)sections;	// 0x331a138d
// declared property setter: - (void)setColumnCount:(int)count;	// 0x331a135d
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x331a137d
// declared property setter: - (void)setSections:(id)sections;	// 0x331a139d
@end

