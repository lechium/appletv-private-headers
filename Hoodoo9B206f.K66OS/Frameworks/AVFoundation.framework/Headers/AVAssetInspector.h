/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "AVFigObjectInspector.h"

@class AVMetadataItem, NSArray, NSDictionary, NSString;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying> {
}
@property(readonly, assign, nonatomic) NSArray *alternateTrackGroups;	// G=0x326ed7d5; 
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x326ed84d; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x326ed831; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x326ed891; 
@property(readonly, assign, nonatomic) AVMetadataItem *creationDate;	// G=0x326ed829; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x326ed739; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x326ed889; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x326ed82d; 
@property(readonly, assign, nonatomic) NSArray *mediaSelectionGroups;	// G=0x326ed80d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x326ed7b9; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x326ed7c1; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x326ed771; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x326ed781; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x326ed779; 
@property(readonly, assign, nonatomic) BOOL providesPreciseDurationAndTiming;	// G=0x326ed7c9; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x326ed88d; 
@property(readonly, assign, nonatomic) long trackCount;	// G=0x326ed7cd; 
@property(readonly, assign, nonatomic) NSArray *trackIDs;	// G=0x326ed7d1; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x326ed7f1; 
// declared property getter: - (id)alternateTrackGroups;	// 0x326ed7d5
// declared property getter: - (id)availableMetadataFormats;	// 0x326ed84d
// declared property getter: - (id)commonMetadata;	// 0x326ed831
- (id)copyWithZone:(NSZone *)zone;	// 0x326ed729
// declared property getter: - (id)creationDate;	// 0x326ed829
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x326ed739
- (BOOL)hasProtectedContent;	// 0x326ed885
// declared property getter: - (BOOL)isComposable;	// 0x326ed891
// declared property getter: - (BOOL)isExportable;	// 0x326ed889
// declared property getter: - (BOOL)isReadable;	// 0x326ed88d
// declared property getter: - (id)lyrics;	// 0x326ed82d
// declared property getter: - (id)mediaSelectionGroups;	// 0x326ed80d
- (id)metadataForFormat:(id)format;	// 0x326ed869
// declared property getter: - (CGSize)naturalSize;	// 0x326ed7b9
// declared property getter: - (int)naturalTimeScale;	// 0x326ed7c1
// declared property getter: - (float)preferredRate;	// 0x326ed771
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x326ed781
// declared property getter: - (float)preferredVolume;	// 0x326ed779
// declared property getter: - (BOOL)providesPreciseDurationAndTiming;	// 0x326ed7c9
// declared property getter: - (long)trackCount;	// 0x326ed7cd
// declared property getter: - (id)trackIDs;	// 0x326ed7d1
// declared property getter: - (id)trackReferences;	// 0x326ed7f1
@end

