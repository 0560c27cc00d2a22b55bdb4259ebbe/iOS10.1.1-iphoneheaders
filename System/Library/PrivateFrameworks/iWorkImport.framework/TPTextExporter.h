/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKExporter.h>

@class TPDocumentRoot, TSUProgressContext, NSString;

@interface TPTextExporter : NSObject <TSKExporter> {

	TPDocumentRoot* mDocumentRoot;
	BOOL mIsCancelled;
	TSUProgressContext* mProgressContext;

}

@property (retain) TSUProgressContext * progressContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)setup;
-(void)setProgressContext:(TSUProgressContext *)arg1 ;
-(TSUProgressContext *)progressContext;
-(void)quit;
@end

