/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVPhotoMetadataHeaderView, ATVPhotoMetadataCommentView;

__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataViewConfigurator : XXUnknownSuperclass {
	BOOL _enableFadeTransition;	// 4 = 0x4
	double _fadeTransitionDuration;	// 8 = 0x8
	ATVPhotoMetadataHeaderView *_headerPart;	// 16 = 0x10
	ATVPhotoMetadataCommentView *_commentsPart;	// 20 = 0x14
}
@property(retain, nonatomic) ATVPhotoMetadataCommentView *commentsPart;	// G=0x11fb39; S=0x11fb49; @synthesize=_commentsPart
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x11fa15; S=0x11fa51; 
@property(assign, nonatomic) BOOL enableFadeTransition;	// G=0x11fac5; S=0x11f849; @synthesize=_enableFadeTransition
@property(assign, nonatomic) double fadeTransitionDuration;	// G=0x11fad5; S=0x11faed; @synthesize=_fadeTransitionDuration
@property(retain, nonatomic) ATVPhotoMetadataHeaderView *headerPart;	// G=0x11fb01; S=0x11fb11; @synthesize=_headerPart
- (id)init;	// 0x11f781
- (void).cxx_destruct;	// 0x11fb71
// declared property getter: - (id)commentsPart;	// 0x11fb39
// declared property getter: - (BOOL)disableDisplay;	// 0x11fa15
// declared property getter: - (BOOL)enableFadeTransition;	// 0x11fac5
// declared property getter: - (double)fadeTransitionDuration;	// 0x11fad5
// declared property getter: - (id)headerPart;	// 0x11fb01
// declared property setter: - (void)setCommentsPart:(id)part;	// 0x11fb49
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x11fa51
// declared property setter: - (void)setEnableFadeTransition:(BOOL)transition;	// 0x11f849
// declared property setter: - (void)setFadeTransitionDuration:(double)duration;	// 0x11faed
// declared property setter: - (void)setHeaderPart:(id)part;	// 0x11fb11
@end
