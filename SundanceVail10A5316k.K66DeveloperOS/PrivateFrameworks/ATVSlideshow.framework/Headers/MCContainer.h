/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSDictionary, MCAudioPlaylist, MCPlug;

@interface MCContainer : MCObject {
	unsigned short mFlags;	// 12 = 0xc
@private
	unsigned short mSpecialRetainCount;	// 14 = 0xe
	MCAudioPlaylist *mAudioPlaylist;	// 16 = 0x10
	NSDictionary *mInitialState;	// 20 = 0x14
	MCPlug *mReferencingPlug;	// 24 = 0x18
}
@property(readonly, assign) MCAudioPlaylist *audioPlaylist;	// G=0x365395c9; @synthesize=mAudioPlaylist
@property(readonly, assign) MCAudioPlaylist *audioPlaylistCreateIfNeeded;	// G=0x36539269; 
@property(retain) NSDictionary *initialState;	// G=0x365395dd; S=0x365395f1; @synthesize=mInitialState
@property(readonly, assign) MCPlug *referencingPlug;	// G=0x36539615; @synthesize=mReferencingPlug
- (id)init;	// 0x36538fd1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x36538ffd
// declared property getter: - (id)audioPlaylist;	// 0x365395c9
// declared property getter: - (id)audioPlaylistCreateIfNeeded;	// 0x36539269
- (void)demolish;	// 0x36539105
- (id)imprint;	// 0x365391d5
// declared property getter: - (id)initialState;	// 0x365395dd
- (void)referenceByPlug:(id)plug;	// 0x365393e1
// declared property getter: - (id)referencingPlug;	// 0x36539615
// declared property setter: - (void)setInitialState:(id)state;	// 0x365395f1
- (void)specialRelease;	// 0x3653954d
- (id)specialRetain;	// 0x3653947d
- (void)unreferenceByPlug:(id)plug;	// 0x36539409
@end

