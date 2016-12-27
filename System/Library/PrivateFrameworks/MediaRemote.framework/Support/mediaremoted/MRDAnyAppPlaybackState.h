/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MRDAnyAppPlaybackState : NSObject {

	BOOL _isPlaying;
	NSDictionary* _pickedRoute;

}

@property (nonatomic,readonly) BOOL isPlaying;                          //@synthesize isPlaying=_isPlaying - In the implementation block
@property (nonatomic,readonly) NSDictionary * pickedRoute;              //@synthesize pickedRoute=_pickedRoute - In the implementation block
-(id)initWithIsPlayingFlag:(BOOL)arg1 pickedRoute:(id)arg2 ;
-(void)dealloc;
-(BOOL)isPlaying;
-(NSDictionary *)pickedRoute;
@end

