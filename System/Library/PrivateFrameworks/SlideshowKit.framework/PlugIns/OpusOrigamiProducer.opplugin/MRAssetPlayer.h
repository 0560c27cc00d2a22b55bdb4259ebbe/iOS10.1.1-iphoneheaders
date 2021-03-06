/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRAssetPlayerDelegate;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRImage, MRAssetMaster;

@interface MRAssetPlayer : NSObject {

	int _retainByUserCount;
	CGSize _size;
	double _time;
	MRImage* _image;
	MRAssetMaster* _master;
	id<MRAssetPlayerDelegate> _delegate;
	BOOL _thumbnailIsOK;
	BOOL _isMonochromatic;
	BOOL _generatesMipmap;
	BOOL _usesPowerOfTwo;
	BOOL _isStill;

}

@property (retain) id<MRAssetPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isMonochromatic;                          //@synthesize isMonochromatic=_isMonochromatic - In the implementation block
@property (readonly) BOOL generatesMipmap;                          //@synthesize generatesMipmap=_generatesMipmap - In the implementation block
@property (readonly) BOOL usesPowerOfTwo;                           //@synthesize usesPowerOfTwo=_usesPowerOfTwo - In the implementation block
@property (assign,nonatomic) BOOL thumbnailIsOK;                    //@synthesize thumbnailIsOK=_thumbnailIsOK - In the implementation block
@property (readonly) BOOL newImageIsAvailable; 
-(id)retainByUser;
-(id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(double)arg2 ;
-(id)retainedByUserCurrentImage;
-(id)initWithPath:(id)arg1 size:(CGSize)arg2 master:(id)arg3 andOptions:(id)arg4 ;
-(BOOL)usesPowerOfTwo;
-(BOOL)isMonochromatic;
-(BOOL)newImageIsAvailable;
-(void)setThumbnailIsOK:(BOOL)arg1 ;
-(BOOL)thumbnailIsOK;
-(void)loadForTime:(double)arg1 ;
-(BOOL)generatesMipmap;
-(void)releaseByUser;
-(void)setDelegate:(id<MRAssetPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<MRAssetPlayerDelegate>)delegate;
@end

