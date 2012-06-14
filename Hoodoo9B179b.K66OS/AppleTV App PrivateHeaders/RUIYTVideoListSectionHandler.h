/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTVideoPlaybackAspectDelegate.h"
#import "RUIYTListSectionHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIYTVideoPlaybackAspect, RUIYTListDataSourceAspect;

__attribute__((visibility("hidden")))
@interface RUIYTVideoListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 4 = 0x4
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0xaca95; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect videoPlaybackAspect:(id)aspect;	// 0xabbad
- (void).cxx_destruct;	// 0xacab5
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0xac265
- (id)itemForIndex:(id)index;	// 0xabc51
- (float)itemHeightForIndex:(id)index;	// 0xac21d
- (id)itemIDForIndex:(id)index;	// 0xac0f1
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0xac3e5
// declared property getter: - (id)listDataSourceAspect;	// 0xaca95
- (BOOL)loadMoreAssetsForVideoPlaybackAspect:(id)videoPlaybackAspect;	// 0xac7e1
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0xac5d1
- (BOOL)moreAssetsFailed:(id)failed forSection:(unsigned)section;	// 0xac729
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback;	// 0xac8d5
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0xac269
@end
