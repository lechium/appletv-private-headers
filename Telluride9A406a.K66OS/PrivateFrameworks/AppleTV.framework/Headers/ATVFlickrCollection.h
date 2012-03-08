/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"

@class NSString;

@interface ATVFlickrCollection : ATVInternetPhotosCollection {
@private
	NSString *_keyImageFlickrIdentifier;	// 64 = 0x40
}
@property(retain) NSString *keyImageFlickrIdentifier;	// G=0x32f4a6d9; S=0x32f4a7a5; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x32f4a58d
- (id)archivableCollectionInfo;	// 0x32f4a875
- (id)collectionType;	// 0x32f4a9a9
- (void)dealloc;	// 0x32f4a68d
// converted property getter: - (id)keyImageFlickrIdentifier;	// 0x32f4a6d9
- (id)mediaTypes;	// 0x32f4a965
// converted property setter: - (void)setKeyImageFlickrIdentifier:(id)identifier;	// 0x32f4a7a5
@end

