/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor {
    unsigned int _depthResolveFilter;
}

@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned int depthResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned int)depthResolveFilter;
- (void)setDepthResolveFilter:(unsigned int)arg1;

@end