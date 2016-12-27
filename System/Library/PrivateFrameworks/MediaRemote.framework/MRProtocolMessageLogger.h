/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRProtocolMessageLogger : NSObject {

	int _token;
	BOOL _shouldLog;

}

@property (assign,nonatomic) BOOL shouldLog;              //@synthesize shouldLog=_shouldLog - In the implementation block
+(id)sharedLogger;
-(id)init;
-(void)dealloc;
-(BOOL)shouldLog;
-(void)logMessage:(id)arg1 protocolMessage:(id)arg2 ;
-(void)setShouldLog:(BOOL)arg1 ;
@end

