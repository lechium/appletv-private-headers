/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaAsset.h"

@class NSString, ATVDotMacSecondaryAccount;

__attribute__((visibility("hidden")))
@interface ATVDotMacAsset : BRPhotoMediaAsset {
	NSString *_parentAccountName;	// 40 = 0x28
	NSString *_parentCollectionIdentifier;	// 44 = 0x2c
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 48 = 0x30
	NSString *_dotMacIdentifier;	// 52 = 0x34
	NSString *_dateString;	// 56 = 0x38
}
@property(retain) NSString *dotMacIdentifier;	// G=0x1831f9; S=0x1832d5; converted property
@property(retain) NSString *parentAccountName;	// G=0x182e71; S=0x182f4d; converted property
@property(retain) NSString *parentCollectionIdentifier;	// G=0x183035; S=0x183111; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x182cad; S=0x182d89; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x182a6d
- (id)initWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x182ac5
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x1834f1
- (id)dateTaken;	// 0x1833bd
- (void)dealloc;	// 0x182bcd
// converted property getter: - (id)dotMacIdentifier;	// 0x1831f9
- (id)imageProxy;	// 0x182c8d
- (BOOL)isLocal;	// 0x182c6d
- (id)mediaType;	// 0x182c71
// converted property getter: - (id)parentAccountName;	// 0x182e71
// converted property getter: - (id)parentCollectionIdentifier;	// 0x183035
// converted property getter: - (id)secondaryAccount;	// 0x182cad
// converted property setter: - (void)setDotMacIdentifier:(id)identifier;	// 0x1832d5
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x182f4d
// converted property setter: - (void)setParentCollectionIdentifier:(id)identifier;	// 0x183111
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x182d89
@end
