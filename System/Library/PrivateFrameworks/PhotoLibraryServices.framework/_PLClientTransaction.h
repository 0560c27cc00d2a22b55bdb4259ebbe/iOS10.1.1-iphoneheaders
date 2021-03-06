/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSObject;

@interface _PLClientTransaction : PLClientServerTransaction {

	NSSet* _changeScopes;
	long long _addChangeScopesBatch;
	NSSet* _batchScopes;
	int _fileDescriptor;
	id _processAssertion;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _fdResourceSemaphore;
	NSString* _changeScopesDescriptionSnapshot;

}

@property (assign,nonatomic) int fileDescriptor;                                                //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,retain) id processAssertion;                                               //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * path;                                                   //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_semaphore> fdResourceSemaphore;              //@synthesize fdResourceSemaphore=_fdResourceSemaphore - In the implementation block
@property (copy) NSString * changeScopesDescriptionSnapshot;                                    //@synthesize changeScopesDescriptionSnapshot=_changeScopesDescriptionSnapshot - In the implementation block
+(id)_fdIsolationQueue;
+(id)_fdResourceSemaphore;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(int)fileDescriptor;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(void)setFileDescriptor:(int)arg1 ;
-(void)pushChangeScopesBatch;
-(void)popChangeScopesBatch;
-(void)abortTransaction;
-(id)changeScopes;
-(void)setProcessAssertion:(id)arg1 ;
-(void)setChangeScopesDescriptionSnapshot:(NSString *)arg1 ;
-(void)_updateChangeScopesDescriptionSnapshot;
-(void)persistTransactionScopes:(id)arg1 ;
-(id)processAssertion;
-(NSString *)changeScopesDescriptionSnapshot;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(id)generateChangeScopesDescription;
-(NSObject*<OS_dispatch_semaphore>)fdResourceSemaphore;
-(void)setFdResourceSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

