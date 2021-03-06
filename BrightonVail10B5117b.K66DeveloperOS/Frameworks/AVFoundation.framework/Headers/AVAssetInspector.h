/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "AVFigObjectInspector.h"

@class NSString, NSArray, AVMetadataItem, NSDictionary;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}
@property(readonly, assign, nonatomic) NSArray *alternateTrackGroups;	// G=0x302bdc9d; 
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x302bdd15; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x302bdcf9; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x302bdd59; 
@property(readonly, assign, nonatomic) AVMetadataItem *creationDate;	// G=0x302bdcf1; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x302bdbfd; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x302bdd51; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x302bdcf5; 
@property(readonly, assign, nonatomic) NSArray *mediaSelectionGroups;	// G=0x302bdcd5; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x302bdc81; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x302bdc89; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x302bdc35; 
@property(readonly, assign, nonatomic) float preferredSoundCheckVolumeNormalization;	// G=0x302bdc45; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x302bdc49; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x302bdc3d; 
@property(readonly, assign, nonatomic) BOOL providesPreciseDurationAndTiming;	// G=0x302bdc91; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x302bdd55; 
@property(readonly, assign, nonatomic) long trackCount;	// G=0x302bdc95; 
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x302bdc99; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x302bdcb9; 
// declared property getter: - (id)alternateTrackGroups;	// 0x302bdc9d
// declared property getter: - (id)availableMetadataFormats;	// 0x302bdd15
// declared property getter: - (id)commonMetadata;	// 0x302bdcf9
- (id)copyWithZone:(NSZone *)zone;	// 0x302bdbed
// declared property getter: - (id)creationDate;	// 0x302bdcf1
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x302bdbfd
- (BOOL)hasProtectedContent;	// 0x302bdd4d
// declared property getter: - (BOOL)isComposable;	// 0x302bdd59
// declared property getter: - (BOOL)isExportable;	// 0x302bdd51
// declared property getter: - (BOOL)isReadable;	// 0x302bdd55
// declared property getter: - (id)lyrics;	// 0x302bdcf5
// declared property getter: - (id)mediaSelectionGroups;	// 0x302bdcd5
- (id)metadataForFormat:(id)format;	// 0x302bdd31
// declared property getter: - (CGSize)naturalSize;	// 0x302bdc81
// declared property getter: - (int)naturalTimeScale;	// 0x302bdc89
// declared property getter: - (float)preferredRate;	// 0x302bdc35
// declared property getter: - (float)preferredSoundCheckVolumeNormalization;	// 0x302bdc45
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x302bdc49
// declared property getter: - (float)preferredVolume;	// 0x302bdc3d
// declared property getter: - (BOOL)providesPreciseDurationAndTiming;	// 0x302bdc91
// declared property getter: - (long)trackCount;	// 0x302bdc95
// declared property getter: - (id)trackIDs;	// 0x302bdc99
// declared property getter: - (id)trackReferences;	// 0x302bdcb9
@end

