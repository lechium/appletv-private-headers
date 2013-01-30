/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIPrinterTableViewCell : UITableViewCell {
	int _printerState;	// 300 = 0x12c
	UIActivityIndicatorView *_activityIndicator;	// 304 = 0x130
}
@property(assign, nonatomic) int printerState;	// G=0x32e5261d; S=0x32e524d1; @synthesize=_printerState
// declared property getter: - (int)printerState;	// 0x32e5261d
// declared property setter: - (void)setPrinterState:(int)state;	// 0x32e524d1
@end
