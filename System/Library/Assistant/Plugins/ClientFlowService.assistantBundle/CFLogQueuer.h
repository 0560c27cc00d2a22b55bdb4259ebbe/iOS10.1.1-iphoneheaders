/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CFLogQueuer : NSObject {

	NSMutableArray* logQueue;

}
-(id)init;
-(void)addLogMessage:(id)arg1 ;
-(id)queuedLogs;
-(void)clearLogs;
@end

