/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSImageDescriptor : NSObject {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _featureChannels;
	unsigned long long _numberOfImages;
	unsigned long long _channelFormat;
	unsigned long long _cacheMode;
	unsigned long long _storageMode;
	unsigned long long _usage;
	unsigned long long _featureChannelsLayout;
	unsigned long long _cpuCacheMode;

}

@property (assign,nonatomic) unsigned long long featureChannelsLayout;              //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (assign,nonatomic) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long featureChannels;                    //@synthesize featureChannels=_featureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (assign,nonatomic) unsigned long long channelFormat;                      //@synthesize channelFormat=_channelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long cpuCacheMode;                       //@synthesize cpuCacheMode=_cpuCacheMode - In the implementation block
@property (assign,nonatomic) unsigned long long storageMode;                        //@synthesize storageMode=_storageMode - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                              //@synthesize usage=_usage - In the implementation block
+(id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
+(id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 ;
-(unsigned long long)featureChannelsLayout;
-(id)newTextureDescriptor;
-(unsigned long long)featureChannels;
-(unsigned long long)channelFormat;
-(id)init;
-(id)debugDescription;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)usage;
-(void)setUsage:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(void)setNumberOfImages:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImages;
-(void)setFeatureChannels:(unsigned long long)arg1 ;
-(void)setChannelFormat:(unsigned long long)arg1 ;
-(void)setFeatureChannelsLayout:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)cpuCacheMode;
@end

