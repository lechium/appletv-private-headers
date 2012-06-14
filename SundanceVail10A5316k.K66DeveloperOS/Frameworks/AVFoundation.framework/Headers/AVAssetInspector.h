/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "AVFigObjectInspector.h"

@class AVMetadataItem, NSDictionary, NSString, NSArray;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}
@property(readonly, assign, nonatomic) NSArray *alternateTrackGroups;	// G=0x36779ca1; 
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x36779d19; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x36779cfd; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x36779d5d; 
@property(readonly, assign, nonatomic) AVMetadataItem *creationDate;	// G=0x36779cf5; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x36779c05; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x36779d55; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x36779cf9; 
@property(readonly, assign, nonatomic) NSArray *mediaSelectionGroups;	// G=0x36779cd9; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x36779c85; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x36779c8d; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x36779c3d; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x36779c4d; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x36779c45; 
@property(readonly, assign, nonatomic) BOOL providesPreciseDurationAndTiming;	// G=0x36779c95; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x36779d59; 
@property(readonly, assign, nonatomic) long trackCount;	// G=0x36779c99; 
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x36779c9d; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x36779cbd; 
// declared property getter: - (id)alternateTrackGroups;	// 0x36779ca1
// declared property getter: - (id)availableMetadataFormats;	// 0x36779d19
// declared property getter: - (id)commonMetadata;	// 0x36779cfd
- (id)copyWithZone:(NSZone *)zone;	// 0x36779bf5
// declared property getter: - (id)creationDate;	// 0x36779cf5
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x36779c05
- (BOOL)hasProtectedContent;	// 0x36779d51
// declared property getter: - (BOOL)isComposable;	// 0x36779d5d
// declared property getter: - (BOOL)isExportable;	// 0x36779d55
// declared property getter: - (BOOL)isReadable;	// 0x36779d59
// declared property getter: - (id)lyrics;	// 0x36779cf9
// declared property getter: - (id)mediaSelectionGroups;	// 0x36779cd9
- (id)metadataForFormat:(id)format;	// 0x36779d35
// declared property getter: - (CGSize)naturalSize;	// 0x36779c85
// declared property getter: - (int)naturalTimeScale;	// 0x36779c8d
// declared property getter: - (float)preferredRate;	// 0x36779c3d
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x36779c4d
// declared property getter: - (float)preferredVolume;	// 0x36779c45
// declared property getter: - (BOOL)providesPreciseDurationAndTiming;	// 0x36779c95
// declared property getter: - (long)trackCount;	// 0x36779c99
// declared property getter: - (id)trackIDs;	// 0x36779c9d
// declared property getter: - (id)trackReferences;	// 0x36779cbd
@end

