/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSDate;

@interface HGInputBitmapCacheItem : NSObject {

	NSDate* _lastUsedTime;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* _bitmaps;

}

@property (assign,nonatomic) vector<HGRef<HGBitmap> bitmaps;              //@synthesize bitmaps=_bitmaps - In the implementation block
@property (nonatomic,retain) NSDate * lastUsedTime;                       //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
-(void)updateLastUsedTime;
-(id)initWithHGBitmap:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 ;
-(vector<HGRef<HGBitmap>)bitmaps;
-(void)setBitmaps:(vector<HGRef<HGBitmap>)arg1 ;
-(NSDate *)lastUsedTime;
-(void)setLastUsedTime:(NSDate *)arg1 ;
@end

