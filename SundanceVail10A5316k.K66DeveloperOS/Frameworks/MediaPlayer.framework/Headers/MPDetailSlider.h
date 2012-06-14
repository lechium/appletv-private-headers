/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UIImageView, NSString, NSTimer, UILabel;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	UILabel *_currentTimeInverseLabel;	// 176 = 0xb0
	UILabel *_currentTimeLabel;	// 180 = 0xb4
@private
	BOOL _allowsScrubbing;	// 184 = 0xb8
	BOOL _allowsDetailScrubbing;	// 185 = 0xb9
	BOOL _autoscrubActive;	// 186 = 0xba
	NSTimer *_autoscrubTimer;	// 188 = 0xbc
	double _availableDuration;	// 192 = 0xc0
	CGPoint _beginLocationInView;	// 200 = 0xc8
	BOOL _canCommit;	// 208 = 0xd0
	double _currentTime;	// 212 = 0xd4
	id _delegate;	// 220 = 0xdc
	float _detailScrubbingVerticalRange;	// 224 = 0xe0
	BOOL _didBeginTracking;	// 228 = 0xe4
	UIImageView *_downloadingTrackOverlay;	// 232 = 0xe8
	double _duration;	// 236 = 0xec
	BOOL _durationAllowsDetailScrubbing;	// 244 = 0xf4
	UIImageView *_glowDetailScrubImageView;	// 248 = 0xf8
	BOOL _isTracking;	// 252 = 0xfc
	CGPoint _lastCommittedLocationInView;	// 256 = 0x100
	float _minScale;	// 264 = 0x108
	float _minTimeLabelWidth;	// 268 = 0x10c
	float _maxTrackWidth;	// 272 = 0x110
	BOOL _needsCommit;	// 276 = 0x114
	CGPoint _previousLocationInView;	// 280 = 0x118
	int _scrubValue;	// 288 = 0x120
	int _style;	// 292 = 0x124
	UIEdgeInsets _timeLabelInsets;	// 296 = 0x128
	int _timeLabelStyle;	// 312 = 0x138
	UIImageView *_thumbImageView;	// 316 = 0x13c
	float _trackInset;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x34875205; S=0x3487544d; 
@property(assign, nonatomic) BOOL allowsScrubbing;	// G=0x348770c1; S=0x348753e9; @synthesize=_allowsScrubbing
@property(assign, nonatomic) double availableDuration;	// G=0x3487700d; S=0x34875469; @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// G=0x34877025; S=0x34877035; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;	// G=0x348752e9; 
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// G=0x34877045; S=0x34877055; @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// G=0x34877065; S=0x348754e1; @synthesize=_duration
@property(readonly, assign) BOOL isTracking;	// G=0x348751d1; converted property
@property(readonly, assign, nonatomic) NSString *localizedScrubSpeedText;	// G=0x34875319; 
@property(assign, nonatomic) float minTimeLabelWidth;	// G=0x348770b1; S=0x34875609; @synthesize=_minTimeLabelWidth
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// G=0x3487707d; S=0x34875641; @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// G=0x348770a1; S=0x348756d1; @synthesize=_timeLabelStyle
+ (float)defaultHeight;	// 0x348751e1
+ (Class)labelClass;	// 0x348751e9
- (id)initWithFrame:(CGRect)frame;	// 0x34873475
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3487343d
- (id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;	// 0x34873369
- (void)_adjustMinScale;	// 0x34875e79
- (void)_autoscrubTick:(id)tick;	// 0x34874491
- (void)_commitValue;	// 0x348765ad
- (void)_resetScrubInfo;	// 0x34876525
- (float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;	// 0x34876041
- (float)_scaleForVerticalPosition:(float)verticalPosition;	// 0x34875ee9
- (void)_setValueWhileTracking:(float)tracking animated:(BOOL)animated;	// 0x34874209
- (void)_setupControlsForStyle;	// 0x3487588d
- (id)_stringForCurrentTime:(double)currentTime;	// 0x34876359
- (id)_stringForInverseCurrentTime:(double)inverseCurrentTime;	// 0x348763fd
- (id)_stringForTime:(double)time;	// 0x34876231
- (CGRect)_thumbHitFrame;	// 0x348764d1
- (void)_updateForAvailableDuraton;	// 0x34876651
- (void)_updateTimeDisplayForTime:(double)time;	// 0x34876125
- (void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;	// 0x34876149
- (void)_updateTrackInset;	// 0x34875ae1
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x34875205
// declared property getter: - (BOOL)allowsScrubbing;	// 0x348770c1
// declared property getter: - (double)availableDuration;	// 0x3487700d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34874369
- (void)cancelTracking;	// 0x34875215
- (void)cancelTrackingWithEvent:(id)event;	// 0x348751c1
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34874709
- (id)createThumbView;	// 0x34873bcd
- (id)currentThumbImage;	// 0x34873c99
- (void)dealloc;	// 0x348734a9
// declared property getter: - (id)delegate;	// 0x34877025
// declared property getter: - (BOOL)detailScrubbingAvailableForCurrentDuration;	// 0x348752e9
// declared property getter: - (float)detailScrubbingVerticalRange;	// 0x34877045
// declared property getter: - (double)duration;	// 0x34877065
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x34875081
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34873559
// converted property getter: - (BOOL)isTracking;	// 0x348751d1
- (void)layoutSubviews;	// 0x348735d9
// declared property getter: - (id)localizedScrubSpeedText;	// 0x34875319
// declared property getter: - (float)minTimeLabelWidth;	// 0x348770b1
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x3487544d
// declared property setter: - (void)setAllowsScrubbing:(BOOL)scrubbing;	// 0x348753e9
// declared property setter: - (void)setAvailableDuration:(double)duration;	// 0x34875469
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34877035
// declared property setter: - (void)setDetailScrubbingVerticalRange:(float)range;	// 0x34877055
// declared property setter: - (void)setDuration:(double)duration;	// 0x348754e1
- (void)setFrame:(CGRect)frame;	// 0x34873b69
// declared property setter: - (void)setMinTimeLabelWidth:(float)width;	// 0x34875609
// declared property setter: - (void)setTimeLabelInsets:(UIEdgeInsets)insets;	// 0x34875641
// declared property setter: - (void)setTimeLabelStyle:(int)style;	// 0x348756d1
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x348741d9
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x34873fc5
- (id)timeLabelFontForStyle:(int)style;	// 0x348756f9
// declared property getter: - (UIEdgeInsets)timeLabelInsets;	// 0x3487707d
- (id)timeLabelShadowColorForStyle:(int)style;	// 0x348757a1
- (CGSize)timeLabelShadowOffsetForStyle:(int)style;	// 0x348757ed
// declared property getter: - (int)timeLabelStyle;	// 0x348770a1
- (id)timeLabelTextColorForStyle:(int)style;	// 0x3487581d
- (float)timeLabelVerticalOffsetForStyle:(int)style;	// 0x34875869
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x34873efd
@end
