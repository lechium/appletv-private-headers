/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSection.h"

@class RUIYTAssetsInfo;

__attribute__((visibility("hidden")))
@interface RUIYTAssetsListSection : RUIYTListSection {
	BOOL _treatAsPlaylist;	// 12 = 0xc
	BOOL _requestsPageLoad;	// 13 = 0xd
	RUIYTAssetsInfo *_assetsInfo;	// 16 = 0x10
}
@property(retain) RUIYTAssetsInfo *assetsInfo;	// G=0x267ee9; S=0x267efd; @synthesize=_assetsInfo
@property(assign) BOOL requestsPageLoad;	// G=0x267eb9; S=0x267ed1; @synthesize=_requestsPageLoad
@property(assign) BOOL treatAsPlaylist;	// G=0x267e89; S=0x267ea1; @synthesize=_treatAsPlaylist
- (void).cxx_destruct;	// 0x267f0d
// declared property getter: - (id)assetsInfo;	// 0x267ee9
// declared property getter: - (BOOL)requestsPageLoad;	// 0x267eb9
// declared property setter: - (void)setAssetsInfo:(id)info;	// 0x267efd
// declared property setter: - (void)setRequestsPageLoad:(BOOL)load;	// 0x267ed1
// declared property setter: - (void)setTreatAsPlaylist:(BOOL)playlist;	// 0x267ea1
// declared property getter: - (BOOL)treatAsPlaylist;	// 0x267e89
@end

