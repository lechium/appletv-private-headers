/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"
#import "BRSelectionHandler.h"
#import "AppleTV-Structs.h"
#import "BRControlFactory.h"

@class NSMutableArray;

@interface ATVRentedMediaProvider : NSObject <BRProvider, BRSelectionHandler, BRControlFactory> {
@private
	ATVMediaTypeRef _mediaType;	// 4 = 0x4
	ATVMediaQueryRef _dataQuery;	// 8 = 0x8
	NSMutableArray *_rentedMovies;	// 12 = 0xc
}
+ (id)providerWithMediaType:(ATVMediaTypeRef)mediaType;	// 0x301d3805
- (id)init;	// 0x301d3851
- (id)initWithMediaType:(ATVMediaTypeRef)mediaType;	// 0x301d3871
- (void)_accountLoggedOut:(id)anOut;	// 0x301d3f65
- (void)_reloadRentals;	// 0x301d3c05
- (void)_rentalQueryComplete;	// 0x301d3e29
- (id)controlFactory;	// 0x301d3ae1
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x301d3ae5
- (id)dataAtIndex:(long)index;	// 0x301d3aa1
- (long)dataCount;	// 0x301d3ac1
- (void)dealloc;	// 0x301d39a1
- (BOOL)handleSelectionForControl:(id)control;	// 0x301d3b45
- (id)hashForDataAtIndex:(long)index;	// 0x301d3a4d
@end

