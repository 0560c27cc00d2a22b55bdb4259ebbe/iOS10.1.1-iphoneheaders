/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityUserActionEvent : OSActivityEvent {

	unsigned long long _senderProgramCounter;

}

@property (readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
@end

