/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTListSectionHandling.h"
#import "RUIYTVideoPlaybackAspectDelegate.h"

@class RUIYTVideoPlaybackAspect, NSDictionary, RUIYTListDataSourceAspect;

__attribute__((visibility("hidden")))
@interface RUIYTVideoListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 4 = 0x4
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 8 = 0x8
	NSDictionary *_likesBadgeTextAttributes;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *likesBadgeTextAttributes;	// G=0x25336d; S=0x2533dd; @synthesize=_likesBadgeTextAttributes
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x2533bd; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect videoPlaybackAspect:(id)aspect;	// 0x25247d
- (void).cxx_destruct;	// 0x253405
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x252b4d
- (id)itemForIndex:(id)index;	// 0x252525
- (float)itemHeightForIndex:(id)index;	// 0x252b05
- (id)itemIDForIndex:(id)index;	// 0x2529d9
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x252ccd
// declared property getter: - (id)likesBadgeTextAttributes;	// 0x25336d
// declared property getter: - (id)listDataSourceAspect;	// 0x2533bd
- (BOOL)loadMoreAssetsForVideoPlaybackAspect:(id)videoPlaybackAspect;	// 0x2530b9
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0x252eb9
- (BOOL)moreAssetsFailed:(id)failed forSection:(unsigned)section;	// 0x253009
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback;	// 0x2531ad
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x252b51
// declared property setter: - (void)setLikesBadgeTextAttributes:(id)attributes;	// 0x2533dd
@end
