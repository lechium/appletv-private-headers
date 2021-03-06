/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UICollectionViewUpdateItem, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UICollectionViewUpdateGap : NSObject {
	UICollectionViewUpdateItem *_firstUpdateItem;	// 4 = 0x4
	UICollectionViewUpdateItem *_lastUpdateItem;	// 8 = 0x8
	NSMutableArray *_deleteItems;	// 12 = 0xc
	NSMutableArray *_insertItems;	// 16 = 0x10
	CGRect _beginningRect;	// 20 = 0x14
	CGRect _endingRect;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect beginningRect;	// G=0x3307c71d; S=0x3307c741; @synthesize=_beginningRect
@property(readonly, assign, nonatomic) NSArray *deleteItems;	// G=0x3307c6fd; @synthesize=_deleteItems
@property(assign, nonatomic) CGRect endingRect;	// G=0x3307c75d; S=0x3307c781; @synthesize=_endingRect
@property(retain, nonatomic) UICollectionViewUpdateItem *firstUpdateItem;	// G=0x3307c6bd; S=0x3307c6cd; @synthesize=_firstUpdateItem
@property(readonly, assign, nonatomic) BOOL hasInserts;	// G=0x3307c641; 
@property(readonly, assign, nonatomic) NSArray *insertItems;	// G=0x3307c70d; @synthesize=_insertItems
@property(readonly, assign, nonatomic) BOOL isDeleteBasedGap;	// G=0x3307c615; 
@property(readonly, assign, nonatomic) BOOL isSectionBasedGap;	// G=0x3307c699; 
@property(retain, nonatomic) UICollectionViewUpdateItem *lastUpdateItem;	// G=0x3307c6dd; S=0x3307c6ed; @synthesize=_lastUpdateItem
@property(readonly, assign, nonatomic) NSArray *updateItems;	// G=0x3307c66d; 
+ (id)gapWithUpdateItem:(id)updateItem;	// 0x3307c32d
- (id)init;	// 0x3307c3b5
- (void)addUpdateItem:(id)item;	// 0x3307c51d
// declared property getter: - (CGRect)beginningRect;	// 0x3307c71d
- (void)dealloc;	// 0x3307c589
// declared property getter: - (id)deleteItems;	// 0x3307c6fd
- (id)description;	// 0x3307c445
// declared property getter: - (CGRect)endingRect;	// 0x3307c75d
// declared property getter: - (id)firstUpdateItem;	// 0x3307c6bd
// declared property getter: - (BOOL)hasInserts;	// 0x3307c641
// declared property getter: - (id)insertItems;	// 0x3307c70d
// declared property getter: - (BOOL)isDeleteBasedGap;	// 0x3307c615
// declared property getter: - (BOOL)isSectionBasedGap;	// 0x3307c699
// declared property getter: - (id)lastUpdateItem;	// 0x3307c6dd
// declared property setter: - (void)setBeginningRect:(CGRect)rect;	// 0x3307c741
// declared property setter: - (void)setEndingRect:(CGRect)rect;	// 0x3307c781
// declared property setter: - (void)setFirstUpdateItem:(id)item;	// 0x3307c6cd
// declared property setter: - (void)setLastUpdateItem:(id)item;	// 0x3307c6ed
// declared property getter: - (id)updateItems;	// 0x3307c66d
@end

