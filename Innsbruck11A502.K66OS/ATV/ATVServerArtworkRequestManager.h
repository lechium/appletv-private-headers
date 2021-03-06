/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVServerArtworkRequestManager : XXUnknownSuperclass {
	NSMutableDictionary *_inflightArtworkRequests;	// 4 = 0x4
}
- (id)init;	// 0x210275
- (void).cxx_destruct;	// 0x211391
- (void)_completeArtworkRequest:(id)request;	// 0x210ee5
- (void)_imageUnavailable:(id)unavailable;	// 0x210d5d
- (void)_imageUpdated:(id)updated;	// 0x210b41
- (BOOL)_startScalingIfNessecary:(id)nessecary;	// 0x210b3d
- (void)cancelAllRequests;	// 0x210971
- (void)dealloc;	// 0x210435
- (void)startArtworkRequestForImageProxy:(id)imageProxy withServerRequest:(ATVServerRequestRef)serverRequest;	// 0x210581
- (void)startArtworkRequestForImageProxy:(id)imageProxy withServerRequest:(ATVServerRequestRef)serverRequest scaledToSize:(CGSize)size;	// 0x2105a9
@end

