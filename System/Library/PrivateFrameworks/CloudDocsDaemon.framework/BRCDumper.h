/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCDumper : NSObject
-(void)reset;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(id)stringForReset;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)write:(const char*)arg1 ;
-(void)startFgColor:(int)arg1 attr:(int)arg2 ;
-(void)startBgColor:(int)arg1 attr:(int)arg2 ;
-(void)startFgColor:(int)arg1 ;
-(void)startBgColor:(int)arg1 ;
-(void)startAttributes:(int)arg1 ;
-(void)changeFgColor:(int)arg1 ;
-(void)changeBgColor:(int)arg1 ;
-(void)changeAttributes:(int)arg1 ;
@end

