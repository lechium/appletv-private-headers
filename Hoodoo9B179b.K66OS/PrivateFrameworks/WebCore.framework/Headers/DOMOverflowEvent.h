/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"


__attribute__((visibility("hidden")))
@interface DOMOverflowEvent : DOMEvent {
}
@property(readonly, assign) BOOL horizontalOverflow;	// G=0x337787bd; 
@property(readonly, assign) unsigned short orient;	// G=0x33778791; 
@property(readonly, assign) BOOL verticalOverflow;	// G=0x337787ed; 
- (void)initOverflowEvent:(unsigned short)event horizontalOverflow:(BOOL)overflow verticalOverflow:(BOOL)overflow3;	// 0x3377881d
// declared property getter: - (BOOL)horizontalOverflow;	// 0x337787bd
// declared property getter: - (unsigned short)orient;	// 0x33778791
// declared property getter: - (BOOL)verticalOverflow;	// 0x337787ed
@end
