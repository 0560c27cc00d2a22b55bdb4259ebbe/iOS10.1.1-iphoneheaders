/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainerPersister.h>

@class NSURL;

@interface MSPFileContainerPersister : MSPContainerPersister {

	NSURL* _persistenceFileURL;

}

@property (nonatomic,readonly) NSURL * persistenceFileURL;              //@synthesize persistenceFileURL=_persistenceFileURL - In the implementation block
+(void)initialize;
-(id)init;
-(id)dataForContents:(id)arg1 error:(out id*)arg2 ;
-(id)contentsFromData:(id)arg1 ;
-(void)commitEditedContents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPersistenceFileAtURL:(id)arg1 ;
-(NSURL *)persistenceFileURL;
-(void)fetchContentsWithCompletion:(/*^block*/id)arg1 ;
@end

