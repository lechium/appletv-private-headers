/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class MRImage, NSMutableDictionary, NSMutableArray, MRImageProvider, NSDictionary, MRCroppingSprite, NSArray;

@interface MREffectDateline : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSDictionary *mJournal;	// 120 = 0x78
	NSMutableArray *mLengths;	// 124 = 0x7c
	NSMutableArray *mChapterDurations;	// 128 = 0x80
	NSMutableArray *mChapters;	// 132 = 0x84
	NSMutableDictionary *mText;	// 136 = 0x88
	NSMutableDictionary *mChapterDates;	// 140 = 0x8c
	NSMutableDictionary *mChapterNumDate;	// 144 = 0x90
	NSMutableArray *mIndicies;	// 148 = 0x94
	NSMutableDictionary *mWeatherImages;	// 152 = 0x98
	NSMutableDictionary *mDayImages;	// 156 = 0x9c
	NSMutableDictionary *mBreakInformation;	// 160 = 0xa0
	NSMutableDictionary *mMovieProviders;	// 164 = 0xa4
	NSArray *mSlideInformation;	// 168 = 0xa8
	BOOL mIsLoaded;	// 172 = 0xac
	BOOL mIsRotating;	// 173 = 0xad
	BOOL mIsVertical;	// 174 = 0xae
	MRImageProvider *mTextBackground;	// 176 = 0xb0
	MRImageProvider *mQuoteOpen;	// 180 = 0xb4
	MRImageProvider *mQuoteClose;	// 184 = 0xb8
	MRImageProvider *mQuoteBox;	// 188 = 0xbc
	MRImageProvider *mWeatherWindowMask;	// 192 = 0xc0
	MRImageProvider *mDateWindowMask;	// 196 = 0xc4
	MRImage *mGrayImage;	// 200 = 0xc8
	MRCroppingSprite *mChapterSprite;	// 204 = 0xcc
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x361cf2a1
+ (BOOL)hasCustomTiming;	// 0x361cf29d
+ (void)initialize;	// 0x361ce361
- (id)initWithEffectID:(id)effectID;	// 0x361ce40d
- (void)_addTextImage:(id)image forKey:(id)key inDictionary:(id)dictionary;	// 0x361dc6b5
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x361d1365
- (void)_calculateDurations:(id)durations slideInformation:(id)information aspectRatio:(float)ratio;	// 0x361d0ddd
- (double)_calculateMainDurationWithAttributes:(id)attributes;	// 0x361cf671
- (int)_chapterIndexForTime:(double)time;	// 0x361d3179
- (NSRange)_chapterRangeForSlide:(int)slide startIndex:(int *)index endIndex:(int *)index3;	// 0x361d0c9d
- (void)_cleanUpDictionary:(id)dictionary;	// 0x361dbe99
- (void)_cleanup;	// 0x361ce919
- (int)_currentItemForChapter:(int)chapter atTime:(double)time forDuration:(double *)duration fromTime:(double *)time4;	// 0x361d3671
- (void)_drawChapterDateSwitch:(int)aSwitch to:(int)to progress:(float)progress time:(double)time arguments:(id)arguments context:(id)context;	// 0x361dad31
- (void)_drawGrayChapters:(id)chapters time:(double)time arguments:(id)arguments showInfo:(BOOL)info startProgress:(float)progress titleEnd:(float)end titleToChapter:(float)chapter drawPhotos:(BOOL)photos startIndex:(int)index exit:(float)exit isExiting:(BOOL)exiting chapterIntro:(float)intro chapterProgress:(float)progress13;	// 0x361d69d9
- (BOOL)_isMovieForSlideAtIndex:(int)index;	// 0x361d1225
- (void)_loadDateForChapter:(int)chapter context:(id)context;	// 0x361dd5b9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x361de03d
- (void)_loadTextForChapter:(int)chapter context:(id)context;	// 0x361dcc71
- (int)_maxLinesForTextElement:(id)textElement;	// 0x361de741
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x361de719
- (double)_movieDurationForSlideAtIndex:(int)index;	// 0x361d12c5
- (float)_offsetForChapterIndex:(int)chapterIndex layoutIndex:(int)index aspectRatio:(float)ratio;	// 0x361d2fcd
- (CGSize)_sizeForBreakAspectRatio:(float)breakAspectRatio size:(CGSize)size inContext:(id)context;	// 0x361d0b21
- (float)_startTimeForChapter:(int)chapter;	// 0x361d32a9
- (double)_startTimeForSlideIndex:(int)slideIndex inChapter:(int)chapter;	// 0x361d33a1
- (id)_textImageForString:(id)string string2:(id)a2 type:(int)type inContext:(id)context firstLine:(CGRect *)line lastLine:(CGRect *)line6;	// 0x361dc029
- (id)_textImageForString:(id)string type:(int)type inContext:(id)context;	// 0x361dbff9
- (BOOL)_timeIs24HourFormat;	// 0x361ddee9
- (void)_unload;	// 0x361de745
- (void)_unloadTextForChapter:(int)chapter;	// 0x361dcb0d
- (void)_updateIndiciesWithAttributes:(id)attributes;	// 0x361cf3a1
- (void)_updateSlideProviders:(float)providers context:(id)context renderArguments:(id)arguments;	// 0x361d0081
- (id)_weatherStringForCondition:(int)condition;	// 0x361d2ed5
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x361dc6fd
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x361cfac1
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x361cfcc1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x361dbd05
- (void)endMorphing;	// 0x361dc90d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x361dbe51
- (BOOL)isLoadedForTime:(double)time;	// 0x361cfcd9
- (double)lowestDisplayTime;	// 0x361cfaa9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x361d1439
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x361d3959
- (void)setAttributes:(id)attributes;	// 0x361cffe5
- (void)setPixelSize:(CGSize)size;	// 0x361cef79
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x361cf899
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x361cf789
@end

