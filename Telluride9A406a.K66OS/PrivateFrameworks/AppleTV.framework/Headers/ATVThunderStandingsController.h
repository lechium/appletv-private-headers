/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class ATVThunderStandingsView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsController : BRViewController {
@private
	ATVThunderStandingsView *_standingsView;	// 84 = 0x54
	NSDictionary *_data;	// 88 = 0x58
}
- (id)initWithDictionary:(id)dictionary;	// 0x32fd6979
- (float)_headerWidthOfColumn:(long)column forTableView:(id)tableView;	// 0x32fd7489
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x32fd73b1
- (id)accessibilityLabel;	// 0x32fd7371
- (id)accessibilityNonFocusableElements;	// 0x32fd7391
- (void)dealloc;	// 0x32fd6cc1
- (float)headerHeightForTableView:(id)tableView;	// 0x32fd7361
- (BOOL)isAccessibilityElement;	// 0x32fd736d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x32fd6d69
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x32fd6db1
- (long)numberOfRowsInTableView:(id)tableView;	// 0x32fd6d21
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x32fd713d
- (float)tableView:(id)view heightForRow:(long)row;	// 0x32fd7355
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x32fd6df9
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x32fd7325
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x32fd733d
@end

