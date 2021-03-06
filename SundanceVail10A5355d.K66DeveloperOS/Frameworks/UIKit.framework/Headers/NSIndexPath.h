/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSIndexPath.h> // Unknown library


@interface NSIndexPath (UITableView)
@property(readonly, assign, nonatomic) int row;	// G=0x33a4bd99; 
@property(readonly, assign, nonatomic) int section;	// G=0x33a4bd85; 
+ (id)indexPathForRow:(int)row inSection:(int)section;	// 0x33a4bb11
// declared property getter: - (int)row;	// 0x33a4bd99
// declared property getter: - (int)section;	// 0x33a4bd85
@end

@interface NSIndexPath (UICollectionViewAdditions)
@property(readonly, assign, nonatomic) int item;	// G=0x33df5481; 
+ (id)indexPathForItem:(int)item inSection:(int)section;	// 0x33df5471
// declared property getter: - (int)item;	// 0x33df5481
@end

