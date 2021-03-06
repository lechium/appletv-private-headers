/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"


__attribute__((visibility("hidden")))
@interface ATVFeedInterstitialElement : ATVFeedElement {
@private
	float _start;	// 28 = 0x1c
	float _end;	// 32 = 0x20
}
@property(assign, nonatomic) float end;	// G=0x32b0a6b9; S=0x32b0a6c9; @synthesize=_end
@property(assign, nonatomic) float start;	// G=0x32b0a699; S=0x32b0a6a9; @synthesize=_start
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b0a595
- (void)dealloc;	// 0x32b0a66d
// declared property getter: - (float)end;	// 0x32b0a6b9
// declared property setter: - (void)setEnd:(float)end;	// 0x32b0a6c9
// declared property setter: - (void)setStart:(float)start;	// 0x32b0a6a9
// declared property getter: - (float)start;	// 0x32b0a699
@end

