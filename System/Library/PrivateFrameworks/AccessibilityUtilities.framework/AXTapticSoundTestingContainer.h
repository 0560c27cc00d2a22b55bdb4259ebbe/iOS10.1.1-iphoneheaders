/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXTapticSoundTestingContainer : NSObject {

	NSString* _sound;
	double _delay;

}

@property (nonatomic,retain) NSString * sound;              //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) double delay;                  //@synthesize delay=_delay - In the implementation block
-(void)dealloc;
-(id)description;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
@end

