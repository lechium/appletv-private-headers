/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTSubMenuController.h"
#import "RUIYTHistoryController.h"

@class NSArray, RUIYTHistoryManager;

@interface RUIYTHistoryController : RUIYTSubMenuController {
	RUIYTHistoryManager *_historyManager;	// 168 = 0xa8
	NSArray *_headerRows;	// 172 = 0xac
}
- (id)initWithAssets:(id)assets historyManager:(id)manager;	// 0xaba1
- (id)initWithHistoryManager:(id)historyManager;	// 0xa7f5
- (void)dealloc;	// 0xab45
- (long)defaultIndex;	// 0xa7a9
- (float)heightForRow:(long)row;	// 0xa861
- (BOOL)isNetworkDependent;	// 0xa3ad
- (long)itemCount;	// 0xaa79
- (id)itemForRow:(long)row;	// 0xaac9
- (void)itemSelected:(long)selected;	// 0xa941
- (id)previewControlForItem:(long)item;	// 0xa8dd
- (id)titleForRow:(long)row;	// 0xa9ed
@end

@interface RUIYTHistoryController (Private)
- (void)_clearHistory;	// 0xa3b1
- (id)_headerRows;	// 0xa779
- (void)_rebuildHeaderRows;	// 0xa611
- (void)_reloadList;	// 0xa405
- (long)_rowForTitle:(id)title;	// 0xa5b1
- (void)wasExhumed;	// 0xa825
@end

