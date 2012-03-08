/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "AVFigObjectInspector.h"

@class AVMetadataItem, NSDictionary, NSArray, NSString;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}
@property(readonly, assign, nonatomic) NSArray *alternateTrackGroups;	// G=0x30ecfe09; 
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x30ecfe79; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x30ecfe5d; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x30ecfd89; 
@property(readonly, assign, nonatomic) AVMetadataItem *creationDate;	// G=0x30ecfd75; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x30ecfd01; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x30ecfd81; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x30ecfd79; 
@property(readonly, assign, nonatomic) NSArray *mediaSelectionGroups;	// G=0x30ecfe41; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x30ecfd59; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x30ecfd61; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x30ecfd25; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x30ecfd35; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x30ecfd2d; 
@property(readonly, assign, nonatomic) BOOL providesPreciseDurationAndTiming;	// G=0x30ecfd69; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x30ecfd85; 
@property(readonly, assign, nonatomic) int trackCount;	// G=0x30ecfd6d; 
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x30ecfd71; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x30ecfe25; 
// declared property getter: - (id)alternateTrackGroups;	// 0x30ecfe09
// declared property getter: - (id)availableMetadataFormats;	// 0x30ecfe79
// declared property getter: - (id)commonMetadata;	// 0x30ecfe5d
- (id)copyWithZone:(NSZone *)zone;	// 0x30ecfdf9
// declared property getter: - (id)creationDate;	// 0x30ecfd75
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30ecfd01
- (BOOL)hasProtectedContent;	// 0x30ecfd7d
// declared property getter: - (BOOL)isComposable;	// 0x30ecfd89
// declared property getter: - (BOOL)isExportable;	// 0x30ecfd81
// declared property getter: - (BOOL)isReadable;	// 0x30ecfd85
// declared property getter: - (id)lyrics;	// 0x30ecfd79
// declared property getter: - (id)mediaSelectionGroups;	// 0x30ecfe41
- (id)metadataForFormat:(id)format;	// 0x30ecfe95
// declared property getter: - (CGSize)naturalSize;	// 0x30ecfd59
// declared property getter: - (int)naturalTimeScale;	// 0x30ecfd61
// declared property getter: - (float)preferredRate;	// 0x30ecfd25
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x30ecfd35
// declared property getter: - (float)preferredVolume;	// 0x30ecfd2d
// declared property getter: - (BOOL)providesPreciseDurationAndTiming;	// 0x30ecfd69
// declared property getter: - (long)trackCount;	// 0x30ecfd6d
// declared property getter: - (id)trackIDs;	// 0x30ecfd71
// declared property getter: - (id)trackReferences;	// 0x30ecfe25
@end

