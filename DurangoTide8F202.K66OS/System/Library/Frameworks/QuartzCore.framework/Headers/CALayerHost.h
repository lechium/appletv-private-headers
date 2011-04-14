/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CALayerHost : CALayer {
}
@property(assign) unsigned contextId;	// G=0x3028f20d; S=0x3028f219; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3028f115
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x3028f169
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x3028f095
// declared property getter: - (unsigned)contextId;	// 0x3028f20d
- (void)didChangeValueForKey:(id)key;	// 0x3028f0c9
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x3028f055
// declared property setter: - (void)setContextId:(unsigned)anId;	// 0x3028f219
@end

