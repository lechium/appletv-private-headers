/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRPosterBadgeInfo : XXUnknownSuperclass {
	int _position;	// 4 = 0x4
	BRControl *_badge;	// 8 = 0x8
	XXStruct_40SSZC _inset;	// 12 = 0xc
}
@property(retain, nonatomic) BRControl *badge;	// G=0x394ae5; S=0x394af5; @synthesize=_badge
@property(assign, nonatomic) XXStruct_40SSZC inset;	// G=0x394b05; S=0x394b1d; @synthesize=_inset
@property(assign, nonatomic) int position;	// G=0x394ac5; S=0x394ad5; @synthesize=_position
// declared property getter: - (id)badge;	// 0x394ae5
- (void)dealloc;	// 0x394a79
// declared property getter: - (XXStruct_40SSZC)inset;	// 0x394b05
// declared property getter: - (int)position;	// 0x394ac5
// declared property setter: - (void)setBadge:(id)badge;	// 0x394af5
// declared property setter: - (void)setInset:(XXStruct_40SSZC)inset;	// 0x394b1d
// declared property setter: - (void)setPosition:(int)position;	// 0x394ad5
@end

