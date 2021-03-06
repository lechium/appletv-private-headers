/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, ATVFeedTextTableDataSet;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : XXUnknownSuperclass {
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x133eb5; S=0x133ec9; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x133e91; S=0x133ea5; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x133ee1; S=0x133ef5; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x133aa9; S=0x133a55; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x133f0d; S=0x133f21; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x133e6d; S=0x133e81; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x133f39; S=0x133f4d; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x133eb5
// declared property getter: - (id)cellTextAttributes;	// 0x133e91
// declared property getter: - (float)cellWidth;	// 0x133ee1
// declared property getter: - (id)dataSet;	// 0x133aa9
- (void)dealloc;	// 0x1339dd
// declared property getter: - (float)headerHeight;	// 0x133f0d
- (float)headerHeightForTableView:(id)tableView;	// 0x133e4d
// declared property getter: - (id)headerTextAttributes;	// 0x133e6d
// declared property getter: - (float)headerWidth;	// 0x133f39
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x133af1
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x133bbd
- (long)numberOfRowsInTableView:(id)tableView;	// 0x133ab9
// declared property setter: - (void)setCellHeight:(float)height;	// 0x133ec9
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x133ea5
// declared property setter: - (void)setCellWidth:(float)width;	// 0x133ef5
// declared property setter: - (void)setDataSet:(id)set;	// 0x133a55
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x133f21
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x133e81
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x133f4d
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x133cf5
- (float)tableView:(id)view heightForRow:(long)row;	// 0x133e3d
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x133bf5
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x133e2d
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x133e5d
@end

