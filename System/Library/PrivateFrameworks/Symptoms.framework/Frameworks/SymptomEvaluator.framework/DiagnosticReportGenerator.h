/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, DiagnosticReportGeneratorDelegate;
@class NSObject, DiagnosticCase;

@interface DiagnosticReportGenerator : NSObject {

	BOOL _reportGenerated;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeoutSeconds;
	id<DiagnosticReportGeneratorDelegate> _delegate;
	DiagnosticCase* _diagCase;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                       //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (assign,nonatomic) BOOL reportGenerated;                                        //@synthesize reportGenerated=_reportGenerated - In the implementation block
@property (nonatomic,retain) id<DiagnosticReportGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) DiagnosticCase * diagCase;                                   //@synthesize diagCase=_diagCase - In the implementation block
@property (nonatomic,copy) id completionHandler;                                          //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setDelegate:(id<DiagnosticReportGeneratorDelegate>)arg1 ;
-(id<DiagnosticReportGeneratorDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)setReportGenerated:(BOOL)arg1 ;
-(BOOL)startReportGeneration;
-(void)setDiagCase:(DiagnosticCase *)arg1 ;
-(BOOL)generateReportForCase:(id)arg1 reportName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)reportGenerated;
-(BOOL)generateReportForCase:(id)arg1 reportName:(id)arg2 ;
-(DiagnosticCase *)diagCase;
@end

