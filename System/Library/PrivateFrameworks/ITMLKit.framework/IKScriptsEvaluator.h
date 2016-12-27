/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSArray, IKAppContext, JSManagedValue, NSMutableArray, NSString;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate> {

	BOOL _isJingleRequest;
	NSArray* _scripts;
	IKAppContext* _appContext;
	JSManagedValue* _callback;
	NSMutableArray* _records;
	NSString* _identifier;

}

@property (assign,nonatomic) BOOL isJingleRequest;                          //@synthesize isJingleRequest=_isJingleRequest - In the implementation block
@property (nonatomic,retain) NSArray * scripts;                             //@synthesize scripts=_scripts - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) JSManagedValue * callback;                     //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                      //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)records;
-(JSManagedValue *)callback;
-(void)setCallback:(JSManagedValue *)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(BOOL)arg4 ;
-(void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(BOOL)arg3 ;
-(void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(BOOL)isJingleRequest;
-(void)setIsJingleRequest:(BOOL)arg1 ;
-(void)setScripts:(NSArray *)arg1 ;
-(IKAppContext *)appContext;
-(void)evaluate;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(NSArray *)scripts;
-(void)setAppContext:(IKAppContext *)arg1 ;
@end

