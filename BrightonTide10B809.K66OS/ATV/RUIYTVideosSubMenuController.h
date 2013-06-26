/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import "BRViewController.h"

@class RUIYTVideosDocumentSpec, RUIYTAssetsInfo, RUIYTListDataSourceAspect, RUIYTDocumentLoader, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface RUIYTVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	RUIYTDocumentLoader *_documentLoader;	// 108 = 0x6c
	RUIYTVideosDocumentSpec *_spec;	// 112 = 0x70
	RUIYTAssetsInfo *_initialAssetsInfo;	// 116 = 0x74
	BOOL _playWhenPushed;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
}
@property(assign) BOOL playWhenPushed;	// G=0x288dfd; S=0x288e15; @synthesize=_playWhenPushed
+ (id)controllerWithSpec:(id)spec;	// 0x288299
+ (id)controllerWithSpec:(id)spec assetsInfo:(id)info;	// 0x2882e1
- (id)initWithSpec:(id)spec assetsInfo:(id)info;	// 0x288341
- (void).cxx_destruct;	// 0x288e2d
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x288f95
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x288e9d
- (void)dealloc;	// 0x288605
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x288af1
- (id)identifier;	// 0x2886a5
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x288c41
// declared property getter: - (BOOL)playWhenPushed;	// 0x288dfd
// declared property setter: - (void)setPlayWhenPushed:(BOOL)pushed;	// 0x288e15
- (void)wasPushed;	// 0x2886c5
@end
