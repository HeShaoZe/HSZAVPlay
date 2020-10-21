//
//  H264Decoder.h
//  HSZAVPlay
//
//  Created by Ze Shao on 2020/10/21.
//

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>

@protocol H264DecoderDelegate <NSObject>

/** H264解码数据回调 */
- (void)videoDecodeOutputDataCallback:(CVImageBufferRef)imageBuffer;

@end

NS_ASSUME_NONNULL_BEGIN

@interface H264Decoder : NSObject


/** 代理 */
@property (weak, nonatomic) id<H264DecoderDelegate> delegate;

/** 解码NALU数据 */
-(void)decodeNaluData:(NSData *)naluData;

@end

NS_ASSUME_NONNULL_END
