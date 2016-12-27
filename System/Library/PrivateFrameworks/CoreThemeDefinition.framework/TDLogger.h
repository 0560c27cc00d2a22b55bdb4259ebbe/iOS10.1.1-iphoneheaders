/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TDLogger : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	int _verbosity;
	int _logMaxVerbosity;

}

@property (assign,nonatomic) int verbosity; 
+(id)logger;
-(id)init;
-(void)dealloc;
-(void)logError:(id)arg1 ;
-(int)verbosity;
-(void)logMessage:(id)arg1 whenVerbosity:(int)arg2 ;
-(void)logExtra:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(void)logWarning:(id)arg1 ;
-(void)setVerbosity:(int)arg1 ;
-(void)logExtraWithFormat:(id)arg1 ;
-(void)logInfoWithFormat:(id)arg1 ;
-(void)logWarningWithFormat:(id)arg1 ;
-(void)logErrorWithFormat:(id)arg1 ;
-(BOOL)isVerbosityLogErrorsOnly;
-(BOOL)isVerbosityLogWarningsAndErrors;
-(BOOL)isVerbosityLogEverything;
-(void)waitForLoggingToComplete;
@end

