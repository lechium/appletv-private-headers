/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"
#import "MediaPlayer-Structs.h"

@class NSString, NSSet;

@protocol MPMediaLibraryDataProvider <NSObject>
@property(readonly, assign, nonatomic) NSString *name;
@optional
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *syncValidity;
@required
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;
- (id)collectionResultSetForQueryCriteria:(id)queryCriteria;
@optional
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block progressHandler:(id)handler;
- (void)disconnect;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;
@required
- (id)itemResultSetForQueryCriteria:(id)queryCriteria;
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
- (void)loadCollectionsUsingFetchRequest:(id)request;
- (void)loadItemsUsingFetchRequest:(id)request;
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadQueryCriteria:(id)criteria countOfCollectionsWithCompletionBlock:(id)completionBlock;
- (void)loadQueryCriteria:(id)criteria countOfItemsWithCompletionBlock:(id)completionBlock;
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;
// declared property getter: - (id)name;
@optional
// declared property getter: - (id)propertiesToCache;
// declared property getter: - (BOOL)requiresAuthentication;
// declared property getter: - (id)syncValidity;
@required
// declared property getter: - (id)uniqueIdentifier;
@end
