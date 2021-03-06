/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray, BRImage, NSMutableDictionary, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRTransportLayer : BRControl {
	BOOL _zeroDuration;	// 77 = 0x4d
	BOOL _drawsBetweenLeftEdgeAndBufferEdge;	// 78 = 0x4e
	BOOL _useWideLeftEndCap;	// 79 = 0x4f
	BOOL _playerStateHidden;	// 80 = 0x50
	float _percentComplete;	// 84 = 0x54
	NSRange _downloadedRange;	// 88 = 0x58
	int _currentState;	// 96 = 0x60
	NSMutableDictionary *_cachedImages;	// 100 = 0x64
	CGRect _leftEndCapBounds;	// 104 = 0x68
	CGRect _rightEndCapBounds;	// 120 = 0x78
	CGRect _leftEndCapExtensionBounds;	// 136 = 0x88
	BRImage *_leftEndCap;	// 152 = 0x98
	BRImage *_leftEndCapPiece;	// 156 = 0x9c
	BRImage *_rightEndCap;	// 160 = 0xa0
	CGRect _leftProgressEndCapBounds;	// 164 = 0xa4
	CGRect _rightProgressEndCapBounds;	// 180 = 0xb4
	BRImage *_leftProgressEndCap;	// 196 = 0xc4
	BRImage *_rightProgressEndCap;	// 200 = 0xc8
	BRImage *_leftProgressUnbufferedEndCap;	// 204 = 0xcc
	CGRect _leftGrayBarBounds;	// 208 = 0xd0
	CGRect _rightGrayBarBounds;	// 224 = 0xe0
	BRImage *_grayBarPiece;	// 240 = 0xf0
	CGRect _rightGrayEndCapBounds;	// 244 = 0xf4
	BRImage *_rightGrayEndCap;	// 260 = 0x104
	CGRect _leftWhiteBarBounds;	// 264 = 0x108
	CGRect _rightWhiteBarBounds;	// 280 = 0x118
	BRImage *_whiteBarPiece;	// 296 = 0x128
	CGRect _blueAlreadyPlayedBounds;	// 300 = 0x12c
	BRImage *_blueAlreadyPlayed;	// 316 = 0x13c
	CGRect _chapterMarkerBounds;	// 320 = 0x140
	NSArray *_chapterMarkers;	// 336 = 0x150
	NSArray *_interstitialMarkers;	// 340 = 0x154
	BRImage *_interstitialOnImage;	// 344 = 0x158
	BRImage *_interstitialOffImage;	// 348 = 0x15c
	long _currentInterstitialIndex;	// 352 = 0x160
	float _temporaryMarkerPositionPercentage;	// 356 = 0x164
	BOOL _showChapterMarkers;	// 360 = 0x168
	CGRect _playheadBounds;	// 364 = 0x16c
	BRImage *_playhead;	// 380 = 0x17c
	CGSize _dynamicBounds;	// 384 = 0x180
	CGSize _staticBounds;	// 392 = 0x188
	BRWaitSpinnerControl *_spinner;	// 400 = 0x190
}
@property(assign) BOOL showChapterMarks;	// G=0x2ee345; S=0x2ee325; converted property
- (id)initWithSpinner:(BOOL)spinner;	// 0x2ed971
- (id)_cachedImageForName:(id)name;	// 0x2ee7d1
- (void)_drawChapterMarkersInContext:(CGContextRef)context;	// 0x2ef1c5
- (void)_drawInterstitialMarkersInContext:(CGContextRef)context;	// 0x2ef539
- (id)_loadImageForName:(id)name;	// 0x2ee83d
- (void)_updateDynamicFrames;	// 0x2eec89
- (void)_updateLeftEnd;	// 0x2ee6a1
- (void)_updateStaticFrames;	// 0x2ee8b1
- (void)dealloc;	// 0x2edc25
- (void)drawRect:(CGRect)rect;	// 0x2ee385
- (void)layoutSubcontrols;	// 0x2ee355
- (CGRect)leftEndCapRenderableArea;	// 0x2edfa1
- (float)playheadPosition;	// 0x2ee181
- (CGRect)rightEndCapFrame;	// 0x2edf01
- (void)setChapterMarkers:(id)markers withTemporaryMarker:(float)temporaryMarker;	// 0x2ee225
- (void)setCurrentInterstitialIndex:(long)index;	// 0x2ee305
- (void)setDownloadedRange:(NSRange)range;	// 0x2edeb1
- (void)setDrawsBetweenLeftEdgeAndBufferEdge:(BOOL)edge;	// 0x2edd81
- (void)setInterstitialMarkers:(id)markers;	// 0x2ee2a1
- (void)setPercentComplete:(float)complete;	// 0x2edd0d
- (void)setPlayerStateHidden:(BOOL)hidden;	// 0x2ede21
// converted property setter: - (void)setShowChapterMarks:(BOOL)marks;	// 0x2ee325
- (void)setState:(int)state;	// 0x2edcb1
- (void)setUseWideLeftEndCap:(BOOL)cap;	// 0x2eddc9
- (void)setZeroDuration:(BOOL)duration;	// 0x2ede69
// converted property getter: - (BOOL)showChapterMarks;	// 0x2ee345
@end

