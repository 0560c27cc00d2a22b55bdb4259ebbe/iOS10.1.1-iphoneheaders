/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, CADisplayLink, CADisplay;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	id _client;
	CADisplayLink* _caDisplayLink;
	CADisplay* _display;
	BOOL _paused;
	BOOL _callbackAlreadyInProgress;
	double _previousFrameTime;
	float _preferredFramesPerSecond;
	/*^block*/id _block;
	float _averageFrameTime;
	long long _frameCount;
	double _frameCountBeginTime;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) CADisplay * display; 
+(id)displayLinkWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(CADisplay *)display;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_teardown;
-(long long)preferredFramesPerSecond;
-(void)_setup;
-(id)initWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(void)_callbackForNextFrame:(double)arg1 ;
-(BOOL)_callbackAlreadyInProgress;
-(void)_setCallbackAlreadyInProgress:(BOOL)arg1 ;
-(void)_caDisplayLinkCallback;
-(void)setDisplay:(CADisplay *)arg1 ;
@end

