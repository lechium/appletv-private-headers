/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface UICollectionViewLayoutInvalidationContext : NSObject {
	NSMutableDictionary *_invalidatedSupplementaryViews;	// 4 = 0x4
	NSArray *_updateItems;	// 8 = 0x8
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _invalidationContextFlags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL invalidateDataSourceCounts;	// G=0x2f8c0d45; 
@property(readonly, assign, nonatomic) BOOL invalidateEverything;	// G=0x2f8c0d79; 
- (void)_invalidateSupplementaryElementsOfKind:(id)kind atIndexPaths:(id)indexPaths;	// 0x2f8c0c41
- (id)_invalidatedSupplementaryViews;	// 0x2f8c0bd5
- (void)_setInvalidateDataSourceCounts:(BOOL)counts;	// 0x2f8c0d59
- (void)_setInvalidateEverything:(BOOL)everything;	// 0x2f8c0d8d
- (void)_setInvalidatedSupplementaryViews:(id)views;	// 0x2f8c0be5
- (void)_setUpdateItems:(id)items;	// 0x2f8c0db1
- (id)_updateItems;	// 0x2f8c0df5
- (void)dealloc;	// 0x2f8c0b71
// declared property getter: - (BOOL)invalidateDataSourceCounts;	// 0x2f8c0d45
// declared property getter: - (BOOL)invalidateEverything;	// 0x2f8c0d79
@end

