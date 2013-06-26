/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVFeedController.h"

@class BRControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerController : ATVFeedController {
	BRScrollControl *_scroller;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BRControl *headerControl;	// G=0x114ebd; 
- (id)initWithDictionary:(id)dictionary;	// 0x1140a9
- (id)initWithFeedElement:(id)feedElement;	// 0x114045
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x11421d
- (id)_containerWithControl:(id)control size:(CGRect)size;	// 0x115065
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x1142bd
- (BOOL)_hasFixedHeader;	// 0x115165
- (BOOL)_updateContent;	// 0x1142cd
- (id)accessibilityLabel;	// 0x114e95
- (void)dealloc;	// 0x11410d
// declared property getter: - (id)headerControl;	// 0x114ebd
- (BOOL)showsHeader;	// 0x115201
- (void)wasPushed;	// 0x114159
@end
