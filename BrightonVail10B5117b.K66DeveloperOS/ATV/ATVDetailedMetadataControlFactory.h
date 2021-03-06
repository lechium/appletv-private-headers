/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface ATVDetailedMetadataControlFactory : XXUnknownSuperclass <BRControlFactory> {
}
+ (id)factory;	// 0x116249
- (void)_populateActors:(id)actors forControl:(id)control;	// 0x116af5
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0x116b6d
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0x116675
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0x116bfd
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0x1163ed
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0x1164f5
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0x116545
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x116281
@end

