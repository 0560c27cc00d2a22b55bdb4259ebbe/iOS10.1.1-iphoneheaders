/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAnalyticsReporterBase.h>

@interface ICUsageAnalyticsReporter : ICAnalyticsReporterBase
+(id)sharedReporter;
+(void)clearSharedCollector;
-(void)incrementCountForKey:(id)arg1 ;
-(void)incrementCountForKey:(id)arg1 withSignature:(id)arg2 ;
-(void)logChecklistLengthFromTrackedToDoParagraphs:(id)arg1 ;
@end

