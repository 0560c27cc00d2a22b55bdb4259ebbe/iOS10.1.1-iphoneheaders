/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MLDServiceDatabaseImport, NSError, NSData;

@interface MLDImportOperation : NSOperation {

	/*^block*/id _clientCompletionHandler;
	BOOL _suspended;
	BOOL _success;
	float _progress;
	MLDServiceDatabaseImport* _import;
	/*^block*/id _progressBlock;
	NSError* _error;
	NSData* _returnData;

}

@property (nonatomic,readonly) unsigned long long importSource; 
@property (nonatomic,readonly) MLDServiceDatabaseImport * import;              //@synthesize import=_import - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressBlock;                                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) BOOL success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * returnData;                            //@synthesize returnData=_returnData - In the implementation block
+(id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2 ;
-(void)_setClientCompletionHandler:(/*^block*/id)arg1 ;
-(MLDServiceDatabaseImport *)import;
-(unsigned long long)importSource;
-(/*^block*/id)_clientCompletionHandler;
-(void)_writerTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabaseImport:(id)arg1 ;
-(id)init;
-(BOOL)isSuspended;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)main;
-(void)setSuspended:(BOOL)arg1 ;
-(id)longDescription;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setReturnData:(NSData *)arg1 ;
-(NSData *)returnData;
@end

