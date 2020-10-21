//
//  VPVideoStreamPlayLayer.h
//  HSZAVPlay
//
//  Created by Ze Shao on 2020/10/21.
//

#import <QuartzCore/QuartzCore.h>
#import <CoreVideo/CoreVideo.h>

NS_ASSUME_NONNULL_BEGIN

@interface VPVideoStreamPlayLayer : CAEAGLLayer

/** 根据frame初始化播放器 */
- (id)initWithFrame:(CGRect)frame;

- (void)inputPixelBuffer:(CVPixelBufferRef)pixelBuffer;

@end

NS_ASSUME_NONNULL_END
