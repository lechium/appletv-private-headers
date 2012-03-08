/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAudioMix, NSArray, NSURL, AVAsset, NSError, AVVideoComposition, NSString, AVAssetExportSessionInternal;

@interface AVAssetExportSession : NSObject {
@private
	AVAssetExportSessionInternal *_exportSession;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x30ae6f1d; 
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x30ae8169; S=0x30ae8189; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x30ae741d; 
@property(readonly, assign, nonatomic) long long estimatedOutputFileLength;	// G=0x30ae7f6d; 
@property(assign, nonatomic) long long fileLengthLimit;	// G=0x30ae80c5; S=0x30ae80e9; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;	// G=0x30ae7ef1; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x30ae7ff1; S=0x30ae8011; 
@property(copy, nonatomic) NSString *outputFileType;	// G=0x30ae6fcd; S=0x30ae6fed; 
@property(copy, nonatomic) NSURL *outputURL;	// G=0x30ae71a9; S=0x30ae71c9; 
@property(readonly, assign, nonatomic) NSString *presetName;	// G=0x30ae6f3d; 
@property(readonly, assign, nonatomic) float progress;	// G=0x30ae7695; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x30ae843d; S=0x30ae845d; 
@property(readonly, assign, nonatomic) int status;	// G=0x30ae72b1; 
@property(readonly, assign, nonatomic) NSArray *supportedFileTypes;	// G=0x30ae6f5d; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x30ae7dc9; S=0x30ae7e25; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x30ae823d; S=0x30ae825d; 
+ (long long)_estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;	// 0x30ae9341
+ (id)_figRemakerNotificationNames;	// 0x30ae8fad
+ (XXStruct_pwHToB)_maximumDurationForPreset:(id)preset fileSizeBytesLimit:(long long)limit properties:(id)properties;	// 0x30ae904d
+ (id)_settingForPreset:(id)preset;	// 0x30ae88d5
+ (id)_utTypesForAudioOnly;	// 0x30ae87f9
+ (id)_utTypesForPresets;	// 0x30ae84d9
+ (id)allExportPresets;	// 0x30ae64f1
+ (long long)estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;	// 0x30ae68d5
+ (id)exportPresetsCompatibleWithAsset:(id)asset;	// 0x30ae6691
+ (id)exportSessionWithAsset:(id)asset presetName:(id)name;	// 0x30ae680d
+ (XXStruct_pwHToB)maximumDurationForPreset:(id)preset properties:(id)properties;	// 0x30ae6859
- (id)init;	// 0x30ae6919
- (id)initWithAsset:(id)asset presetName:(id)name;	// 0x30ae692d
- (id)_actualPresetName;	// 0x30ae96a1
- (id)_actualSettingForPreset:(id)preset;	// 0x30ae8919
- (void)_addListeners;	// 0x30ae9ccd
- (BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;	// 0x30aea389
- (BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;	// 0x30aeac3d
- (OpaqueFigRemaker *)_createFigRemaker;	// 0x30aeb5b9
- (CGSize)_getSourceDimension;	// 0x30ae9e1d
- (int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;	// 0x30ae9fcd
- (void)_handleFigRemakerNotification:(id)notification;	// 0x30ae94e5
- (void)_handleFigRemakerNotificationAsync:(id)async;	// 0x30ae95dd
- (BOOL)_hasProtectedNonAudioVideoTracks;	// 0x30aea0e5
- (void)_removeListeners;	// 0x30ae9b21
- (id)_settingForFigRemaker;	// 0x30aeab05
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;	// 0x30aea259
- (void)_transitionToStatus:(int)status error:(id)error;	// 0x30ae96d1
- (void)_updateProgress;	// 0x30ae75e9
// declared property getter: - (id)asset;	// 0x30ae6f1d
// declared property getter: - (id)audioMix;	// 0x30ae8169
- (void)cancelExport;	// 0x30ae7db5
- (void)dealloc;	// 0x30ae6b9d
- (id)description;	// 0x30ae6e79
// declared property getter: - (id)error;	// 0x30ae741d
// declared property getter: - (long long)estimatedOutputFileLength;	// 0x30ae7f6d
- (void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;	// 0x30ae7821
// declared property getter: - (long long)fileLengthLimit;	// 0x30ae80c5
- (void)finalize;	// 0x30ae6d95
// declared property getter: - (XXStruct_pwHToB)maxDuration;	// 0x30ae7ef1
// declared property getter: - (id)metadata;	// 0x30ae7ff1
// declared property getter: - (id)outputFileType;	// 0x30ae6fcd
// declared property getter: - (id)outputURL;	// 0x30ae71a9
// declared property getter: - (id)presetName;	// 0x30ae6f3d
// declared property getter: - (float)progress;	// 0x30ae7695
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x30ae8189
// declared property setter: - (void)setFileLengthLimit:(long long)limit;	// 0x30ae80e9
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30ae8011
// declared property setter: - (void)setOutputFileType:(id)type;	// 0x30ae6fed
// declared property setter: - (void)setOutputURL:(id)url;	// 0x30ae71c9
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x30ae845d
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x30ae7e25
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x30ae825d
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x30ae843d
// declared property getter: - (int)status;	// 0x30ae72b1
// declared property getter: - (id)supportedFileTypes;	// 0x30ae6f5d
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x30ae7dc9
// declared property getter: - (id)videoComposition;	// 0x30ae823d
@end

