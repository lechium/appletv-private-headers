/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaQueryCriteria;

@interface MPMediaLibraryEntityWriteStream : NSObject {
@private
	id _entityArray;	// 4 = 0x4
	MPMediaQueryCriteria *_queryCriteria;	// 8 = 0x8
	unsigned _index;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	BOOL _cancelled;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;	// G=0x346b7f61; 
@property(readonly, assign, nonatomic) unsigned count;	// G=0x346b7f41; 
@property(readonly, assign, nonatomic) unsigned index;	// G=0x346b7f51; 
- (id)initWithEntityStreamArray:(id)entityStreamArray queryCriteria:(id)criteria count:(unsigned)count;	// 0x346b7df5
- (void)_writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria representativeItemIdentifier:(long long)identifier4;	// 0x346b8279
- (void)cancel;	// 0x346b8329
// declared property getter: - (unsigned)count;	// 0x346b7f41
- (void)dealloc;	// 0x346b7e89
- (id)description;	// 0x346b7ee9
// declared property getter: - (unsigned)index;	// 0x346b7f51
// declared property getter: - (BOOL)isCancelled;	// 0x346b7f61
- (void)writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x346b7fe1
- (void)writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties representativeItemIdentifier:(long long)identifier3;	// 0x346b800d
- (void)writeItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x346b7f71
@end
