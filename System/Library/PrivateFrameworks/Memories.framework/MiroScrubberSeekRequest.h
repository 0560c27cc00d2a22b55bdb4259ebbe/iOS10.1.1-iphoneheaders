/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, AVPlayer;

@interface MiroScrubberSeekRequest : NSObject {

	NSDate* _dateCreated;
	double _seekTime;
	AVPlayer* _avPlayer;

}

@property (nonatomic,copy) NSDate * dateCreated;                      //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) double seekTime;                         //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic,__weak) AVPlayer * avPlayer;              //@synthesize avPlayer=_avPlayer - In the implementation block
-(id)init;
-(NSDate *)dateCreated;
-(AVPlayer *)avPlayer;
-(double)seekTime;
-(void)setDateCreated:(NSDate *)arg1 ;
-(id)initWithAvPlayer:(id)arg1 seekTime:(double)arg2 ;
-(void)setSeekTime:(double)arg1 ;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
@end

