//
//  MetalPlayer.h
//  HSZAVPlay
//
//  Created by Ze Shao on 2020/10/21.
//

#import <QuartzCore/QuartzCore.h>
#import <CoreVideo/CoreVideo.h>

NS_ASSUME_NONNULL_BEGIN

@interface MetalPlayer : CAMetalLayer

- (void)adjustSize:(CGSize)size;

- (void)inputPixelBuffer:(CVPixelBufferRef)pixelBuffer;

- (instancetype)initWithFrame:(CGRect)frame;

@end

NS_ASSUME_NONNULL_END
