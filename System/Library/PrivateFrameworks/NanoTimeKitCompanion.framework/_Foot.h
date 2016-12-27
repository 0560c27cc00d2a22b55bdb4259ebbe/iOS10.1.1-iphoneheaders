/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Foot : _Geometry {

	char _animFrame;
	char _frameDisplayTime60th;
	unsigned char _state;
	NSMutableArray* _texs;

}

@property (nonatomic,retain) NSMutableArray * texs;                  //@synthesize texs=_texs - In the implementation block
@property (assign,nonatomic) char animFrame;                         //@synthesize animFrame=_animFrame - In the implementation block
@property (assign,nonatomic) char frameDisplayTime60th;              //@synthesize frameDisplayTime60th=_frameDisplayTime60th - In the implementation block
@property (assign,nonatomic) unsigned char state;                    //@synthesize state=_state - In the implementation block
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(NSMutableArray *)texs;
-(void)setTexs:(NSMutableArray *)arg1 ;
-(char)frameDisplayTime60th;
-(void)setFrameDisplayTime60th:(char)arg1 ;
-(char)animFrame;
-(void)setAnimFrame:(char)arg1 ;
@end

