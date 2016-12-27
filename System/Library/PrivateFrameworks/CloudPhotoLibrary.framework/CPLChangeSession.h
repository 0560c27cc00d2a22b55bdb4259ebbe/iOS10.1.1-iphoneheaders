/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSProgress, NSString, CPLLibraryManager;

@interface CPLChangeSession : NSObject <CPLAbstractObject> {

	CPLPlatformObject* _platformObject;
	NSProgress* _sessionProgress;
	NSString* _sessionIdentifier;
	CPLLibraryManager* _libraryManager;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSProgress * sessionProgress;                    //@synthesize sessionProgress=_sessionProgress - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) CPLLibraryManager * libraryManager;              //@synthesize libraryManager=_libraryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)sessionIdentifier;
-(void)resume;
-(void)pause;
-(CPLPlatformObject *)platformObject;
-(id)_sessionLogDomain;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithLibraryManager:(id)arg1 ;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSProgress *)sessionProgress;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLLibraryManager *)libraryManager;
@end

