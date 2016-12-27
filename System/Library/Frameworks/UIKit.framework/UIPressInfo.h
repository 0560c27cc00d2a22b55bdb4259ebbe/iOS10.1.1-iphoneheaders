/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIPressInfo : NSObject {

	BOOL _longClick;
	double _timestamp;
	long long _phase;
	long long _type;
	unsigned long long _source;
	unsigned long long _gameControllerComponent;
	double _force;
	unsigned long long _clickCount;

}

@property (assign,nonatomic) double timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase;                                         //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long gameControllerComponent;              //@synthesize gameControllerComponent=_gameControllerComponent - In the implementation block
@property (assign,nonatomic) double force;                                            //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long clickCount;                           //@synthesize clickCount=_clickCount - In the implementation block
@property (assign,getter=isLongClick,nonatomic) BOOL longClick;                       //@synthesize longClick=_longClick - In the implementation block
-(id)init;
-(id)description;
-(double)timestamp;
-(void)setType:(long long)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setForce:(double)arg1 ;
-(void)setClickCount:(unsigned long long)arg1 ;
-(void)setLongClick:(BOOL)arg1 ;
-(long long)type;
-(long long)phase;
-(BOOL)isLongClick;
-(double)force;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(unsigned long long)clickCount;
-(unsigned long long)gameControllerComponent;
-(id)_sourceDescription;
-(void)setGameControllerComponent:(unsigned long long)arg1 ;
@end

