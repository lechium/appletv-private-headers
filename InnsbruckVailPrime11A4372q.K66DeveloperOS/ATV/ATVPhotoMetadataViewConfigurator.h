/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVPhotoMetadataCommentView, ATVPhotoMetadataHeaderView;

__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataViewConfigurator : XXUnknownSuperclass {
	BOOL _fadeTransitionEnabled;	// 4 = 0x4
	ATVPhotoMetadataHeaderView *_headerPart;	// 8 = 0x8
	ATVPhotoMetadataCommentView *_commentsPart;	// 12 = 0xc
	double _fadeTransitionDuration;	// 16 = 0x10
}
@property(retain, nonatomic) ATVPhotoMetadataCommentView *commentsPart;	// G=0xcbec5; S=0xcbed5; @synthesize=_commentsPart
@property(assign, nonatomic) BOOL displayDisabled;	// G=0xcbd91; S=0xcbdcd; 
@property(assign, nonatomic) double fadeTransitionDuration;	// G=0xcbe41; S=0xcbe59; @synthesize=_fadeTransitionDuration
@property(assign, nonatomic) BOOL fadeTransitionEnabled;	// G=0xcbe6d; S=0xcbe7d; @synthesize=_fadeTransitionEnabled
@property(retain, nonatomic) ATVPhotoMetadataHeaderView *headerPart;	// G=0xcbe8d; S=0xcbe9d; @synthesize=_headerPart
- (id)init;	// 0xcbb09
- (void).cxx_destruct;	// 0xcbefd
// declared property getter: - (id)commentsPart;	// 0xcbec5
// declared property getter: - (BOOL)displayDisabled;	// 0xcbd91
// declared property getter: - (double)fadeTransitionDuration;	// 0xcbe41
// declared property getter: - (BOOL)fadeTransitionEnabled;	// 0xcbe6d
// declared property getter: - (id)headerPart;	// 0xcbe8d
// declared property setter: - (void)setCommentsPart:(id)part;	// 0xcbed5
// declared property setter: - (void)setDisplayDisabled:(BOOL)disabled;	// 0xcbdcd
// declared property setter: - (void)setFadeTransitionDuration:(double)duration;	// 0xcbe59
// declared property setter: - (void)setFadeTransitionEnabled:(BOOL)enabled;	// 0xcbe7d
// declared property setter: - (void)setHeaderPart:(id)part;	// 0xcbe9d
- (void)setfadeTransitionEnabled:(BOOL)enabled;	// 0xcbbc5
@end
