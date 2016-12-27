/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface AWDAgent : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _symptomsAWDConnection;
	AWDServerConnection* _libnetcoreAWDConnection;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (retain) AWDServerConnection * symptomsAWDConnection;                //@synthesize symptomsAWDConnection=_symptomsAWDConnection - In the implementation block
@property (retain) AWDServerConnection * libnetcoreAWDConnection;              //@synthesize libnetcoreAWDConnection=_libnetcoreAWDConnection - In the implementation block
+(id)defaultInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)_handleQuery:(unsigned)arg1 ;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 libnetcore:(BOOL)arg3 ;
-(void)bulkPostMetrics:(id)arg1 withIdentifier:(unsigned)arg2 libnetcore:(BOOL)arg3 ;
-(AWDServerConnection *)libnetcoreAWDConnection;
-(AWDServerConnection *)symptomsAWDConnection;
-(void)setSymptomsAWDConnection:(AWDServerConnection *)arg1 ;
-(void)setLibnetcoreAWDConnection:(AWDServerConnection *)arg1 ;
@end

