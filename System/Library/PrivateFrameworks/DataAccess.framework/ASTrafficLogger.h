/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject {

	NSFileHandle* _lookasideFileHandle;
	NSString* _lookasideFilePath;
	BOOL _isOutgoingTraffic;
	BOOL _didFlushLogs;

}

@property (assign,nonatomic) BOOL isOutgoingTraffic;              //@synthesize isOutgoingTraffic=_isOutgoingTraffic - In the implementation block
+(id)_logQueue;
-(void)dealloc;
-(void)flushLogs;
-(void)_moveLogFileContentsAtPath:(id)arg1 ;
-(void)_openLookasideFile;
-(BOOL)isOutgoingTraffic;
-(void)setIsOutgoingTraffic:(BOOL)arg1 ;
-(void)logWBXMLData:(id)arg1 ;
-(void)logPlainTextData:(id)arg1 ;
@end

