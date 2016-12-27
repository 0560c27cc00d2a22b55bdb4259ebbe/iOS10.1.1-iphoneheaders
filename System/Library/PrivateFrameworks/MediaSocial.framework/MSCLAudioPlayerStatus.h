/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MSCLAudioPlayerStatus : NSObject <NSCopying> {

	double _currentTime;
	double _duration;
	NSError* _error;
	long long _state;

}

@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long state;                 //@synthesize state=_state - In the implementation block
-(long long)state;
-(double)duration;
-(void)setState:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

