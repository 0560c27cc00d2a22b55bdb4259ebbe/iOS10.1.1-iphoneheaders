/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface VMUDebugTimer : NSObject {

	NSDate* _programStartTime;
	NSDate* _eventStartTime;
	NSString* _eventMessage;

}
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)startWithMessage:(id)arg1 ;
@end

