/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaAsset.h"

@class NSString, ATVDotMacSecondaryAccount;

__attribute__((visibility("hidden")))
@interface ATVDotMacAsset : BRPhotoMediaAsset {
@private
	NSString *_parentAccountName;	// 40 = 0x28
	NSString *_parentCollectionIdentifier;	// 44 = 0x2c
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 48 = 0x30
	NSString *_dotMacIdentifier;	// 52 = 0x34
	NSString *_dateString;	// 56 = 0x38
}
@property(retain) NSString *dotMacIdentifier;	// G=0x3394d8a5; S=0x3394d971; converted property
@property(retain) NSString *parentAccountName;	// G=0x3394d56d; S=0x3394d639; converted property
@property(retain) NSString *parentCollectionIdentifier;	// G=0x3394d709; S=0x3394d7d5; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x3394d3d1; S=0x3394d49d; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x3394d18d
- (id)initWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x3394d1e5
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x3394db5d
- (id)dateTaken;	// 0x3394da41
- (void)dealloc;	// 0x3394d2f5
// converted property getter: - (id)dotMacIdentifier;	// 0x3394d8a5
- (id)imageProxy;	// 0x3394d3b1
- (BOOL)isLocal;	// 0x3394d391
- (id)mediaType;	// 0x3394d395
// converted property getter: - (id)parentAccountName;	// 0x3394d56d
// converted property getter: - (id)parentCollectionIdentifier;	// 0x3394d709
// converted property getter: - (id)secondaryAccount;	// 0x3394d3d1
// converted property setter: - (void)setDotMacIdentifier:(id)identifier;	// 0x3394d971
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x3394d639
// converted property setter: - (void)setParentCollectionIdentifier:(id)identifier;	// 0x3394d7d5
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x3394d49d
@end

