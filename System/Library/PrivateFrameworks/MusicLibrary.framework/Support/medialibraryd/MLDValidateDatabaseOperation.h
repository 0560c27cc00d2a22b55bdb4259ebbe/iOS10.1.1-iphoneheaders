/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, ML3MusicLibrary, NSError, NSArray;

@interface MLDValidateDatabaseOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _completionBlocks;
	BOOL _truncateBeforeValidating;
	BOOL _success;
	ML3MusicLibrary* _library;
	NSError* _error;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (assign,nonatomic) BOOL truncateBeforeValidating;              //@synthesize truncateBeforeValidating=_truncateBeforeValidating - In the implementation block
@property (nonatomic,readonly) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
-(void)removeAllCompletionBlocks;
-(BOOL)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
-(BOOL)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)truncateBeforeValidating;
-(void)setTruncateBeforeValidating:(BOOL)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(NSArray *)completionBlocks;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 ;
-(NSError *)error;
-(BOOL)success;
@end
